// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_internal_planning_msgs:msg/GeneratorInfo.idl
// generated code does not contain a copyright notice
#include "autoware_internal_planning_msgs/msg/detail/generator_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `generator_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `generator_name`
#include "std_msgs/msg/detail/string__functions.h"

bool
autoware_internal_planning_msgs__msg__GeneratorInfo__init(autoware_internal_planning_msgs__msg__GeneratorInfo * msg)
{
  if (!msg) {
    return false;
  }
  // generator_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->generator_id)) {
    autoware_internal_planning_msgs__msg__GeneratorInfo__fini(msg);
    return false;
  }
  // generator_name
  if (!std_msgs__msg__String__init(&msg->generator_name)) {
    autoware_internal_planning_msgs__msg__GeneratorInfo__fini(msg);
    return false;
  }
  return true;
}

void
autoware_internal_planning_msgs__msg__GeneratorInfo__fini(autoware_internal_planning_msgs__msg__GeneratorInfo * msg)
{
  if (!msg) {
    return;
  }
  // generator_id
  unique_identifier_msgs__msg__UUID__fini(&msg->generator_id);
  // generator_name
  std_msgs__msg__String__fini(&msg->generator_name);
}

bool
autoware_internal_planning_msgs__msg__GeneratorInfo__are_equal(const autoware_internal_planning_msgs__msg__GeneratorInfo * lhs, const autoware_internal_planning_msgs__msg__GeneratorInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // generator_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->generator_id), &(rhs->generator_id)))
  {
    return false;
  }
  // generator_name
  if (!std_msgs__msg__String__are_equal(
      &(lhs->generator_name), &(rhs->generator_name)))
  {
    return false;
  }
  return true;
}

bool
autoware_internal_planning_msgs__msg__GeneratorInfo__copy(
  const autoware_internal_planning_msgs__msg__GeneratorInfo * input,
  autoware_internal_planning_msgs__msg__GeneratorInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // generator_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->generator_id), &(output->generator_id)))
  {
    return false;
  }
  // generator_name
  if (!std_msgs__msg__String__copy(
      &(input->generator_name), &(output->generator_name)))
  {
    return false;
  }
  return true;
}

autoware_internal_planning_msgs__msg__GeneratorInfo *
autoware_internal_planning_msgs__msg__GeneratorInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_planning_msgs__msg__GeneratorInfo * msg = (autoware_internal_planning_msgs__msg__GeneratorInfo *)allocator.allocate(sizeof(autoware_internal_planning_msgs__msg__GeneratorInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_internal_planning_msgs__msg__GeneratorInfo));
  bool success = autoware_internal_planning_msgs__msg__GeneratorInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_internal_planning_msgs__msg__GeneratorInfo__destroy(autoware_internal_planning_msgs__msg__GeneratorInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_internal_planning_msgs__msg__GeneratorInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence__init(autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_planning_msgs__msg__GeneratorInfo * data = NULL;

  if (size) {
    data = (autoware_internal_planning_msgs__msg__GeneratorInfo *)allocator.zero_allocate(size, sizeof(autoware_internal_planning_msgs__msg__GeneratorInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_internal_planning_msgs__msg__GeneratorInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_internal_planning_msgs__msg__GeneratorInfo__fini(&data[i - 1]);
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
autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence__fini(autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence * array)
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
      autoware_internal_planning_msgs__msg__GeneratorInfo__fini(&array->data[i]);
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

autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence *
autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence * array = (autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence *)allocator.allocate(sizeof(autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence__destroy(autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence__are_equal(const autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence * lhs, const autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_internal_planning_msgs__msg__GeneratorInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence__copy(
  const autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence * input,
  autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_internal_planning_msgs__msg__GeneratorInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_internal_planning_msgs__msg__GeneratorInfo * data =
      (autoware_internal_planning_msgs__msg__GeneratorInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_internal_planning_msgs__msg__GeneratorInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_internal_planning_msgs__msg__GeneratorInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_internal_planning_msgs__msg__GeneratorInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
