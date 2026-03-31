// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_internal_planning_msgs:msg/ControlPoint.idl
// generated code does not contain a copyright notice
#include "autoware_internal_planning_msgs/msg/detail/control_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
autoware_internal_planning_msgs__msg__ControlPoint__init(autoware_internal_planning_msgs__msg__ControlPoint * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    autoware_internal_planning_msgs__msg__ControlPoint__fini(msg);
    return false;
  }
  // velocity
  // shift_length
  // distance
  return true;
}

void
autoware_internal_planning_msgs__msg__ControlPoint__fini(autoware_internal_planning_msgs__msg__ControlPoint * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // velocity
  // shift_length
  // distance
}

bool
autoware_internal_planning_msgs__msg__ControlPoint__are_equal(const autoware_internal_planning_msgs__msg__ControlPoint * lhs, const autoware_internal_planning_msgs__msg__ControlPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // shift_length
  if (lhs->shift_length != rhs->shift_length) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  return true;
}

bool
autoware_internal_planning_msgs__msg__ControlPoint__copy(
  const autoware_internal_planning_msgs__msg__ControlPoint * input,
  autoware_internal_planning_msgs__msg__ControlPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // velocity
  output->velocity = input->velocity;
  // shift_length
  output->shift_length = input->shift_length;
  // distance
  output->distance = input->distance;
  return true;
}

autoware_internal_planning_msgs__msg__ControlPoint *
autoware_internal_planning_msgs__msg__ControlPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_planning_msgs__msg__ControlPoint * msg = (autoware_internal_planning_msgs__msg__ControlPoint *)allocator.allocate(sizeof(autoware_internal_planning_msgs__msg__ControlPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_internal_planning_msgs__msg__ControlPoint));
  bool success = autoware_internal_planning_msgs__msg__ControlPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_internal_planning_msgs__msg__ControlPoint__destroy(autoware_internal_planning_msgs__msg__ControlPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_internal_planning_msgs__msg__ControlPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_internal_planning_msgs__msg__ControlPoint__Sequence__init(autoware_internal_planning_msgs__msg__ControlPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_planning_msgs__msg__ControlPoint * data = NULL;

  if (size) {
    data = (autoware_internal_planning_msgs__msg__ControlPoint *)allocator.zero_allocate(size, sizeof(autoware_internal_planning_msgs__msg__ControlPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_internal_planning_msgs__msg__ControlPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_internal_planning_msgs__msg__ControlPoint__fini(&data[i - 1]);
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
autoware_internal_planning_msgs__msg__ControlPoint__Sequence__fini(autoware_internal_planning_msgs__msg__ControlPoint__Sequence * array)
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
      autoware_internal_planning_msgs__msg__ControlPoint__fini(&array->data[i]);
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

autoware_internal_planning_msgs__msg__ControlPoint__Sequence *
autoware_internal_planning_msgs__msg__ControlPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_planning_msgs__msg__ControlPoint__Sequence * array = (autoware_internal_planning_msgs__msg__ControlPoint__Sequence *)allocator.allocate(sizeof(autoware_internal_planning_msgs__msg__ControlPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_internal_planning_msgs__msg__ControlPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_internal_planning_msgs__msg__ControlPoint__Sequence__destroy(autoware_internal_planning_msgs__msg__ControlPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_internal_planning_msgs__msg__ControlPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_internal_planning_msgs__msg__ControlPoint__Sequence__are_equal(const autoware_internal_planning_msgs__msg__ControlPoint__Sequence * lhs, const autoware_internal_planning_msgs__msg__ControlPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_internal_planning_msgs__msg__ControlPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_internal_planning_msgs__msg__ControlPoint__Sequence__copy(
  const autoware_internal_planning_msgs__msg__ControlPoint__Sequence * input,
  autoware_internal_planning_msgs__msg__ControlPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_internal_planning_msgs__msg__ControlPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_internal_planning_msgs__msg__ControlPoint * data =
      (autoware_internal_planning_msgs__msg__ControlPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_internal_planning_msgs__msg__ControlPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_internal_planning_msgs__msg__ControlPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_internal_planning_msgs__msg__ControlPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
