// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_internal_planning_msgs:msg/SafetyFactorArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SAFETY_FACTOR_ARRAY__STRUCT_H_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SAFETY_FACTOR_ARRAY__STRUCT_H_

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
// Member 'factors'
#include "autoware_internal_planning_msgs/msg/detail/safety_factor__struct.h"
// Member 'detail'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SafetyFactorArray in the package autoware_internal_planning_msgs.
typedef struct autoware_internal_planning_msgs__msg__SafetyFactorArray
{
  std_msgs__msg__Header header;
  autoware_internal_planning_msgs__msg__SafetyFactor__Sequence factors;
  bool is_safe;
  rosidl_runtime_c__String detail;
} autoware_internal_planning_msgs__msg__SafetyFactorArray;

// Struct for a sequence of autoware_internal_planning_msgs__msg__SafetyFactorArray.
typedef struct autoware_internal_planning_msgs__msg__SafetyFactorArray__Sequence
{
  autoware_internal_planning_msgs__msg__SafetyFactorArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_internal_planning_msgs__msg__SafetyFactorArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SAFETY_FACTOR_ARRAY__STRUCT_H_
