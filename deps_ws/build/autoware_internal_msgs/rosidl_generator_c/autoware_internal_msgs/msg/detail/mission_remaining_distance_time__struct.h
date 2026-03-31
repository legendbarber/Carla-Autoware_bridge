// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_internal_msgs:msg/MissionRemainingDistanceTime.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__MISSION_REMAINING_DISTANCE_TIME__STRUCT_H_
#define AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__MISSION_REMAINING_DISTANCE_TIME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MissionRemainingDistanceTime in the package autoware_internal_msgs.
/**
  * Information about the mission remaining distance and time.
 */
typedef struct autoware_internal_msgs__msg__MissionRemainingDistanceTime
{
  /// Remaining distance in meters
  double remaining_distance;
  /// Remaining total time in seconds
  double remaining_time;
} autoware_internal_msgs__msg__MissionRemainingDistanceTime;

// Struct for a sequence of autoware_internal_msgs__msg__MissionRemainingDistanceTime.
typedef struct autoware_internal_msgs__msg__MissionRemainingDistanceTime__Sequence
{
  autoware_internal_msgs__msg__MissionRemainingDistanceTime * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_internal_msgs__msg__MissionRemainingDistanceTime__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__MISSION_REMAINING_DISTANCE_TIME__STRUCT_H_
