// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_internal_planning_msgs:msg/GeneratorInfo.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__GENERATOR_INFO__STRUCT_H_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__GENERATOR_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'generator_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'generator_name'
#include "std_msgs/msg/detail/string__struct.h"

/// Struct defined in msg/GeneratorInfo in the package autoware_internal_planning_msgs.
typedef struct autoware_internal_planning_msgs__msg__GeneratorInfo
{
  unique_identifier_msgs__msg__UUID generator_id;
  std_msgs__msg__String generator_name;
} autoware_internal_planning_msgs__msg__GeneratorInfo;

// Struct for a sequence of autoware_internal_planning_msgs__msg__GeneratorInfo.
typedef struct autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence
{
  autoware_internal_planning_msgs__msg__GeneratorInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__GENERATOR_INFO__STRUCT_H_
