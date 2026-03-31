// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_internal_planning_msgs:msg/CandidateTrajectories.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__CANDIDATE_TRAJECTORIES__STRUCT_H_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__CANDIDATE_TRAJECTORIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'candidate_trajectories'
#include "autoware_internal_planning_msgs/msg/detail/candidate_trajectory__struct.h"
// Member 'generator_info'
#include "autoware_internal_planning_msgs/msg/detail/generator_info__struct.h"

/// Struct defined in msg/CandidateTrajectories in the package autoware_internal_planning_msgs.
typedef struct autoware_internal_planning_msgs__msg__CandidateTrajectories
{
  autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence candidate_trajectories;
  autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence generator_info;
} autoware_internal_planning_msgs__msg__CandidateTrajectories;

// Struct for a sequence of autoware_internal_planning_msgs__msg__CandidateTrajectories.
typedef struct autoware_internal_planning_msgs__msg__CandidateTrajectories__Sequence
{
  autoware_internal_planning_msgs__msg__CandidateTrajectories * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_internal_planning_msgs__msg__CandidateTrajectories__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__CANDIDATE_TRAJECTORIES__STRUCT_H_
