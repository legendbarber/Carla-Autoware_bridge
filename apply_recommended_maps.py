#!/usr/bin/env python3

import argparse
import csv
import os
import shutil
import sys
from datetime import datetime
from typing import List


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description=(
            "Apply recommended accel/brake maps produced by analyze_calibrator_log.py "
            "to autoware_carla_interface/calibration_maps with backup."
        )
    )
    parser.add_argument(
        "--recommended-dir",
        required=True,
        help="Directory containing recommended_accel_map.csv and recommended_brake_map.csv",
    )
    parser.add_argument(
        "--target-map-dir",
        default=(
            "/mnt/hdd/autonomy/ws/Carla-autoware_interface/"
            "autoware_carla_interface/calibration_maps"
        ),
        help="Directory containing accel_map.csv and brake_map.csv to overwrite",
    )
    parser.add_argument(
        "--backup-root",
        default="/mnt/hdd/autonomy/ws/Carla-autoware_interface/map_backups",
        help="Root directory for timestamped backups",
    )
    parser.add_argument(
        "--package-dir",
        default=(
            "/mnt/hdd/autonomy/ws/Carla-autoware_interface/"
            "autoware_carla_interface"
        ),
        help="Package directory shown in rebuild instructions",
    )
    parser.add_argument(
        "--force",
        action="store_true",
        help="Apply even if monotonic validation fails",
    )
    return parser.parse_args()


def load_map(path: str) -> List[List[str]]:
    with open(path, "r", encoding="utf-8") as f:
        return list(csv.reader(f))


def validate_shape(rows: List[List[str]], name: str) -> None:
    if not rows:
        raise ValueError(f"{name}: empty CSV")
    width = len(rows[0])
    if width < 2:
        raise ValueError(f"{name}: must have at least 2 columns")
    for i, row in enumerate(rows[1:], start=2):
        if len(row) != width:
            raise ValueError(f"{name}: row {i} has {len(row)} columns, expected {width}")


def validate_monotonic(rows: List[List[str]], increasing: bool, name: str) -> None:
    data = [[float(v) for v in row[1:]] for row in rows[1:]]
    for row_i in range(1, len(data)):
        for col_i in range(len(data[0])):
            prev_v = data[row_i - 1][col_i]
            curr_v = data[row_i][col_i]
            ok = curr_v > prev_v if increasing else curr_v < prev_v
            if not ok:
                relation = ">" if increasing else "<"
                raise ValueError(
                    f"{name}: monotonic validation failed at row={row_i+1}, col={col_i+2}: "
                    f"{curr_v} not {relation} {prev_v}"
                )


def ensure_exists(path: str, description: str) -> None:
    if not os.path.exists(path):
        raise FileNotFoundError(f"{description} not found: {path}")


def copy_with_backup(src: str, dst: str, backup_dir: str) -> None:
    os.makedirs(backup_dir, exist_ok=True)
    backup_path = os.path.join(backup_dir, os.path.basename(dst))
    if os.path.exists(dst):
        shutil.copy2(dst, backup_path)
    shutil.copy2(src, dst)


def main() -> int:
    args = parse_args()

    accel_src = os.path.join(args.recommended_dir, "recommended_accel_map.csv")
    brake_src = os.path.join(args.recommended_dir, "recommended_brake_map.csv")
    accel_dst = os.path.join(args.target_map_dir, "accel_map.csv")
    brake_dst = os.path.join(args.target_map_dir, "brake_map.csv")

    ensure_exists(accel_src, "recommended accel map")
    ensure_exists(brake_src, "recommended brake map")
    ensure_exists(args.target_map_dir, "target map directory")

    accel_rows = load_map(accel_src)
    brake_rows = load_map(brake_src)
    validate_shape(accel_rows, "recommended_accel_map.csv")
    validate_shape(brake_rows, "recommended_brake_map.csv")

    try:
        validate_monotonic(accel_rows, increasing=True, name="recommended_accel_map.csv")
        validate_monotonic(brake_rows, increasing=False, name="recommended_brake_map.csv")
    except Exception as exc:
        if not args.force:
            raise
        print(f"[WARN] {exc}")
        print("[WARN] applying maps anyway because --force was set")

    timestamp = datetime.now().strftime("%Y%m%d_%H%M%S")
    backup_dir = os.path.join(args.backup_root, timestamp)

    copy_with_backup(accel_src, accel_dst, backup_dir)
    copy_with_backup(brake_src, brake_dst, backup_dir)

    print(f"Applied maps to {args.target_map_dir}")
    print(f"Backup saved in {backup_dir}")
    print("")
    print("Next steps:")
    print(f"  cd {args.package_dir}")
    print("  source /opt/ros/humble/setup.bash")
    print("  source /home/a01004/autoware/install/setup.bash")
    print("  colcon build --symlink-install --packages-select autoware_carla_interface")
    print("  restart terminal 3 launch")
    return 0


if __name__ == "__main__":
    try:
        raise SystemExit(main())
    except Exception as exc:
        print(f"[ERROR] {exc}", file=sys.stderr)
        raise SystemExit(1)
