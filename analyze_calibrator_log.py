#!/usr/bin/env python3

import argparse
import csv
import math
import os
from dataclasses import dataclass
from statistics import mean, pstdev
from typing import Dict
from typing import List
from typing import Tuple


NUMERIC_LIMITS = 1e-2


@dataclass
class LogSample:
    velocity: float
    final_accel: float
    accel_pedal: float
    brake_pedal: float
    accel_pedal_speed: float
    brake_pedal_speed: float
    pitch: float
    steer: float
    jerk: float


@dataclass
class CellStats:
    count: int
    avg_observed_acc: float
    std_observed_acc: float
    current_map_acc: float
    recommended_map_acc: float
    delta: float


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description=(
            "Analyze autoware_accel_brake_map_calibrator log.csv and derive "
            "cell-wise map corrections for accel_map.csv and brake_map.csv."
        )
    )
    parser.add_argument("--log-csv", required=True, help="Path to calibrator log.csv")
    parser.add_argument(
        "--map-dir",
        required=True,
        help="Directory containing accel_map.csv and brake_map.csv",
    )
    parser.add_argument(
        "--output-dir",
        required=True,
        help="Directory to write analysis CSVs and recommended maps",
    )
    parser.add_argument(
        "--blend",
        type=float,
        default=0.7,
        help=(
            "Blend ratio for applying observed cell mean to current map. "
            "0 keeps current map, 1 fully replaces with observed mean."
        ),
    )
    parser.add_argument(
        "--min-count",
        type=int,
        default=8,
        help="Minimum number of valid samples required to update a cell",
    )
    parser.add_argument(
        "--velocity-diff-thr",
        type=float,
        default=0.556,
        help="Maximum distance from map velocity index to accept a sample [m/s]",
    )
    parser.add_argument(
        "--pedal-diff-thr",
        type=float,
        default=0.03,
        help="Maximum distance from map pedal index to accept a sample",
    )
    parser.add_argument("--min-vel-thr", type=float, default=0.1)
    parser.add_argument("--max-steer-thr", type=float, default=0.2)
    parser.add_argument("--max-pitch-thr", type=float, default=0.02)
    parser.add_argument("--max-pedal-vel-thr", type=float, default=0.15)
    parser.add_argument("--max-jerk-thr", type=float, default=0.7)
    parser.add_argument(
        "--top-n",
        type=int,
        default=20,
        help="Number of largest-magnitude cell changes to print",
    )
    return parser.parse_args()


def load_map(path: str) -> Tuple[List[float], List[float], List[List[float]]]:
    with open(path, "r", encoding="utf-8") as f:
        rows = list(csv.reader(f))
    velocity_index = [float(v) for v in rows[0][1:]]
    pedal_index = [float(r[0]) for r in rows[1:]]
    values = [[float(v) for v in r[1:]] for r in rows[1:]]
    return velocity_index, pedal_index, values


def write_map(
    path: str, velocity_index: List[float], pedal_index: List[float], values: List[List[float]]
) -> None:
    with open(path, "w", encoding="utf-8", newline="") as f:
        writer = csv.writer(f)
        writer.writerow(["default", *[format_number(v) for v in velocity_index]])
        for pedal, row in zip(pedal_index, values):
            writer.writerow([format_number(pedal), *[format_number(v) for v in row]])


def format_number(value: float) -> str:
    if abs(value - round(value)) < 1e-9:
        return str(int(round(value)))
    return f"{value:.3f}"


def clamp(value: float, lo: float, hi: float) -> float:
    return max(lo, min(hi, value))


def read_log_samples(path: str) -> List[LogSample]:
    with open(path, "r", encoding="utf-8") as f:
        reader = csv.DictReader(f, skipinitialspace=True)
        samples = []
        for row in reader:
            samples.append(
                LogSample(
                    velocity=float(row["velocity"]),
                    final_accel=float(row["final_accel"]),
                    accel_pedal=float(row["accel_pedal"]),
                    brake_pedal=float(row["brake_pedal"]),
                    accel_pedal_speed=float(row["accel_pedal_speed"]),
                    brake_pedal_speed=float(row["brake_pedal_speed"]),
                    pitch=float(row["pitch"]),
                    steer=float(row["steer"]),
                    jerk=float(row["jerk"]),
                )
            )
    return samples


