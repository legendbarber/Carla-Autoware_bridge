// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_internal_planning_msgs:msg/VelocityLimit.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT__STRUCT_H_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SENDER_API'.
static const char * const autoware_internal_planning_msgs__msg__VelocityLimit__SENDER_API = "api";

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'constraints'
#include "autoware_internal_planning_msgs/msg/detail/velocity_limit_constraints__struct.h"
// Member 'sender'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/VelocityLimit in the package autoware_internal_planning_msgs.
/**
  * constants for system-defined sender
 */
typedef struct autoware_internal_planning_msgs__msg__VelocityLimit
{
  /// fields
  builtin_interfaces__msg__Time stamp;
  /// Maximum velocity. Range: >= 0.0
  float max_velocity;
  /// Whether to use constraints
  bool use_constraints;
  /// Velocity limit constraints (only used if use_constraints is true)
  autoware_internal_planning_msgs__msg__VelocityLimitConstraints constraints;
  /// Identifier of the module that set this limit (use SENDER_* constants above or any user-defined sender)
  rosidl_runtime_c__String sender;
} autoware_internal_planning_msgs__msg__VelocityLimit;

// Struct for a sequence of autoware_internal_planning_msgs__msg__VelocityLimit.
typedef struct autoware_internal_planning_msgs__msg__VelocityLimit__Sequence
{
  autoware_internal_planning_msgs__msg__VelocityLimit * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_internal_planning_msgs__msg__VelocityLimit__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT__STRUCT_H_
