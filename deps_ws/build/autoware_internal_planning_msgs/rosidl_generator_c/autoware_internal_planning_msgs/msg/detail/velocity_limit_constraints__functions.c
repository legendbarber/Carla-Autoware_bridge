// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_internal_planning_msgs:msg/VelocityLimitConstraints.idl
// generated code does not contain a copyright notice
#include "autoware_internal_planning_msgs/msg/detail/velocity_limit_constraints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
autoware_internal_planning_msgs__msg__VelocityLimitConstraints__init(autoware_internal_planning_msgs__msg__VelocityLimitConstraints * msg)
{
  if (!msg) {
    return false;
  }
  // max_acceleration
  // min_acceleration
  // max_jerk
  // min_jerk
  return true;
}

void
autoware_internal_planning_msgs__msg__VelocityLimitConstraints__fini(autoware_internal_planning_msgs__msg__VelocityLimitConstraints * msg)
{
  if (!msg) {
    return;
  }
  // max_acceleration
  // min_acceleration
  // max_jerk
  // min_jerk
}

bool
autoware_internal_planning_msgs__msg__VelocityLimitConstraints__are_equal(const autoware_internal_planning_msgs__msg__VelocityLimitConstraints * lhs, const autoware_internal_planning_msgs__msg__VelocityLimitConstraints * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // max_acceleration
  if (lhs->max_acceleration != rhs->max_acceleration) {
    return false;
  }
  // min_acceleration
  if (lhs->min_acceleration != rhs->min_acceleration) {
    return false;
  }
  // max_jerk
  if (lhs->max_jerk != rhs->max_jerk) {
    return false;
  }
  // min_jerk
  if (lhs->min_jerk != rhs->min_jerk) {
    return false;
  }
  return true;
}

bool
autoware_internal_planning_msgs__msg__VelocityLimitConstraints__copy(
  const autoware_internal_planning_msgs__msg__VelocityLimitConstraints * input,
  autoware_internal_planning_msgs__msg__VelocityLimitConstraints * output)
{
  if (!input || !output) {
    return false;
  }
  // max_acceleration
  output->max_acceleration = input->max_acceleration;
  // min_acceleration
  output->min_acceleration = input->min_acceleration;
  // max_jerk
  output->max_jerk = input->max_jerk;
  // min_jerk
  output->min_jerk = input->min_jerk;
  return true;
}

autoware_internal_planning_msgs__msg__VelocityLimitConstraints *
autoware_internal_planning_msgs__msg__VelocityLimitConstraints__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_planning_msgs__msg__VelocityLimitConstraints * msg = (autoware_internal_planning_msgs__msg__VelocityLimitConstraints *)allocator.allocate(sizeof(autoware_internal_planning_msgs__msg__VelocityLimitConstraints), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_internal_planning_msgs__msg__VelocityLimitConstraints));
  bool success = autoware_internal_planning_msgs__msg__VelocityLimitConstraints__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_internal_planning_msgs__msg__VelocityLimitConstraints__destroy(autoware_internal_planning_msgs__msg__VelocityLimitConstraints * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_internal_planning_msgs__msg__VelocityLimitConstraints__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_internal_planning_msgs__msg__VelocityLimitConstraints__Sequence__init(autoware_internal_planning_msgs__msg__VelocityLimitConstraints__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_planning_msgs__msg__VelocityLimitConstraints * data = NULL;

  if (size) {
    data = (autoware_internal_planning_msgs__msg__VelocityLimitConstraints *)allocator.zero_allocate(size, sizeof(autoware_internal_planning_msgs__msg__VelocityLimitConstraints), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_internal_planning_msgs__msg__VelocityLimitConstraints__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_internal_planning_msgs__msg__VelocityLimitConstraints__fini(&data[i - 1]);
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
autoware_internal_planning_msgs__msg__VelocityLimitConstraints__Sequence__fini(autoware_internal_planning_msgs__msg__VelocityLimitConstraints__Sequence * array)
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
      autoware_internal_planning_msgs__msg__VelocityLimitConstraints__fini(&array->data[i]);
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

autoware_internal_planning_msgs__msg__VelocityLimitConstraints__Sequence *
autoware_internal_planning_msgs__msg__VelocityLimitConstraints__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_planning_msgs__msg__VelocityLimitConstraints__Sequence * array = (autoware_internal_planning_msgs__msg__VelocityLimitConstraints__Sequence *)allocator.allocate(sizeof(autoware_internal_planning_msgs__msg__VelocityLimitConstraints__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_internal_planning_msgs__msg__VelocityLimitConstraints__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_internal_planning_msgs__msg__VelocityLimitConstraints__Sequence__destroy(autoware_internal_planning_msgs__msg__VelocityLimitConstraints__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_internal_planning_msgs__msg__VelocityLimitConstraints__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_internal_planning_msgs__msg__VelocityLimitConstraints__Sequence__are_equal(const autoware_internal_planning_msgs__msg__VelocityLimitConstraints__Sequence * lhs, const autoware_internal_planning_msgs__msg__VelocityLimitConstraints__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_internal_planning_msgs__msg__VelocityLimitConstraints__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_internal_planning_msgs__msg__VelocityLimitConstraints__Sequence__copy(
  const autoware_internal_planning_msgs__msg__VelocityLimitConstraints__Sequence * input,
  autoware_internal_planning_msgs__msg__VelocityLimitConstraints__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_internal_planning_msgs__msg__VelocityLimitConstraints);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_internal_planning_msgs__msg__VelocityLimitConstraints * data =
      (autoware_internal_planning_msgs__msg__VelocityLimitConstraints *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_internal_planning_msgs__msg__VelocityLimitConstraints__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_internal_planning_msgs__msg__VelocityLimitConstraints__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_internal_planning_msgs__msg__VelocityLimitConstraints__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
