// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_internal_planning_msgs:msg/ScoredCandidateTrajectories.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SCORED_CANDIDATE_TRAJECTORIES__STRUCT_H_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SCORED_CANDIDATE_TRAJECTORIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'scored_candidate_trajectories'
#include "autoware_internal_planning_msgs/msg/detail/scored_candidate_trajectory__struct.h"
// Member 'generator_info'
#include "autoware_internal_planning_msgs/msg/detail/generator_info__struct.h"

/// Struct defined in msg/ScoredCandidateTrajectories in the package autoware_internal_planning_msgs.
typedef struct autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories
{
  autoware_internal_planning_msgs__msg__ScoredCandidateTrajectory__Sequence scored_candidate_trajectories;
  autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence generator_info;
} autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories;

// Struct for a sequence of autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories.
typedef struct autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__Sequence
{
  autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SCORED_CANDIDATE_TRAJECTORIES__STRUCT_H_