def is_valid_sample(sample: LogSample, args: argparse.Namespace) -> bool:
    if sample.velocity < args.min_vel_thr:
        return False
    if abs(sample.steer) > args.max_steer_thr:
        return False
    if abs(sample.pitch) > args.max_pitch_thr:
        return False
    if abs(sample.accel_pedal_speed) > args.max_pedal_vel_thr:
        return False
    if abs(sample.brake_pedal_speed) > args.max_pedal_vel_thr:
        return False
    if abs(sample.jerk) > args.max_jerk_thr:
        return False
    if sample.accel_pedal > NUMERIC_LIMITS and sample.brake_pedal > NUMERIC_LIMITS:
        return False
    return True


def nearest_index(values: List[float], target: float) -> Tuple[int, float]:
    best_index = 0
    best_diff = float("inf")
    for i, value in enumerate(values):
        diff = abs(value - target)
        if diff < best_diff:
            best_index = i
            best_diff = diff
    return best_index, best_diff


def collect_cell_samples(
    samples: List[LogSample],
    velocity_index: List[float],
    accel_pedal_index: List[float],
    brake_pedal_index: List[float],
    args: argparse.Namespace,
) -> Tuple[Dict[Tuple[int, int], List[float]], Dict[Tuple[int, int], List[float]], int]:
    accel_cells: Dict[Tuple[int, int], List[float]] = {}
    brake_cells: Dict[Tuple[int, int], List[float]] = {}
    skipped = 0

    for sample in samples:
        if not is_valid_sample(sample, args):
            skipped += 1
            continue

        vel_i, vel_diff = nearest_index(velocity_index, sample.velocity)
        if vel_diff > args.velocity_diff_thr:
            skipped += 1
            continue

        if sample.accel_pedal > NUMERIC_LIMITS and sample.brake_pedal <= NUMERIC_LIMITS:
            pedal_i, pedal_diff = nearest_index(accel_pedal_index, sample.accel_pedal)
            if pedal_diff > args.pedal_diff_thr:
                skipped += 1
                continue
            accel_cells.setdefault((pedal_i, vel_i), []).append(sample.final_accel)
            continue

        if sample.brake_pedal > NUMERIC_LIMITS and sample.accel_pedal <= NUMERIC_LIMITS:
            pedal_i, pedal_diff = nearest_index(brake_pedal_index, sample.brake_pedal)
            if pedal_diff > args.pedal_diff_thr:
                skipped += 1
                continue
            brake_cells.setdefault((pedal_i, vel_i), []).append(sample.final_accel)
            continue

        skipped += 1

    return accel_cells, brake_cells, skipped


def build_stats(
    current_map: List[List[float]],
    sample_cells: Dict[Tuple[int, int], List[float]],
    blend: float,
    min_count: int,
) -> Dict[Tuple[int, int], CellStats]:
    stats: Dict[Tuple[int, int], CellStats] = {}
    for key, observed_values in sample_cells.items():
        row_i, col_i = key
        current_value = current_map[row_i][col_i]
        avg_observed = mean(observed_values)
        std_observed = pstdev(observed_values) if len(observed_values) > 1 else 0.0
        if len(observed_values) >= min_count:
            recommended = (1.0 - blend) * current_value + blend * avg_observed
        else:
            recommended = current_value
        stats[key] = CellStats(
            count=len(observed_values),
            avg_observed_acc=avg_observed,
            std_observed_acc=std_observed,
            current_map_acc=current_value,
            recommended_map_acc=recommended,
            delta=recommended - current_value,
        )
    return stats


def apply_stats_to_map(
    map_values: List[List[float]], stats: Dict[Tuple[int, int], CellStats]
) -> List[List[float]]:
    updated = [row[:] for row in map_values]
    for (row_i, col_i), cell in stats.items():
        if cell.count > 0:
            updated[row_i][col_i] = cell.recommended_map_acc
    return updated


def enforce_monotonic_accel(values: List[List[float]]) -> None:
    for col_i in range(len(values[0])):
        for row_i in range(1, len(values)):
            if values[row_i][col_i] <= values[row_i - 1][col_i]:
                values[row_i][col_i] = round(values[row_i - 1][col_i] + 0.001, 3)


def enforce_monotonic_brake(values: List[List[float]]) -> None:
    for col_i in range(len(values[0])):
        for row_i in range(1, len(values)):
            if values[row_i][col_i] >= values[row_i - 1][col_i]:
                values[row_i][col_i] = round(values[row_i - 1][col_i] - 0.001, 3)


