// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_internal_planning_msgs:msg/ControlPoint.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__CONTROL_POINT__STRUCT_H_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__CONTROL_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/ControlPoint in the package autoware_internal_planning_msgs.
/**
  * Pose of the control point in map frame
 */
typedef struct autoware_internal_planning_msgs__msg__ControlPoint
{
  geometry_msgs__msg__Pose pose;
  /// Velocity at control point
  float velocity;
  /// Lateral shift length. Positive: left, Negative: right
  float shift_length;
  /// Distance from ego vehicle
  float distance;
} autoware_internal_planning_msgs__msg__ControlPoint;

// Struct for a sequence of autoware_internal_planning_msgs__msg__ControlPoint.
typedef struct autoware_internal_planning_msgs__msg__ControlPoint__Sequence
{
  autoware_internal_planning_msgs__msg__ControlPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_internal_planning_msgs__msg__ControlPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__CONTROL_POINT__STRUCT_H_
