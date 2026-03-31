// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_internal_planning_msgs:msg/CandidateTrajectory.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__CANDIDATE_TRAJECTORY__STRUCT_H_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__CANDIDATE_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'generator_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'points'
#include "autoware_planning_msgs/msg/detail/trajectory_point__struct.h"

/// Struct defined in msg/CandidateTrajectory in the package autoware_internal_planning_msgs.
typedef struct autoware_internal_planning_msgs__msg__CandidateTrajectory
{
  std_msgs__msg__Header header;
  unique_identifier_msgs__msg__UUID generator_id;
  autoware_planning_msgs__msg__TrajectoryPoint__Sequence points;
} autoware_internal_planning_msgs__msg__CandidateTrajectory;

// Struct for a sequence of autoware_internal_planning_msgs__msg__CandidateTrajectory.
typedef struct autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence
{
  autoware_internal_planning_msgs__msg__CandidateTrajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__CANDIDATE_TRAJECTORY__STRUCT_H_
