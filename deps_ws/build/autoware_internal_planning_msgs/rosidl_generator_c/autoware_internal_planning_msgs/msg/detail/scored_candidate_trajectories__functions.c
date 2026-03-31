// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_internal_planning_msgs:msg/ScoredCandidateTrajectories.idl
// generated code does not contain a copyright notice
#include "autoware_internal_planning_msgs/msg/detail/scored_candidate_trajectories__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `scored_candidate_trajectories`
#include "autoware_internal_planning_msgs/msg/detail/scored_candidate_trajectory__functions.h"
// Member `generator_info`
#include "autoware_internal_planning_msgs/msg/detail/generator_info__functions.h"

bool
autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__init(autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories * msg)
{
  if (!msg) {
    return false;
  }
  // scored_candidate_trajectories
  if (!autoware_internal_planning_msgs__msg__ScoredCandidateTrajectory__Sequence__init(&msg->scored_candidate_trajectories, 0)) {
    autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__fini(msg);
    return false;
  }
  // generator_info
  if (!autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence__init(&msg->generator_info, 0)) {
    autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__fini(msg);
    return false;
  }
  return true;
}

void
autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__fini(autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories * msg)
{
  if (!msg) {
    return;
  }
  // scored_candidate_trajectories
  autoware_internal_planning_msgs__msg__ScoredCandidateTrajectory__Sequence__fini(&msg->scored_candidate_trajectories);
  // generator_info
  autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence__fini(&msg->generator_info);
}

bool
autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__are_equal(const autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories * lhs, const autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // scored_candidate_trajectories
  if (!autoware_internal_planning_msgs__msg__ScoredCandidateTrajectory__Sequence__are_equal(
      &(lhs->scored_candidate_trajectories), &(rhs->scored_candidate_trajectories)))
  {
    return false;
  }
  // generator_info
  if (!autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence__are_equal(
      &(lhs->generator_info), &(rhs->generator_info)))
  {
    return false;
  }
  return true;
}

bool
autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__copy(
  const autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories * input,
  autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories * output)
{
  if (!input || !output) {
    return false;
  }
  // scored_candidate_trajectories
  if (!autoware_internal_planning_msgs__msg__ScoredCandidateTrajectory__Sequence__copy(
      &(input->scored_candidate_trajectories), &(output->scored_candidate_trajectories)))
  {
    return false;
  }
  // generator_info
  if (!autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence__copy(
      &(input->generator_info), &(output->generator_info)))
  {
    return false;
  }
  return true;
}

autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories *
autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories * msg = (autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories *)allocator.allocate(sizeof(autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories));
  bool success = autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__destroy(autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__Sequence__init(autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories * data = NULL;

  if (size) {
    data = (autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories *)allocator.zero_allocate(size, sizeof(autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__Sequence__fini(autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__Sequence *
autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__Sequence * array = (autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__Sequence *)allocator.allocate(sizeof(autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__Sequence__destroy(autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__Sequence__are_equal(const autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__Sequence * lhs, const autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__Sequence__copy(
  const autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__Sequence * input,
  autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories * data =
      (autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
