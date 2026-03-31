#!/usr/bin/env bash
set -euo pipefail

BASE_DIR="${BASE_DIR:-/mnt/hdd/autonomy/.caches}"
SLEEP_BETWEEN="${SLEEP_BETWEEN:-0.2}"
GUI_DISPLAY="${GUI_DISPLAY:-${DISPLAY:-:0}}"
GUI_XAUTHORITY="${GUI_XAUTHORITY:-${XAUTHORITY:-}}"
ENABLE_XHOST="${ENABLE_XHOST:-1}"
LOG_FILTER_MODE="${LOG_FILTER_MODE:-all}"  # all | problems
LOG_FILTER_REGEX="${LOG_FILTER_REGEX:-\\[(WARN|ERROR|FATAL)\\]|\\b(WARN|ERROR|FATAL)\\b}"


# planningsim
MODULES=(
  # "[furive-bag]AW-SampleBag_v1.0.0_ws"
  "[furive-control]AW-Control_v1.0.0_ws"
  "[furive-gui]AW-Rviz_v1.0.0_ws"
  "[furive-localization]AW-Localization_v1.0.0_ws"
  "[furive-map]AW-SampleMap_v1.0.0_ws"
  "[furive-perception]AW-Perception_v1.0.0_ws"
  "[furive-planning]AW-Planning_v1.0.0_ws"
  # "[furive-sensing]AW-SampleSensor_v1.0.0_ws"
  # "[furive-simulator]AW-PlanningSim_v1.0.0_ws"
  "[furive-system]AW-System_v1.0.0_ws"
  "[furive-vehicle]AW-SampleVehicle_v1.0.0_ws"
  # "[furive-sensing]AW-SampleSensor_v1.0.0_ws"
  # "[furive-map]AW-SampleMapRosBag_v1.0.0_ws"
)

if [[ ! -d "$BASE_DIR" ]]; then
  echo "[ERROR] directory not found: $BASE_DIR" >&2
  exit 1
fi

if ! command -v gnome-terminal >/dev/null 2>&1; then
  echo "[ERROR] gnome-terminal not found." >&2
  exit 1
fi

if [[ ${#MODULES[@]} -eq 0 ]]; then
  echo "[ERROR] no modules configured in MODULES array." >&2
  exit 1
fi

if [[ "$ENABLE_XHOST" == "1" ]] && command -v xhost >/dev/null 2>&1; then
  DISPLAY="$GUI_DISPLAY" xhost +SI:localuser:"$USER" >/dev/null 2>&1 || \
    echo "[WARN] xhost authorization update failed (continuing)." >&2
  DISPLAY="$GUI_DISPLAY" xhost +SI:localuser:root >/dev/null 2>&1 || \
    echo "[WARN] xhost root authorization update failed (continuing)." >&2
fi

launch_count=0

for module_name in "${MODULES[@]}"; do
  module_dir="${BASE_DIR}/${module_name}"
  run_file="${module_dir}/run.sh"

  if [[ ! -d "$module_dir" ]]; then
    echo "[SKIP] module dir not found: $module_dir" >&2
    continue
  fi

  if [[ ! -r "$run_file" ]]; then
    echo "[SKIP] run.sh is not readable: $run_file" >&2
    continue
  fi

  echo "[LAUNCH] $module_name -> $run_file"

  if gnome-terminal --title="$module_name" -- bash -lc "
    set -e
    export DISPLAY=\"$GUI_DISPLAY\"
    if [[ -n \"$GUI_XAUTHORITY\" ]]; then
      export XAUTHORITY=\"$GUI_XAUTHORITY\"
    else
      unset XAUTHORITY
    fi
    cd \"$module_dir\"
    echo \"[$module_name] PWD=\$PWD\"
    echo \"[$module_name] DISPLAY=\$DISPLAY XAUTHORITY=\${XAUTHORITY:-<unset>}\"
    echo \"[$module_name] LOG_FILTER_MODE=$LOG_FILTER_MODE\"
    set +e
    if [[ \"$LOG_FILTER_MODE\" == \"problems\" ]]; then
      echo \"[$module_name] filtering logs with regex: $LOG_FILTER_REGEX\"
      if command -v rg >/dev/null 2>&1; then
        bash ./run.sh 2>&1 | rg --line-buffered -i -e \"$LOG_FILTER_REGEX\"
        status=\${PIPESTATUS[0]}
      else
        bash ./run.sh 2>&1 | grep --line-buffered -E -i \"$LOG_FILTER_REGEX\"
        status=\${PIPESTATUS[0]}
      fi
    else
      bash ./run.sh
      status=\$?
    fi
    set -e
    echo \"[$module_name] run.sh exited with status \$status. Press Enter to close...\"
    read
    exit \$status
  "; then
    ((launch_count+=1))
  else
    echo "[SKIP] failed to launch terminal for: $module_name" >&2
  fi

  sleep "$SLEEP_BETWEEN"
done

echo "Launched $launch_count module(s)."
