// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_internal_planning_msgs:msg/CandidateTrajectory.idl
// generated code does not contain a copyright notice
#include "autoware_internal_planning_msgs/msg/detail/candidate_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `generator_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `points`
#include "autoware_planning_msgs/msg/detail/trajectory_point__functions.h"

bool
autoware_internal_planning_msgs__msg__CandidateTrajectory__init(autoware_internal_planning_msgs__msg__CandidateTrajectory * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_internal_planning_msgs__msg__CandidateTrajectory__fini(msg);
    return false;
  }
  // generator_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->generator_id)) {
    autoware_internal_planning_msgs__msg__CandidateTrajectory__fini(msg);
    return false;
  }
  // points
  if (!autoware_planning_msgs__msg__TrajectoryPoint__Sequence__init(&msg->points, 0)) {
    autoware_internal_planning_msgs__msg__CandidateTrajectory__fini(msg);
    return false;
  }
  return true;
}

void
autoware_internal_planning_msgs__msg__CandidateTrajectory__fini(autoware_internal_planning_msgs__msg__CandidateTrajectory * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // generator_id
  unique_identifier_msgs__msg__UUID__fini(&msg->generator_id);
  // points
  autoware_planning_msgs__msg__TrajectoryPoint__Sequence__fini(&msg->points);
}

bool
autoware_internal_planning_msgs__msg__CandidateTrajectory__are_equal(const autoware_internal_planning_msgs__msg__CandidateTrajectory * lhs, const autoware_internal_planning_msgs__msg__CandidateTrajectory * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // generator_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->generator_id), &(rhs->generator_id)))
  {
    return false;
  }
  // points
  if (!autoware_planning_msgs__msg__TrajectoryPoint__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  return true;
}

bool
autoware_internal_planning_msgs__msg__CandidateTrajectory__copy(
  const autoware_internal_planning_msgs__msg__CandidateTrajectory * input,
  autoware_internal_planning_msgs__msg__CandidateTrajectory * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // generator_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->generator_id), &(output->generator_id)))
  {
    return false;
  }
  // points
  if (!autoware_planning_msgs__msg__TrajectoryPoint__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  return true;
}

autoware_internal_planning_msgs__msg__CandidateTrajectory *
autoware_internal_planning_msgs__msg__CandidateTrajectory__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_planning_msgs__msg__CandidateTrajectory * msg = (autoware_internal_planning_msgs__msg__CandidateTrajectory *)allocator.allocate(sizeof(autoware_internal_planning_msgs__msg__CandidateTrajectory), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_internal_planning_msgs__msg__CandidateTrajectory));
  bool success = autoware_internal_planning_msgs__msg__CandidateTrajectory__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_internal_planning_msgs__msg__CandidateTrajectory__destroy(autoware_internal_planning_msgs__msg__CandidateTrajectory * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_internal_planning_msgs__msg__CandidateTrajectory__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence__init(autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_planning_msgs__msg__CandidateTrajectory * data = NULL;

  if (size) {
    data = (autoware_internal_planning_msgs__msg__CandidateTrajectory *)allocator.zero_allocate(size, sizeof(autoware_internal_planning_msgs__msg__CandidateTrajectory), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_internal_planning_msgs__msg__CandidateTrajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_internal_planning_msgs__msg__CandidateTrajectory__fini(&data[i - 1]);
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
autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence__fini(autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence * array)
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
      autoware_internal_planning_msgs__msg__CandidateTrajectory__fini(&array->data[i]);
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

autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence *
autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence * array = (autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence *)allocator.allocate(sizeof(autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence__destroy(autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence__are_equal(const autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence * lhs, const autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_internal_planning_msgs__msg__CandidateTrajectory__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence__copy(
  const autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence * input,
  autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_internal_planning_msgs__msg__CandidateTrajectory);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_internal_planning_msgs__msg__CandidateTrajectory * data =
      (autoware_internal_planning_msgs__msg__CandidateTrajectory *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_internal_planning_msgs__msg__CandidateTrajectory__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_internal_planning_msgs__msg__CandidateTrajectory__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_internal_planning_msgs__msg__CandidateTrajectory__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
