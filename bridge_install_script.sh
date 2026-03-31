#!/usr/bin/env bash
set -euo pipefail

BASE_DIR="$(cd "$(dirname "$0")" && pwd)"
MSG_WS="$BASE_DIR/msg_ws"
DEPS_WS="$BASE_DIR/deps_ws"
BRIDGE_WS="$BASE_DIR/bridge_ws"
INTERFACE_WS="$BASE_DIR/autoware_carla_interface"
ROS_SETUP="/opt/ros/humble/setup.bash"

require_dir() {
  if [[ ! -d "$1" ]]; then
    echo "[ERROR] Missing directory: $1" >&2
    exit 1
  fi
}

require_file() {
  if [[ ! -f "$1" ]]; then
    echo "[ERROR] Missing file: $1" >&2
    exit 1
  fi
}

reset_colcon_workspace() {
  local workspace_dir="$1"

  rm -rf \
    "$workspace_dir/build" \
    "$workspace_dir/install" \
    "$workspace_dir/log"
}

source_setup_script() {
  set +u
  # shellcheck disable=SC1090
  source "$1"
  set -u
}

list_workspace_prefixes() {
  find "$BASE_DIR" -mindepth 2 -maxdepth 4 -type f -path '*/install/local_setup.bash' -printf '%h\n' \
    | sort -u
}

find_workspace_package_prefix() {
  local package_name="$1"
  local prefix

  while IFS= read -r prefix; do
    if [[ -d "$prefix/$package_name/share/$package_name/cmake" ]]; then
      printf '%s\n' "$prefix"
      return 0
    fi
    if [[ -d "$prefix/share/$package_name/cmake" ]]; then
      printf '%s\n' "$prefix"
      return 0
    fi
    if [[ -f "$prefix/$package_name/share/ament_index/resource_index/packages/$package_name" ]]; then
      printf '%s\n' "$prefix"
      return 0
    fi
    if [[ -f "$prefix/share/ament_index/resource_index/packages/$package_name" ]]; then
      printf '%s\n' "$prefix"
      return 0
    fi
  done < <(list_workspace_prefixes)

  return 1
}

find_workspace_package_cmake_dir() {
  local package_name="$1"
  local prefix

  prefix="$(find_workspace_package_prefix "$package_name")" || return 1

  if [[ -d "$prefix/$package_name/share/$package_name/cmake" ]]; then
    printf '%s\n' "$prefix/$package_name/share/$package_name/cmake"
    return 0
  fi

  if [[ -d "$prefix/share/$package_name/cmake" ]]; then
    printf '%s\n' "$prefix/share/$package_name/cmake"
    return 0
  fi

  return 1
}

append_unique_prefix() {
  local candidate="$1"
  local existing

  for existing in "${WORKSPACE_PREFIXES[@]}"; do
    if [[ "$existing" == "$candidate" ]]; then
      return 0
    fi
  done

  WORKSPACE_PREFIXES+=("$candidate")
}

require_workspace_package() {
  local package_name="$1"
  local prefix

  if ! prefix="$(find_workspace_package_prefix "$package_name")"; then
    MISSING_PACKAGES+=("$package_name")
    return 0
  fi

  append_unique_prefix "$prefix"
}

reset_ros_env() {
  unset AMENT_PREFIX_PATH
  unset CMAKE_PREFIX_PATH
  unset COLCON_PREFIX_PATH
  unset COLCON_CURRENT_PREFIX
  unset PYTHONPATH
  unset PKG_CONFIG_PATH
}

source_workspace_env() {
  local prefix

  reset_ros_env
  source_setup_script "$ROS_SETUP"

  for prefix in "${WORKSPACE_PREFIXES[@]}"; do
    source_setup_script "$prefix/local_setup.bash"
  done
}

workspace_has_msg_sources() {
  [[ -d "$MSG_WS/src" ]] && find "$MSG_WS/src" -name package.xml -print -quit | grep -q .
}

WORKSPACE_PREFIXES=()
MISSING_PACKAGES=()

require_file "$ROS_SETUP"
require_dir "$MSG_WS"
require_dir "$DEPS_WS"
require_dir "$BRIDGE_WS"
require_dir "$INTERFACE_WS"

