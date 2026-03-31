// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_internal_planning_msgs:msg/VelocityLimit.idl
// generated code does not contain a copyright notice
#include "autoware_internal_planning_msgs/msg/detail/velocity_limit__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `constraints`
#include "autoware_internal_planning_msgs/msg/detail/velocity_limit_constraints__functions.h"
// Member `sender`
#include "rosidl_runtime_c/string_functions.h"

bool
autoware_internal_planning_msgs__msg__VelocityLimit__init(autoware_internal_planning_msgs__msg__VelocityLimit * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    autoware_internal_planning_msgs__msg__VelocityLimit__fini(msg);
    return false;
  }
  // max_velocity
  // use_constraints
  msg->use_constraints = false;
  // constraints
  if (!autoware_internal_planning_msgs__msg__VelocityLimitConstraints__init(&msg->constraints)) {
    autoware_internal_planning_msgs__msg__VelocityLimit__fini(msg);
    return false;
  }
  // sender
  if (!rosidl_runtime_c__String__init(&msg->sender)) {
    autoware_internal_planning_msgs__msg__VelocityLimit__fini(msg);
    return false;
  }
  return true;
}

void
autoware_internal_planning_msgs__msg__VelocityLimit__fini(autoware_internal_planning_msgs__msg__VelocityLimit * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // max_velocity
  // use_constraints
  // constraints
  autoware_internal_planning_msgs__msg__VelocityLimitConstraints__fini(&msg->constraints);
  // sender
  rosidl_runtime_c__String__fini(&msg->sender);
}

bool
autoware_internal_planning_msgs__msg__VelocityLimit__are_equal(const autoware_internal_planning_msgs__msg__VelocityLimit * lhs, const autoware_internal_planning_msgs__msg__VelocityLimit * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // max_velocity
  if (lhs->max_velocity != rhs->max_velocity) {
    return false;
  }
  // use_constraints
  if (lhs->use_constraints != rhs->use_constraints) {
    return false;
  }
  // constraints
  if (!autoware_internal_planning_msgs__msg__VelocityLimitConstraints__are_equal(
      &(lhs->constraints), &(rhs->constraints)))
  {
    return false;
  }
  // sender
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sender), &(rhs->sender)))
  {
    return false;
  }
  return true;
}

bool
autoware_internal_planning_msgs__msg__VelocityLimit__copy(
  const autoware_internal_planning_msgs__msg__VelocityLimit * input,
  autoware_internal_planning_msgs__msg__VelocityLimit * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // max_velocity
  output->max_velocity = input->max_velocity;
  // use_constraints
  output->use_constraints = input->use_constraints;
  // constraints
  if (!autoware_internal_planning_msgs__msg__VelocityLimitConstraints__copy(
      &(input->constraints), &(output->constraints)))
  {
    return false;
  }
  // sender
  if (!rosidl_runtime_c__String__copy(
      &(input->sender), &(output->sender)))
  {
    return false;
  }
  return true;
}

autoware_internal_planning_msgs__msg__VelocityLimit *
autoware_internal_planning_msgs__msg__VelocityLimit__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_planning_msgs__msg__VelocityLimit * msg = (autoware_internal_planning_msgs__msg__VelocityLimit *)allocator.allocate(sizeof(autoware_internal_planning_msgs__msg__VelocityLimit), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_internal_planning_msgs__msg__VelocityLimit));
  bool success = autoware_internal_planning_msgs__msg__VelocityLimit__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_internal_planning_msgs__msg__VelocityLimit__destroy(autoware_internal_planning_msgs__msg__VelocityLimit * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_internal_planning_msgs__msg__VelocityLimit__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_internal_planning_msgs__msg__VelocityLimit__Sequence__init(autoware_internal_planning_msgs__msg__VelocityLimit__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_planning_msgs__msg__VelocityLimit * data = NULL;

  if (size) {
    data = (autoware_internal_planning_msgs__msg__VelocityLimit *)allocator.zero_allocate(size, sizeof(autoware_internal_planning_msgs__msg__VelocityLimit), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_internal_planning_msgs__msg__VelocityLimit__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_internal_planning_msgs__msg__VelocityLimit__fini(&data[i - 1]);
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
autoware_internal_planning_msgs__msg__VelocityLimit__Sequence__fini(autoware_internal_planning_msgs__msg__VelocityLimit__Sequence * array)
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
      autoware_internal_planning_msgs__msg__VelocityLimit__fini(&array->data[i]);
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

autoware_internal_planning_msgs__msg__VelocityLimit__Sequence *
autoware_internal_planning_msgs__msg__VelocityLimit__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_planning_msgs__msg__VelocityLimit__Sequence * array = (autoware_internal_planning_msgs__msg__VelocityLimit__Sequence *)allocator.allocate(sizeof(autoware_internal_planning_msgs__msg__VelocityLimit__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_internal_planning_msgs__msg__VelocityLimit__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_internal_planning_msgs__msg__VelocityLimit__Sequence__destroy(autoware_internal_planning_msgs__msg__VelocityLimit__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_internal_planning_msgs__msg__VelocityLimit__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_internal_planning_msgs__msg__VelocityLimit__Sequence__are_equal(const autoware_internal_planning_msgs__msg__VelocityLimit__Sequence * lhs, const autoware_internal_planning_msgs__msg__VelocityLimit__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_internal_planning_msgs__msg__VelocityLimit__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_internal_planning_msgs__msg__VelocityLimit__Sequence__copy(
  const autoware_internal_planning_msgs__msg__VelocityLimit__Sequence * input,
  autoware_internal_planning_msgs__msg__VelocityLimit__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_internal_planning_msgs__msg__VelocityLimit);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_internal_planning_msgs__msg__VelocityLimit * data =
      (autoware_internal_planning_msgs__msg__VelocityLimit *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_internal_planning_msgs__msg__VelocityLimit__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_internal_planning_msgs__msg__VelocityLimit__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_internal_planning_msgs__msg__VelocityLimit__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
