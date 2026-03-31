// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_internal_planning_msgs:msg/VelocityLimitClearCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT_CLEAR_COMMAND__STRUCT_H_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT_CLEAR_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'sender'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/VelocityLimitClearCommand in the package autoware_internal_planning_msgs.
typedef struct autoware_internal_planning_msgs__msg__VelocityLimitClearCommand
{
  builtin_interfaces__msg__Time stamp;
  /// Whether to clear the velocity limit
  bool command;
  /// Identifier of the module that clears the limit (see VelocityLimit.msg for SENDER_* constants)
  rosidl_runtime_c__String sender;
} autoware_internal_planning_msgs__msg__VelocityLimitClearCommand;

// Struct for a sequence of autoware_internal_planning_msgs__msg__VelocityLimitClearCommand.
typedef struct autoware_internal_planning_msgs__msg__VelocityLimitClearCommand__Sequence
{
  autoware_internal_planning_msgs__msg__VelocityLimitClearCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_internal_planning_msgs__msg__VelocityLimitClearCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT_CLEAR_COMMAND__STRUCT_H_