if workspace_has_msg_sources; then
  echo "[INFO] Building msg_ws from local sources..."
  reset_colcon_workspace "$MSG_WS"
  reset_ros_env
  source_setup_script "$ROS_SETUP"
  (
    cd "$MSG_WS"
    CCACHE_DISABLE=1 colcon build --symlink-install
  )
else
  echo "[INFO] msg_ws/src is missing, so the script will reuse only local artifacts already inside this workspace."
fi

require_file "$MSG_WS/install/local_setup.bash"
append_unique_prefix "$MSG_WS/install"

echo "[INFO] Building deps_ws from local sources..."
reset_colcon_workspace "$DEPS_WS"
reset_ros_env
source_setup_script "$ROS_SETUP"
source_setup_script "$MSG_WS/install/local_setup.bash"
(
  cd "$DEPS_WS"
  CCACHE_DISABLE=1 colcon build \
    --symlink-install \
    --packages-up-to \
    autoware_cmake \
    autoware_vehicle_msgs \
    autoware_control_msgs \
    autoware_perception_msgs \
    tier4_vehicle_msgs \
    autoware_crop_box_filter \
    autoware_raw_vehicle_cmd_converter
)

require_file "$DEPS_WS/install/local_setup.bash"
append_unique_prefix "$DEPS_WS/install"

require_workspace_package autoware_auto_vehicle_msgs
require_workspace_package autoware_auto_control_msgs
require_workspace_package autoware_vehicle_msgs
require_workspace_package autoware_control_msgs
require_workspace_package autoware_cmake
require_workspace_package autoware_perception_msgs
require_workspace_package tier4_vehicle_msgs
require_workspace_package autoware_crop_box_filter
require_workspace_package autoware_raw_vehicle_cmd_converter

if (( ${#MISSING_PACKAGES[@]} > 0 )); then
  echo "[ERROR] The following required packages are not available inside this workspace:" >&2
  printf '        - %s\n' "${MISSING_PACKAGES[@]}" >&2
  echo "        Add their source or install prefixes somewhere under:" >&2
  echo "        $BASE_DIR" >&2
  exit 1
fi

source_workspace_env

AUTO_VEHICLE_MSGS_DIR="$(find_workspace_package_cmake_dir autoware_auto_vehicle_msgs)"
AUTO_CONTROL_MSGS_DIR="$(find_workspace_package_cmake_dir autoware_auto_control_msgs)"
VEHICLE_MSGS_DIR="$(find_workspace_package_cmake_dir autoware_vehicle_msgs)"
CONTROL_MSGS_DIR="$(find_workspace_package_cmake_dir autoware_control_msgs)"

echo "[INFO] Building bridge_ws from workspace-local prefixes only..."
reset_colcon_workspace "$BRIDGE_WS"
(
  cd "$BRIDGE_WS"
  CCACHE_DISABLE=1 colcon build \
    --symlink-install \
    --packages-select carla_autoware_type_bridge carla_autonomy_bridge \
    --cmake-clean-cache \
    --cmake-args \
    -Dautoware_auto_vehicle_msgs_DIR="$AUTO_VEHICLE_MSGS_DIR" \
    -Dautoware_auto_control_msgs_DIR="$AUTO_CONTROL_MSGS_DIR" \
    -Dautoware_vehicle_msgs_DIR="$VEHICLE_MSGS_DIR" \
    -Dautoware_control_msgs_DIR="$CONTROL_MSGS_DIR"
)

append_unique_prefix "$BRIDGE_WS/install"
source_workspace_env

echo "[INFO] Building autoware_carla_interface from workspace-local prefixes only..."
reset_colcon_workspace "$INTERFACE_WS"
(
  cd "$INTERFACE_WS"
  CCACHE_DISABLE=1 colcon build --symlink-install --packages-select autoware_carla_interface
)

append_unique_prefix "$INTERFACE_WS/install"
source_workspace_env

echo "Build done."
echo "Run these before launching:"
echo "source $MSG_WS/install/local_setup.bash"
echo "source $DEPS_WS/install/local_setup.bash"
echo "source $BRIDGE_WS/install/local_setup.bash"
echo "source $INTERFACE_WS/install/local_setup.bash"
