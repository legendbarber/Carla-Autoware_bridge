// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_internal_perception_msgs:msg/SegmentationMask.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_internal_perception_msgs/msg/detail/segmentation_mask__rosidl_typesupport_introspection_c.h"
#include "autoware_internal_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_internal_perception_msgs/msg/detail/segmentation_mask__functions.h"
#include "autoware_internal_perception_msgs/msg/detail/segmentation_mask__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `classification`
#include "autoware_perception_msgs/msg/object_classification.h"
// Member `classification`
#include "autoware_perception_msgs/msg/detail/object_classification__rosidl_typesupport_introspection_c.h"
// Member `image`
#include "sensor_msgs/msg/image.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_internal_perception_msgs__msg__SegmentationMask__rosidl_typesupport_introspection_c__SegmentationMask_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_internal_perception_msgs__msg__SegmentationMask__init(message_memory);
}

void autoware_internal_perception_msgs__msg__SegmentationMask__rosidl_typesupport_introspection_c__SegmentationMask_fini_function(void * message_memory)
{
  autoware_internal_perception_msgs__msg__SegmentationMask__fini(message_memory);
}

size_t autoware_internal_perception_msgs__msg__SegmentationMask__rosidl_typesupport_introspection_c__size_function__SegmentationMask__classification(
  const void * untyped_member)
{
  const autoware_perception_msgs__msg__ObjectClassification__Sequence * member =
    (const autoware_perception_msgs__msg__ObjectClassification__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_internal_perception_msgs__msg__SegmentationMask__rosidl_typesupport_introspection_c__get_const_function__SegmentationMask__classification(
  const void * untyped_member, size_t index)
{
  const autoware_perception_msgs__msg__ObjectClassification__Sequence * member =
    (const autoware_perception_msgs__msg__ObjectClassification__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_internal_perception_msgs__msg__SegmentationMask__rosidl_typesupport_introspection_c__get_function__SegmentationMask__classification(
  void * untyped_member, size_t index)
{
  autoware_perception_msgs__msg__ObjectClassification__Sequence * member =
    (autoware_perception_msgs__msg__ObjectClassification__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_internal_perception_msgs__msg__SegmentationMask__rosidl_typesupport_introspection_c__fetch_function__SegmentationMask__classification(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autoware_perception_msgs__msg__ObjectClassification * item =
    ((const autoware_perception_msgs__msg__ObjectClassification *)
    autoware_internal_perception_msgs__msg__SegmentationMask__rosidl_typesupport_introspection_c__get_const_function__SegmentationMask__classification(untyped_member, index));
  autoware_perception_msgs__msg__ObjectClassification * value =
    (autoware_perception_msgs__msg__ObjectClassification *)(untyped_value);
  *value = *item;
}

void autoware_internal_perception_msgs__msg__SegmentationMask__rosidl_typesupport_introspection_c__assign_function__SegmentationMask__classification(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autoware_perception_msgs__msg__ObjectClassification * item =
    ((autoware_perception_msgs__msg__ObjectClassification *)
    autoware_internal_perception_msgs__msg__SegmentationMask__rosidl_typesupport_introspection_c__get_function__SegmentationMask__classification(untyped_member, index));
  const autoware_perception_msgs__msg__ObjectClassification * value =
    (const autoware_perception_msgs__msg__ObjectClassification *)(untyped_value);
  *item = *value;
}

bool autoware_internal_perception_msgs__msg__SegmentationMask__rosidl_typesupport_introspection_c__resize_function__SegmentationMask__classification(
  void * untyped_member, size_t size)
{
  autoware_perception_msgs__msg__ObjectClassification__Sequence * member =
    (autoware_perception_msgs__msg__ObjectClassification__Sequence *)(untyped_member);
  autoware_perception_msgs__msg__ObjectClassification__Sequence__fini(member);
  return autoware_perception_msgs__msg__ObjectClassification__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_internal_perception_msgs__msg__SegmentationMask__rosidl_typesupport_introspection_c__SegmentationMask_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_perception_msgs__msg__SegmentationMask, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "classification",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_perception_msgs__msg__SegmentationMask, classification),  // bytes offset in struct
    NULL,  // default value
    autoware_internal_perception_msgs__msg__SegmentationMask__rosidl_typesupport_introspection_c__size_function__SegmentationMask__classification,  // size() function pointer
    autoware_internal_perception_msgs__msg__SegmentationMask__rosidl_typesupport_introspection_c__get_const_function__SegmentationMask__classification,  // get_const(index) function pointer
    autoware_internal_perception_msgs__msg__SegmentationMask__rosidl_typesupport_introspection_c__get_function__SegmentationMask__classification,  // get(index) function pointer
    autoware_internal_perception_msgs__msg__SegmentationMask__rosidl_typesupport_introspection_c__fetch_function__SegmentationMask__classification,  // fetch(index, &value) function pointer
    autoware_internal_perception_msgs__msg__SegmentationMask__rosidl_typesupport_introspection_c__assign_function__SegmentationMask__classification,  // assign(index, value) function pointer
    autoware_internal_perception_msgs__msg__SegmentationMask__rosidl_typesupport_introspection_c__resize_function__SegmentationMask__classification  // resize(index) function pointer
  },
  {
    "image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_perception_msgs__msg__SegmentationMask, image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_internal_perception_msgs__msg__SegmentationMask__rosidl_typesupport_introspection_c__SegmentationMask_message_members = {
  "autoware_internal_perception_msgs__msg",  // message namespace
  "SegmentationMask",  // message name
  3,  // number of fields
  sizeof(autoware_internal_perception_msgs__msg__SegmentationMask),
  autoware_internal_perception_msgs__msg__SegmentationMask__rosidl_typesupport_introspection_c__SegmentationMask_message_member_array,  // message members
  autoware_internal_perception_msgs__msg__SegmentationMask__rosidl_typesupport_introspection_c__SegmentationMask_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_internal_perception_msgs__msg__SegmentationMask__rosidl_typesupport_introspection_c__SegmentationMask_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_internal_perception_msgs__msg__SegmentationMask__rosidl_typesupport_introspection_c__SegmentationMask_message_type_support_handle = {
  0,
  &autoware_internal_perception_msgs__msg__SegmentationMask__rosidl_typesupport_introspection_c__SegmentationMask_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_internal_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_internal_perception_msgs, msg, SegmentationMask)() {
  autoware_internal_perception_msgs__msg__SegmentationMask__rosidl_typesupport_introspection_c__SegmentationMask_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  autoware_internal_perception_msgs__msg__SegmentationMask__rosidl_typesupport_introspection_c__SegmentationMask_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_perception_msgs, msg, ObjectClassification)();
  autoware_internal_perception_msgs__msg__SegmentationMask__rosidl_typesupport_introspection_c__SegmentationMask_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!autoware_internal_perception_msgs__msg__SegmentationMask__rosidl_typesupport_introspection_c__SegmentationMask_message_type_support_handle.typesupport_identifier) {
    autoware_internal_perception_msgs__msg__SegmentationMask__rosidl_typesupport_introspection_c__SegmentationMask_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_internal_perception_msgs__msg__SegmentationMask__rosidl_typesupport_introspection_c__SegmentationMask_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
