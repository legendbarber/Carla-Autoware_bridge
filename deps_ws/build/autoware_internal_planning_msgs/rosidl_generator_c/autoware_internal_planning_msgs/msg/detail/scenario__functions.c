// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_internal_planning_msgs:msg/Scenario.idl
// generated code does not contain a copyright notice
#include "autoware_internal_planning_msgs/msg/detail/scenario__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `current_scenario`
// Member `activating_scenarios`
#include "rosidl_runtime_c/string_functions.h"

bool
autoware_internal_planning_msgs__msg__Scenario__init(autoware_internal_planning_msgs__msg__Scenario * msg)
{
  if (!msg) {
    return false;
  }
  // current_scenario
  if (!rosidl_runtime_c__String__init(&msg->current_scenario)) {
    autoware_internal_planning_msgs__msg__Scenario__fini(msg);
    return false;
  }
  // activating_scenarios
  if (!rosidl_runtime_c__String__Sequence__init(&msg->activating_scenarios, 0)) {
    autoware_internal_planning_msgs__msg__Scenario__fini(msg);
    return false;
  }
  return true;
}

void
autoware_internal_planning_msgs__msg__Scenario__fini(autoware_internal_planning_msgs__msg__Scenario * msg)
{
  if (!msg) {
    return;
  }
  // current_scenario
  rosidl_runtime_c__String__fini(&msg->current_scenario);
  // activating_scenarios
  rosidl_runtime_c__String__Sequence__fini(&msg->activating_scenarios);
}

bool
autoware_internal_planning_msgs__msg__Scenario__are_equal(const autoware_internal_planning_msgs__msg__Scenario * lhs, const autoware_internal_planning_msgs__msg__Scenario * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_scenario
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_scenario), &(rhs->current_scenario)))
  {
    return false;
  }
  // activating_scenarios
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->activating_scenarios), &(rhs->activating_scenarios)))
  {
    return false;
  }
  return true;
}

bool
autoware_internal_planning_msgs__msg__Scenario__copy(
  const autoware_internal_planning_msgs__msg__Scenario * input,
  autoware_internal_planning_msgs__msg__Scenario * output)
{
  if (!input || !output) {
    return false;
  }
  // current_scenario
  if (!rosidl_runtime_c__String__copy(
      &(input->current_scenario), &(output->current_scenario)))
  {
    return false;
  }
  // activating_scenarios
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->activating_scenarios), &(output->activating_scenarios)))
  {
    return false;
  }
  return true;
}

autoware_internal_planning_msgs__msg__Scenario *
autoware_internal_planning_msgs__msg__Scenario__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_planning_msgs__msg__Scenario * msg = (autoware_internal_planning_msgs__msg__Scenario *)allocator.allocate(sizeof(autoware_internal_planning_msgs__msg__Scenario), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_internal_planning_msgs__msg__Scenario));
  bool success = autoware_internal_planning_msgs__msg__Scenario__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_internal_planning_msgs__msg__Scenario__destroy(autoware_internal_planning_msgs__msg__Scenario * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_internal_planning_msgs__msg__Scenario__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_internal_planning_msgs__msg__Scenario__Sequence__init(autoware_internal_planning_msgs__msg__Scenario__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_planning_msgs__msg__Scenario * data = NULL;

  if (size) {
    data = (autoware_internal_planning_msgs__msg__Scenario *)allocator.zero_allocate(size, sizeof(autoware_internal_planning_msgs__msg__Scenario), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_internal_planning_msgs__msg__Scenario__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_internal_planning_msgs__msg__Scenario__fini(&data[i - 1]);
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
autoware_internal_planning_msgs__msg__Scenario__Sequence__fini(autoware_internal_planning_msgs__msg__Scenario__Sequence * array)
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
      autoware_internal_planning_msgs__msg__Scenario__fini(&array->data[i]);
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

autoware_internal_planning_msgs__msg__Scenario__Sequence *
autoware_internal_planning_msgs__msg__Scenario__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_planning_msgs__msg__Scenario__Sequence * array = (autoware_internal_planning_msgs__msg__Scenario__Sequence *)allocator.allocate(sizeof(autoware_internal_planning_msgs__msg__Scenario__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_internal_planning_msgs__msg__Scenario__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_internal_planning_msgs__msg__Scenario__Sequence__destroy(autoware_internal_planning_msgs__msg__Scenario__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_internal_planning_msgs__msg__Scenario__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_internal_planning_msgs__msg__Scenario__Sequence__are_equal(const autoware_internal_planning_msgs__msg__Scenario__Sequence * lhs, const autoware_internal_planning_msgs__msg__Scenario__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_internal_planning_msgs__msg__Scenario__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_internal_planning_msgs__msg__Scenario__Sequence__copy(
  const autoware_internal_planning_msgs__msg__Scenario__Sequence * input,
  autoware_internal_planning_msgs__msg__Scenario__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_internal_planning_msgs__msg__Scenario);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_internal_planning_msgs__msg__Scenario * data =
      (autoware_internal_planning_msgs__msg__Scenario *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_internal_planning_msgs__msg__Scenario__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_internal_planning_msgs__msg__Scenario__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_internal_planning_msgs__msg__Scenario__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
