// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_internal_planning_msgs:msg/PlanningFactor.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__PLANNING_FACTOR__STRUCT_H_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__PLANNING_FACTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
enum
{
  autoware_internal_planning_msgs__msg__PlanningFactor__UNKNOWN = 0
};

/// Constant 'NONE'.
enum
{
  autoware_internal_planning_msgs__msg__PlanningFactor__NONE = 1
};

/// Constant 'SLOW_DOWN'.
enum
{
  autoware_internal_planning_msgs__msg__PlanningFactor__SLOW_DOWN = 2
};

/// Constant 'STOP'.
enum
{
  autoware_internal_planning_msgs__msg__PlanningFactor__STOP = 3
};

/// Constant 'SHIFT_LEFT'.
enum
{
  autoware_internal_planning_msgs__msg__PlanningFactor__SHIFT_LEFT = 4
};

/// Constant 'SHIFT_RIGHT'.
enum
{
  autoware_internal_planning_msgs__msg__PlanningFactor__SHIFT_RIGHT = 5
};

/// Constant 'TURN_LEFT'.
enum
{
  autoware_internal_planning_msgs__msg__PlanningFactor__TURN_LEFT = 6
};

/// Constant 'TURN_RIGHT'.
enum
{
  autoware_internal_planning_msgs__msg__PlanningFactor__TURN_RIGHT = 7
};

// Include directives for member types
// Member 'module'
// Member 'detail'
#include "rosidl_runtime_c/string.h"
// Member 'control_points'
#include "autoware_internal_planning_msgs/msg/detail/control_point__struct.h"
// Member 'safety_factors'
#include "autoware_internal_planning_msgs/msg/detail/safety_factor_array__struct.h"

/// Struct defined in msg/PlanningFactor in the package autoware_internal_planning_msgs.
/**
  * constants for behavior
 */
typedef struct autoware_internal_planning_msgs__msg__PlanningFactor
{
  /// Module name that generates this planning factor (e.g., "obstacle_stop_planner")
  rosidl_runtime_c__String module;
  bool is_driving_forward;
  autoware_internal_planning_msgs__msg__ControlPoint__Sequence control_points;
  /// Behavior type (use constants above)
  uint16_t behavior;
  /// Detailed description of the planning factor
  rosidl_runtime_c__String detail;
  autoware_internal_planning_msgs__msg__SafetyFactorArray safety_factors;
} autoware_internal_planning_msgs__msg__PlanningFactor;

// Struct for a sequence of autoware_internal_planning_msgs__msg__PlanningFactor.
typedef struct autoware_internal_planning_msgs__msg__PlanningFactor__Sequence
{
  autoware_internal_planning_msgs__msg__PlanningFactor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_internal_planning_msgs__msg__PlanningFactor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__PLANNING_FACTOR__STRUCT_H_
