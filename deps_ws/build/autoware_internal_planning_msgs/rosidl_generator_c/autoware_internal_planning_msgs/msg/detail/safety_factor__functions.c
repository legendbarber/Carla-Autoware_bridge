// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_internal_planning_msgs:msg/SafetyFactor.idl
// generated code does not contain a copyright notice
#include "autoware_internal_planning_msgs/msg/detail/safety_factor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `object_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `predicted_path`
#include "autoware_perception_msgs/msg/detail/predicted_path__functions.h"
// Member `points`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
autoware_internal_planning_msgs__msg__SafetyFactor__init(autoware_internal_planning_msgs__msg__SafetyFactor * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // object_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->object_id)) {
    autoware_internal_planning_msgs__msg__SafetyFactor__fini(msg);
    return false;
  }
  // predicted_path
  if (!autoware_perception_msgs__msg__PredictedPath__init(&msg->predicted_path)) {
    autoware_internal_planning_msgs__msg__SafetyFactor__fini(msg);
    return false;
  }
  // ttc_begin
  // ttc_end
  // points
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->points, 0)) {
    autoware_internal_planning_msgs__msg__SafetyFactor__fini(msg);
    return false;
  }
  // is_safe
  return true;
}

void
autoware_internal_planning_msgs__msg__SafetyFactor__fini(autoware_internal_planning_msgs__msg__SafetyFactor * msg)
{
  if (!msg) {
    return;
  }
  // type
  // object_id
  unique_identifier_msgs__msg__UUID__fini(&msg->object_id);
  // predicted_path
  autoware_perception_msgs__msg__PredictedPath__fini(&msg->predicted_path);
  // ttc_begin
  // ttc_end
  // points
  geometry_msgs__msg__Point__Sequence__fini(&msg->points);
  // is_safe
}

bool
autoware_internal_planning_msgs__msg__SafetyFactor__are_equal(const autoware_internal_planning_msgs__msg__SafetyFactor * lhs, const autoware_internal_planning_msgs__msg__SafetyFactor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // object_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->object_id), &(rhs->object_id)))
  {
    return false;
  }
  // predicted_path
  if (!autoware_perception_msgs__msg__PredictedPath__are_equal(
      &(lhs->predicted_path), &(rhs->predicted_path)))
  {
    return false;
  }
  // ttc_begin
  if (lhs->ttc_begin != rhs->ttc_begin) {
    return false;
  }
  // ttc_end
  if (lhs->ttc_end != rhs->ttc_end) {
    return false;
  }
  // points
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  // is_safe
  if (lhs->is_safe != rhs->is_safe) {
    return false;
  }
  return true;
}

bool
autoware_internal_planning_msgs__msg__SafetyFactor__copy(
  const autoware_internal_planning_msgs__msg__SafetyFactor * input,
  autoware_internal_planning_msgs__msg__SafetyFactor * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // object_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->object_id), &(output->object_id)))
  {
    return false;
  }
  // predicted_path
  if (!autoware_perception_msgs__msg__PredictedPath__copy(
      &(input->predicted_path), &(output->predicted_path)))
  {
    return false;
  }
  // ttc_begin
  output->ttc_begin = input->ttc_begin;
  // ttc_end
  output->ttc_end = input->ttc_end;
  // points
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  // is_safe
  output->is_safe = input->is_safe;
  return true;
}

autoware_internal_planning_msgs__msg__SafetyFactor *
autoware_internal_planning_msgs__msg__SafetyFactor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_planning_msgs__msg__SafetyFactor * msg = (autoware_internal_planning_msgs__msg__SafetyFactor *)allocator.allocate(sizeof(autoware_internal_planning_msgs__msg__SafetyFactor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_internal_planning_msgs__msg__SafetyFactor));
  bool success = autoware_internal_planning_msgs__msg__SafetyFactor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_internal_planning_msgs__msg__SafetyFactor__destroy(autoware_internal_planning_msgs__msg__SafetyFactor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_internal_planning_msgs__msg__SafetyFactor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_internal_planning_msgs__msg__SafetyFactor__Sequence__init(autoware_internal_planning_msgs__msg__SafetyFactor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_planning_msgs__msg__SafetyFactor * data = NULL;

  if (size) {
    data = (autoware_internal_planning_msgs__msg__SafetyFactor *)allocator.zero_allocate(size, sizeof(autoware_internal_planning_msgs__msg__SafetyFactor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_internal_planning_msgs__msg__SafetyFactor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_internal_planning_msgs__msg__SafetyFactor__fini(&data[i - 1]);
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
autoware_internal_planning_msgs__msg__SafetyFactor__Sequence__fini(autoware_internal_planning_msgs__msg__SafetyFactor__Sequence * array)
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
      autoware_internal_planning_msgs__msg__SafetyFactor__fini(&array->data[i]);
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

autoware_internal_planning_msgs__msg__SafetyFactor__Sequence *
autoware_internal_planning_msgs__msg__SafetyFactor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_planning_msgs__msg__SafetyFactor__Sequence * array = (autoware_internal_planning_msgs__msg__SafetyFactor__Sequence *)allocator.allocate(sizeof(autoware_internal_planning_msgs__msg__SafetyFactor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_internal_planning_msgs__msg__SafetyFactor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_internal_planning_msgs__msg__SafetyFactor__Sequence__destroy(autoware_internal_planning_msgs__msg__SafetyFactor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_internal_planning_msgs__msg__SafetyFactor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_internal_planning_msgs__msg__SafetyFactor__Sequence__are_equal(const autoware_internal_planning_msgs__msg__SafetyFactor__Sequence * lhs, const autoware_internal_planning_msgs__msg__SafetyFactor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_internal_planning_msgs__msg__SafetyFactor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_internal_planning_msgs__msg__SafetyFactor__Sequence__copy(
  const autoware_internal_planning_msgs__msg__SafetyFactor__Sequence * input,
  autoware_internal_planning_msgs__msg__SafetyFactor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_internal_planning_msgs__msg__SafetyFactor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_internal_planning_msgs__msg__SafetyFactor * data =
      (autoware_internal_planning_msgs__msg__SafetyFactor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_internal_planning_msgs__msg__SafetyFactor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_internal_planning_msgs__msg__SafetyFactor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_internal_planning_msgs__msg__SafetyFactor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
