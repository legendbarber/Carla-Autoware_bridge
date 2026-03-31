// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_internal_msgs:msg/ResourceUsageReport.idl
// generated code does not contain a copyright notice
#include "autoware_internal_msgs/msg/detail/resource_usage_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
autoware_internal_msgs__msg__ResourceUsageReport__init(autoware_internal_msgs__msg__ResourceUsageReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_internal_msgs__msg__ResourceUsageReport__fini(msg);
    return false;
  }
  // pid
  // cpu_cores_utilized
  // total_memory_bytes
  // free_memory_bytes
  // process_memory_bytes
  return true;
}

void
autoware_internal_msgs__msg__ResourceUsageReport__fini(autoware_internal_msgs__msg__ResourceUsageReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pid
  // cpu_cores_utilized
  // total_memory_bytes
  // free_memory_bytes
  // process_memory_bytes
}

bool
autoware_internal_msgs__msg__ResourceUsageReport__are_equal(const autoware_internal_msgs__msg__ResourceUsageReport * lhs, const autoware_internal_msgs__msg__ResourceUsageReport * rhs)
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
  // pid
  if (lhs->pid != rhs->pid) {
    return false;
  }
  // cpu_cores_utilized
  if (lhs->cpu_cores_utilized != rhs->cpu_cores_utilized) {
    return false;
  }
  // total_memory_bytes
  if (lhs->total_memory_bytes != rhs->total_memory_bytes) {
    return false;
  }
  // free_memory_bytes
  if (lhs->free_memory_bytes != rhs->free_memory_bytes) {
    return false;
  }
  // process_memory_bytes
  if (lhs->process_memory_bytes != rhs->process_memory_bytes) {
    return false;
  }
  return true;
}

bool
autoware_internal_msgs__msg__ResourceUsageReport__copy(
  const autoware_internal_msgs__msg__ResourceUsageReport * input,
  autoware_internal_msgs__msg__ResourceUsageReport * output)
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
  // pid
  output->pid = input->pid;
  // cpu_cores_utilized
  output->cpu_cores_utilized = input->cpu_cores_utilized;
  // total_memory_bytes
  output->total_memory_bytes = input->total_memory_bytes;
  // free_memory_bytes
  output->free_memory_bytes = input->free_memory_bytes;
  // process_memory_bytes
  output->process_memory_bytes = input->process_memory_bytes;
  return true;
}

autoware_internal_msgs__msg__ResourceUsageReport *
autoware_internal_msgs__msg__ResourceUsageReport__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_msgs__msg__ResourceUsageReport * msg = (autoware_internal_msgs__msg__ResourceUsageReport *)allocator.allocate(sizeof(autoware_internal_msgs__msg__ResourceUsageReport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_internal_msgs__msg__ResourceUsageReport));
  bool success = autoware_internal_msgs__msg__ResourceUsageReport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_internal_msgs__msg__ResourceUsageReport__destroy(autoware_internal_msgs__msg__ResourceUsageReport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_internal_msgs__msg__ResourceUsageReport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_internal_msgs__msg__ResourceUsageReport__Sequence__init(autoware_internal_msgs__msg__ResourceUsageReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_msgs__msg__ResourceUsageReport * data = NULL;

  if (size) {
    data = (autoware_internal_msgs__msg__ResourceUsageReport *)allocator.zero_allocate(size, sizeof(autoware_internal_msgs__msg__ResourceUsageReport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_internal_msgs__msg__ResourceUsageReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_internal_msgs__msg__ResourceUsageReport__fini(&data[i - 1]);
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
autoware_internal_msgs__msg__ResourceUsageReport__Sequence__fini(autoware_internal_msgs__msg__ResourceUsageReport__Sequence * array)
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
      autoware_internal_msgs__msg__ResourceUsageReport__fini(&array->data[i]);
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

autoware_internal_msgs__msg__ResourceUsageReport__Sequence *
autoware_internal_msgs__msg__ResourceUsageReport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_internal_msgs__msg__ResourceUsageReport__Sequence * array = (autoware_internal_msgs__msg__ResourceUsageReport__Sequence *)allocator.allocate(sizeof(autoware_internal_msgs__msg__ResourceUsageReport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_internal_msgs__msg__ResourceUsageReport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_internal_msgs__msg__ResourceUsageReport__Sequence__destroy(autoware_internal_msgs__msg__ResourceUsageReport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_internal_msgs__msg__ResourceUsageReport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_internal_msgs__msg__ResourceUsageReport__Sequence__are_equal(const autoware_internal_msgs__msg__ResourceUsageReport__Sequence * lhs, const autoware_internal_msgs__msg__ResourceUsageReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_internal_msgs__msg__ResourceUsageReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_internal_msgs__msg__ResourceUsageReport__Sequence__copy(
  const autoware_internal_msgs__msg__ResourceUsageReport__Sequence * input,
  autoware_internal_msgs__msg__ResourceUsageReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_internal_msgs__msg__ResourceUsageReport);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_internal_msgs__msg__ResourceUsageReport * data =
      (autoware_internal_msgs__msg__ResourceUsageReport *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_internal_msgs__msg__ResourceUsageReport__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_internal_msgs__msg__ResourceUsageReport__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_internal_msgs__msg__ResourceUsageReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
