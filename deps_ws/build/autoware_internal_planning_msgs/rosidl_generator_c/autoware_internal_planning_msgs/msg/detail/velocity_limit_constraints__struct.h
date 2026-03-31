// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_internal_planning_msgs:msg/VelocityLimitConstraints.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT_CONSTRAINTS__STRUCT_H_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT_CONSTRAINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VelocityLimitConstraints in the package autoware_internal_planning_msgs.
/**
  * Maximum signed acceleration
 */
typedef struct autoware_internal_planning_msgs__msg__VelocityLimitConstraints
{
  float max_acceleration;
  /// Minimum signed acceleration
  float min_acceleration;
  /// Maximum signed jerk
  float max_jerk;
  /// Minimum signed jerk
  float min_jerk;
} autoware_internal_planning_msgs__msg__VelocityLimitConstraints;

// Struct for a sequence of autoware_internal_planning_msgs__msg__VelocityLimitConstraints.
typedef struct autoware_internal_planning_msgs__msg__VelocityLimitConstraints__Sequence
{
  autoware_internal_planning_msgs__msg__VelocityLimitConstraints * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_internal_planning_msgs__msg__VelocityLimitConstraints__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT_CONSTRAINTS__STRUCT_H_
