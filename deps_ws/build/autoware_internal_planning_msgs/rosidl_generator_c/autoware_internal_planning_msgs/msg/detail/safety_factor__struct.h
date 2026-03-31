// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_internal_planning_msgs:msg/SafetyFactor.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SAFETY_FACTOR__STRUCT_H_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SAFETY_FACTOR__STRUCT_H_

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
  autoware_internal_planning_msgs__msg__SafetyFactor__UNKNOWN = 0
};

/// Constant 'POINTCLOUD'.
/**
  * constants for factor type
 */
enum
{
  autoware_internal_planning_msgs__msg__SafetyFactor__POINTCLOUD = 1
};

/// Constant 'OBJECT'.
enum
{
  autoware_internal_planning_msgs__msg__SafetyFactor__OBJECT = 2
};

// Include directives for member types
// Member 'object_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'predicted_path'
#include "autoware_perception_msgs/msg/detail/predicted_path__struct.h"
// Member 'points'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/SafetyFactor in the package autoware_internal_planning_msgs.
/**
  * constants for common use
 */
typedef struct autoware_internal_planning_msgs__msg__SafetyFactor
{
  /// variables
  uint16_t type;
  /// use only for predicted objects
  unique_identifier_msgs__msg__UUID object_id;
  /// use only for predicted objects
  autoware_perception_msgs__msg__PredictedPath predicted_path;
  /// Time to collision (start) relative to the header time
  float ttc_begin;
  /// Time to collision (end) relative to the header time
  float ttc_end;
  /// type == POINTCLOUD: the position of the each points
  /// type == OBJECT: the object position
  geometry_msgs__msg__Point__Sequence points;
  /// module's primitive judgement of the safety for its decision
  bool is_safe;
} autoware_internal_planning_msgs__msg__SafetyFactor;

// Struct for a sequence of autoware_internal_planning_msgs__msg__SafetyFactor.
typedef struct autoware_internal_planning_msgs__msg__SafetyFactor__Sequence
{
  autoware_internal_planning_msgs__msg__SafetyFactor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_internal_planning_msgs__msg__SafetyFactor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SAFETY_FACTOR__STRUCT_H_
