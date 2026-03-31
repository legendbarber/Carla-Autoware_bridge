// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_internal_planning_msgs:msg/ScoredCandidateTrajectory.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SCORED_CANDIDATE_TRAJECTORY__STRUCT_H_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SCORED_CANDIDATE_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'candidate_trajectory'
#include "autoware_internal_planning_msgs/msg/detail/candidate_trajectory__struct.h"

/// Struct defined in msg/ScoredCandidateTrajectory in the package autoware_internal_planning_msgs.
typedef struct autoware_internal_planning_msgs__msg__ScoredCandidateTrajectory
{
  autoware_internal_planning_msgs__msg__CandidateTrajectory candidate_trajectory;
  /// Score should be in [0.0, 1.0]
  float score;
} autoware_internal_planning_msgs__msg__ScoredCandidateTrajectory;

// Struct for a sequence of autoware_internal_planning_msgs__msg__ScoredCandidateTrajectory.
typedef struct autoware_internal_planning_msgs__msg__ScoredCandidateTrajectory__Sequence
{
  autoware_internal_planning_msgs__msg__ScoredCandidateTrajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_internal_planning_msgs__msg__ScoredCandidateTrajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SCORED_CANDIDATE_TRAJECTORY__STRUCT_H_
