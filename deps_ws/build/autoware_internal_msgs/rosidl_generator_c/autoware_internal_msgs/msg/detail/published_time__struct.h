// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_internal_msgs:msg/PublishedTime.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__PUBLISHED_TIME__STRUCT_H_
#define AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__PUBLISHED_TIME__STRUCT_H_

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
// Member 'published_stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/PublishedTime in the package autoware_internal_msgs.
/**
  * The debug message which includes header and published timestamp
 */
typedef struct autoware_internal_msgs__msg__PublishedTime
{
  std_msgs__msg__Header header;
  /// Timestamp indicating when the message was published
  builtin_interfaces__msg__Time published_stamp;
} autoware_internal_msgs__msg__PublishedTime;

// Struct for a sequence of autoware_internal_msgs__msg__PublishedTime.
typedef struct autoware_internal_msgs__msg__PublishedTime__Sequence
{
  autoware_internal_msgs__msg__PublishedTime * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_internal_msgs__msg__PublishedTime__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__PUBLISHED_TIME__STRUCT_H_
