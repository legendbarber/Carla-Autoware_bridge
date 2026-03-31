// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_internal_perception_msgs:msg/SegmentationMask.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PERCEPTION_MSGS__MSG__DETAIL__SEGMENTATION_MASK__STRUCT_H_
#define AUTOWARE_INTERNAL_PERCEPTION_MSGS__MSG__DETAIL__SEGMENTATION_MASK__STRUCT_H_

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
// Member 'classification'
#include "autoware_perception_msgs/msg/detail/object_classification__struct.h"
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in msg/SegmentationMask in the package autoware_internal_perception_msgs.
typedef struct autoware_internal_perception_msgs__msg__SegmentationMask
{
  std_msgs__msg__Header header;
  /// It represent map between instance segmentation mask and labels
  /// The pixel intensities in mask's starts with 1 (pixel value 0 represent pixel is not belong any object)
  ///     `classification[0]` returns the `label_id` for pixels with an intensity value of `1` in the mask.
  ///     `classification[1]` returns the `label_id` for pixels with an intensity value of `2` in the mask.
  ///     ...
  /// The relationship between pixels and label IDs continues in this way.
  autoware_perception_msgs__msg__ObjectClassification__Sequence classification;
  /// Mask image
  sensor_msgs__msg__Image image;
} autoware_internal_perception_msgs__msg__SegmentationMask;

// Struct for a sequence of autoware_internal_perception_msgs__msg__SegmentationMask.
typedef struct autoware_internal_perception_msgs__msg__SegmentationMask__Sequence
{
  autoware_internal_perception_msgs__msg__SegmentationMask * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_internal_perception_msgs__msg__SegmentationMask__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_INTERNAL_PERCEPTION_MSGS__MSG__DETAIL__SEGMENTATION_MASK__STRUCT_H_
