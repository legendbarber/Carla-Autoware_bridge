// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_internal_planning_msgs:msg/PlanningFactor.idl
// generated code does not contain a copyright notice
#include "autoware_internal_planning_msgs/msg/detail/planning_factor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `module`
// Member `detail`
#include "rosidl_runtime_c/string_functions.h"
// Member `control_points`
#include "autoware_internal_planning_msgs/msg/detail/control_point__functions.h"
// Member `safety_factors`
#include "autoware_internal_planning_msgs/msg/detail/safety_factor_array__functions.h"

bool
autoware_internal_planning_msgs__msg__PlanningFactor__init(autoware_internal_planning_msgs__msg__PlanningFactor * msg)
{
  if (!msg) {
    return false;
  }
  // module
  if (!rosidl_runtime_c__String__init(&msg->module)) {
    autoware_internal_planning_msgs__msg__PlanningFactor__fini(msg);
    return false;
  }
  // is_driving_forward
  // control_points
  if (!autoware_internal_planning_msgs__msg__ControlPoint__Sequence__init(&msg->control_points, 0)) {
    autoware_internal_planning_msgs__msg__PlanningFactor__fini(msg);
    return false;
  }
  // behavior
  // detail
  if (!rosidl_runtime_c__String__init(&msg->detail)) {
    autoware_internal_planning_msgs__msg__PlanningFactor__fini(msg);
    return false;
  }
  // safety_factors
  if (!autoware_internal_planning_msgs__msg__SafetyFactorArray__init(&msg->safety_factors)) {
    autoware_internal_planning_msgs__msg__PlanningFactor__fini(msg);
    return false;
  }
  return true;
}

void
autoware_internal_planning_msgs__msg__PlanningFactor__fini(autoware_internal_planning_msgs__msg__PlanningFactor * msg)
{
  if (!msg) {
    return;
  }
  // module
  rosidl_runtime_c__String__fini(&msg->module);
  // is_driving_forward
  // control_points
  autoware_internal_planning_msgs__msg__ControlPoint__Sequence__fini(&msg->control_points);
  // behavior
  // detail
  rosidl_runtime_c__String__fini(&msg->detail);
  // safety_factors
  autoware_internal_planning_msgs__msg__SafetyFactorArray__fini(&msg->safety_factors);
}

bool
autoware_internal_planning_msgs__msg__PlanningFactor__are_equal(const autoware_internal_planning_msgs__msg__PlanningFactor * lhs, const autoware_internal_planning_msgs__msg__PlanningFactor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // module
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->module), &(rhs->module)))
  {
    return false;
  }
  // is_driving_forward
  if (lhs->is_driving_forward != rhs->is_driving_forward) {
    return false;
  }
  // control_points
  if (!autoware_internal_planning_msgs__msg__ControlPoint__Sequence__are_equal(
      &(lhs->control_points), &(rhs->control_points)))
  {
    return false;
  }
  // behavior
  if (lhs->behavior != rhs->behavior) {
    return false;
  }
  // detail
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->detail), &(rhs->detail)))
  {
    return false;
  }
  // safety_factors
  if (!autoware_internal_planning_msgs__msg__SafetyFactorArray__are_equal(
      &(lhs->safety_factors), &(rhs->safety_factors)))
  {
    return false;
  }
  return true;
}

bool
autoware_internal_planning_msgs__msg__PlanningFactor__copy(
  const autoware_internal_planning_msgs__msg__PlanningFactor * input,
  autoware_internal_planning_msgs__msg__PlanningFactor * output)
{
  if (!input || !output) {
    return false;
  }
  // module
  if (!rosidl_runtime_c__String__copy(
      &(input->module), &(output->module)))
  {
    return false;
  }
  // is_driving_forward
  output->is_driving_forward = input->is_driving_forward;
  // control_points
  if (!autoware_internal_planning_msgs__msg__ControlPoint__Sequence__copy(
      &(input->control_points), &(output->control_points)))
  {
    return false;
  }
  // behavior
  output->behavior = input->behavior;
  // detail
  if (!rosidl_runtime_c__String__copy(
      &(input->detail), &(output->detail)))
  {
    return false;
  }
  // safety_factors
  if (!autoware_internal_planning_msgs__msg__SafetyFactorArray__copy(
      &(input->safety_factors), &(output->safety_factors)))
  {
    return false;
  }
  return true;
}

autoware_internal_planning_msgs__msg__PlanningFactor *
autoware_internal_planning_msgs__msg__PlanningFactor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_planning_msgs__msg__PlanningFactor * msg = (autoware_internal_planning_msgs__msg__PlanningFactor *)allocator.allocate(sizeof(autoware_internal_planning_msgs__msg__PlanningFactor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_internal_planning_msgs__msg__PlanningFactor));
  bool success = autoware_internal_planning_msgs__msg__PlanningFactor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_internal_planning_msgs__msg__PlanningFactor__destroy(autoware_internal_planning_msgs__msg__PlanningFactor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_internal_planning_msgs__msg__PlanningFactor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_internal_planning_msgs__msg__PlanningFactor__Sequence__init(autoware_internal_planning_msgs__msg__PlanningFactor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_planning_msgs__msg__PlanningFactor * data = NULL;

  if (size) {
    data = (autoware_internal_planning_msgs__msg__PlanningFactor *)allocator.zero_allocate(size, sizeof(autoware_internal_planning_msgs__msg__PlanningFactor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_internal_planning_msgs__msg__PlanningFactor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_internal_planning_msgs__msg__PlanningFactor__fini(&data[i - 1]);
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
autoware_internal_planning_msgs__msg__PlanningFactor__Sequence__fini(autoware_internal_planning_msgs__msg__PlanningFactor__Sequence * array)
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
      autoware_internal_planning_msgs__msg__PlanningFactor__fini(&array->data[i]);
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

autoware_internal_planning_msgs__msg__PlanningFactor__Sequence *
autoware_internal_planning_msgs__msg__PlanningFactor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_planning_msgs__msg__PlanningFactor__Sequence * array = (autoware_internal_planning_msgs__msg__PlanningFactor__Sequence *)allocator.allocate(sizeof(autoware_internal_planning_msgs__msg__PlanningFactor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_internal_planning_msgs__msg__PlanningFactor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_internal_planning_msgs__msg__PlanningFactor__Sequence__destroy(autoware_internal_planning_msgs__msg__PlanningFactor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_internal_planning_msgs__msg__PlanningFactor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_internal_planning_msgs__msg__PlanningFactor__Sequence__are_equal(const autoware_internal_planning_msgs__msg__PlanningFactor__Sequence * lhs, const autoware_internal_planning_msgs__msg__PlanningFactor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_internal_planning_msgs__msg__PlanningFactor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_internal_planning_msgs__msg__PlanningFactor__Sequence__copy(
  const autoware_internal_planning_msgs__msg__PlanningFactor__Sequence * input,
  autoware_internal_planning_msgs__msg__PlanningFactor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_internal_planning_msgs__msg__PlanningFactor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_internal_planning_msgs__msg__PlanningFactor * data =
      (autoware_internal_planning_msgs__msg__PlanningFactor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_internal_planning_msgs__msg__PlanningFactor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_internal_planning_msgs__msg__PlanningFactor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_internal_planning_msgs__msg__PlanningFactor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
