// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_internal_msgs:msg/ResourceUsageReport.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__RESOURCE_USAGE_REPORT__STRUCT_H_
#define AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__RESOURCE_USAGE_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/ResourceUsageReport in the package autoware_internal_msgs.
typedef struct autoware_internal_msgs__msg__ResourceUsageReport
{
  std_msgs__msg__Header header;
  /// Process identifier
  uint32_t pid;
  /// CPU usage of the process
  float cpu_cores_utilized;
  /// Memory usage metrics for the whole system
  uint64_t total_memory_bytes;
  uint64_t free_memory_bytes;
  /// Memory used by the process
  uint64_t process_memory_bytes;
} autoware_internal_msgs__msg__ResourceUsageReport;

// Struct for a sequence of autoware_internal_msgs__msg__ResourceUsageReport.
typedef struct autoware_internal_msgs__msg__ResourceUsageReport__Sequence
{
  autoware_internal_msgs__msg__ResourceUsageReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_internal_msgs__msg__ResourceUsageReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__RESOURCE_USAGE_REPORT__STRUCT_H_
