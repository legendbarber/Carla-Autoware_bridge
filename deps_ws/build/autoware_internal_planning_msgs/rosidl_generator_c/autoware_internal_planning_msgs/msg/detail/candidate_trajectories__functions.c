// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_internal_planning_msgs:msg/CandidateTrajectories.idl
// generated code does not contain a copyright notice
#include "autoware_internal_planning_msgs/msg/detail/candidate_trajectories__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `candidate_trajectories`
#include "autoware_internal_planning_msgs/msg/detail/candidate_trajectory__functions.h"
// Member `generator_info`
#include "autoware_internal_planning_msgs/msg/detail/generator_info__functions.h"

bool
autoware_internal_planning_msgs__msg__CandidateTrajectories__init(autoware_internal_planning_msgs__msg__CandidateTrajectories * msg)
{
  if (!msg) {
    return false;
  }
  // candidate_trajectories
  if (!autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence__init(&msg->candidate_trajectories, 0)) {
    autoware_internal_planning_msgs__msg__CandidateTrajectories__fini(msg);
    return false;
  }
  // generator_info
  if (!autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence__init(&msg->generator_info, 0)) {
    autoware_internal_planning_msgs__msg__CandidateTrajectories__fini(msg);
    return false;
  }
  return true;
}

void
autoware_internal_planning_msgs__msg__CandidateTrajectories__fini(autoware_internal_planning_msgs__msg__CandidateTrajectories * msg)
{
  if (!msg) {
    return;
  }
  // candidate_trajectories
  autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence__fini(&msg->candidate_trajectories);
  // generator_info
  autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence__fini(&msg->generator_info);
}

bool
autoware_internal_planning_msgs__msg__CandidateTrajectories__are_equal(const autoware_internal_planning_msgs__msg__CandidateTrajectories * lhs, const autoware_internal_planning_msgs__msg__CandidateTrajectories * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // candidate_trajectories
  if (!autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence__are_equal(
      &(lhs->candidate_trajectories), &(rhs->candidate_trajectories)))
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
autoware_internal_planning_msgs__msg__CandidateTrajectories__copy(
  const autoware_internal_planning_msgs__msg__CandidateTrajectories * input,
  autoware_internal_planning_msgs__msg__CandidateTrajectories * output)
{
  if (!input || !output) {
    return false;
  }
  // candidate_trajectories
  if (!autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence__copy(
      &(input->candidate_trajectories), &(output->candidate_trajectories)))
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

autoware_internal_planning_msgs__msg__CandidateTrajectories *
autoware_internal_planning_msgs__msg__CandidateTrajectories__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_planning_msgs__msg__CandidateTrajectories * msg = (autoware_internal_planning_msgs__msg__CandidateTrajectories *)allocator.allocate(sizeof(autoware_internal_planning_msgs__msg__CandidateTrajectories), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_internal_planning_msgs__msg__CandidateTrajectories));
  bool success = autoware_internal_planning_msgs__msg__CandidateTrajectories__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_internal_planning_msgs__msg__CandidateTrajectories__destroy(autoware_internal_planning_msgs__msg__CandidateTrajectories * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_internal_planning_msgs__msg__CandidateTrajectories__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_internal_planning_msgs__msg__CandidateTrajectories__Sequence__init(autoware_internal_planning_msgs__msg__CandidateTrajectories__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_planning_msgs__msg__CandidateTrajectories * data = NULL;

  if (size) {
    data = (autoware_internal_planning_msgs__msg__CandidateTrajectories *)allocator.zero_allocate(size, sizeof(autoware_internal_planning_msgs__msg__CandidateTrajectories), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_internal_planning_msgs__msg__CandidateTrajectories__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_internal_planning_msgs__msg__CandidateTrajectories__fini(&data[i - 1]);
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
autoware_internal_planning_msgs__msg__CandidateTrajectories__Sequence__fini(autoware_internal_planning_msgs__msg__CandidateTrajectories__Sequence * array)
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
      autoware_internal_planning_msgs__msg__CandidateTrajectories__fini(&array->data[i]);
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

autoware_internal_planning_msgs__msg__CandidateTrajectories__Sequence *
autoware_internal_planning_msgs__msg__CandidateTrajectories__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_planning_msgs__msg__CandidateTrajectories__Sequence * array = (autoware_internal_planning_msgs__msg__CandidateTrajectories__Sequence *)allocator.allocate(sizeof(autoware_internal_planning_msgs__msg__CandidateTrajectories__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_internal_planning_msgs__msg__CandidateTrajectories__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_internal_planning_msgs__msg__CandidateTrajectories__Sequence__destroy(autoware_internal_planning_msgs__msg__CandidateTrajectories__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_internal_planning_msgs__msg__CandidateTrajectories__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_internal_planning_msgs__msg__CandidateTrajectories__Sequence__are_equal(const autoware_internal_planning_msgs__msg__CandidateTrajectories__Sequence * lhs, const autoware_internal_planning_msgs__msg__CandidateTrajectories__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_internal_planning_msgs__msg__CandidateTrajectories__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_internal_planning_msgs__msg__CandidateTrajectories__Sequence__copy(
  const autoware_internal_planning_msgs__msg__CandidateTrajectories__Sequence * input,
  autoware_internal_planning_msgs__msg__CandidateTrajectories__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_internal_planning_msgs__msg__CandidateTrajectories);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_internal_planning_msgs__msg__CandidateTrajectories * data =
      (autoware_internal_planning_msgs__msg__CandidateTrajectories *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_internal_planning_msgs__msg__CandidateTrajectories__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_internal_planning_msgs__msg__CandidateTrajectories__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_internal_planning_msgs__msg__CandidateTrajectories__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