def write_analysis_csv(
    path: str,
    pedal_index: List[float],
    velocity_index: List[float],
    stats: Dict[Tuple[int, int], CellStats],
) -> None:
    with open(path, "w", encoding="utf-8", newline="") as f:
        writer = csv.writer(f)
        writer.writerow(
            [
                "pedal",
                "velocity",
                "count",
                "current_map_acc",
                "avg_observed_acc",
                "recommended_map_acc",
                "delta",
                "std_observed_acc",
            ]
        )
        for (row_i, col_i), cell in sorted(stats.items()):
            writer.writerow(
                [
                    format_number(pedal_index[row_i]),
                    format_number(velocity_index[col_i]),
                    cell.count,
                    f"{cell.current_map_acc:.6f}",
                    f"{cell.avg_observed_acc:.6f}",
                    f"{cell.recommended_map_acc:.6f}",
                    f"{cell.delta:.6f}",
                    f"{cell.std_observed_acc:.6f}",
                ]
            )


def print_top_changes(
    title: str,
    pedal_index: List[float],
    velocity_index: List[float],
    stats: Dict[Tuple[int, int], CellStats],
    top_n: int,
) -> None:
    print(title)
    ranked = sorted(stats.items(), key=lambda item: abs(item[1].delta), reverse=True)
    if not ranked:
        print("  no matching cells")
        return
    for (row_i, col_i), cell in ranked[:top_n]:
        direction = "raise" if cell.delta > 0 else "lower"
        print(
            "  pedal=%s vel=%s count=%d current=%.3f observed=%.3f delta=%+.3f => %s"
            % (
                format_number(pedal_index[row_i]),
                format_number(velocity_index[col_i]),
                cell.count,
                cell.current_map_acc,
                cell.avg_observed_acc,
                cell.delta,
                direction,
            )
        )


def main() -> None:
    args = parse_args()
    os.makedirs(args.output_dir, exist_ok=True)

    accel_map_path = os.path.join(args.map_dir, "accel_map.csv")
    brake_map_path = os.path.join(args.map_dir, "brake_map.csv")

    velocity_index_a, accel_pedal_index, accel_map = load_map(accel_map_path)
    velocity_index_b, brake_pedal_index, brake_map = load_map(brake_map_path)
    if velocity_index_a != velocity_index_b:
        raise ValueError("accel_map.csv and brake_map.csv have different velocity indices")

    samples = read_log_samples(args.log_csv)
    accel_cells, brake_cells, skipped = collect_cell_samples(
        samples,
        velocity_index_a,
        accel_pedal_index,
        brake_pedal_index,
        args,
    )

    accel_stats = build_stats(accel_map, accel_cells, args.blend, args.min_count)
    brake_stats = build_stats(brake_map, brake_cells, args.blend, args.min_count)

    recommended_accel = apply_stats_to_map(accel_map, accel_stats)
    recommended_brake = apply_stats_to_map(brake_map, brake_stats)
    enforce_monotonic_accel(recommended_accel)
    enforce_monotonic_brake(recommended_brake)

    write_map(
        os.path.join(args.output_dir, "recommended_accel_map.csv"),
        velocity_index_a,
        accel_pedal_index,
        recommended_accel,
    )
    write_map(
        os.path.join(args.output_dir, "recommended_brake_map.csv"),
        velocity_index_a,
        brake_pedal_index,
        recommended_brake,
    )
    write_analysis_csv(
        os.path.join(args.output_dir, "accel_cell_analysis.csv"),
        accel_pedal_index,
        velocity_index_a,
        accel_stats,
    )
    write_analysis_csv(
        os.path.join(args.output_dir, "brake_cell_analysis.csv"),
        brake_pedal_index,
        velocity_index_a,
        brake_stats,
    )

    used_accel = sum(1 for cell in accel_stats.values() if cell.count >= args.min_count)
    used_brake = sum(1 for cell in brake_stats.values() if cell.count >= args.min_count)
    print("samples_total=%d skipped=%d" % (len(samples), skipped))
    print("accel_cells_with_updates=%d brake_cells_with_updates=%d" % (used_accel, used_brake))
    print_top_changes("Top accel map changes", accel_pedal_index, velocity_index_a, accel_stats, args.top_n)
    print_top_changes("Top brake map changes", brake_pedal_index, velocity_index_a, brake_stats, args.top_n)
    print("Outputs written to %s" % args.output_dir)
    print(
        "Interpretation: positive delta means the current map underestimates actual acceleration "
        "at that cell, so the map value should be raised. That usually reduces commanded pedal "
        "for the same target acceleration."
    )


if __name__ == "__main__":
    main()
