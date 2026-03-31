// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_perception_msgs:msg/TrafficLightGroup.idl
// generated code does not contain a copyright notice
#include "autoware_perception_msgs/msg/detail/traffic_light_group__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_perception_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_perception_msgs/msg/detail/traffic_light_group__struct.h"
#include "autoware_perception_msgs/msg/detail/traffic_light_group__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "autoware_perception_msgs/msg/detail/predicted_traffic_light_state__functions.h"  // predictions
#include "autoware_perception_msgs/msg/detail/traffic_light_element__functions.h"  // elements

// forward declare type support functions
size_t get_serialized_size_autoware_perception_msgs__msg__PredictedTrafficLightState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autoware_perception_msgs__msg__PredictedTrafficLightState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_perception_msgs, msg, PredictedTrafficLightState)();
size_t get_serialized_size_autoware_perception_msgs__msg__TrafficLightElement(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autoware_perception_msgs__msg__TrafficLightElement(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_perception_msgs, msg, TrafficLightElement)();


using _TrafficLightGroup__ros_msg_type = autoware_perception_msgs__msg__TrafficLightGroup;

static bool _TrafficLightGroup__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrafficLightGroup__ros_msg_type * ros_message = static_cast<const _TrafficLightGroup__ros_msg_type *>(untyped_ros_message);
  // Field name: traffic_light_group_id
  {
    cdr << ros_message->traffic_light_group_id;
  }

  // Field name: elements
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_perception_msgs, msg, TrafficLightElement
      )()->data);
    size_t size = ros_message->elements.size;
    auto array_ptr = ros_message->elements.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: predictions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_perception_msgs, msg, PredictedTrafficLightState
      )()->data);
    size_t size = ros_message->predictions.size;
    auto array_ptr = ros_message->predictions.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _TrafficLightGroup__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrafficLightGroup__ros_msg_type * ros_message = static_cast<_TrafficLightGroup__ros_msg_type *>(untyped_ros_message);
  // Field name: traffic_light_group_id
  {
    cdr >> ros_message->traffic_light_group_id;
  }

  // Field name: elements
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_perception_msgs, msg, TrafficLightElement
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->elements.data) {
      autoware_perception_msgs__msg__TrafficLightElement__Sequence__fini(&ros_message->elements);
    }
    if (!autoware_perception_msgs__msg__TrafficLightElement__Sequence__init(&ros_message->elements, size)) {
      fprintf(stderr, "failed to create array for field 'elements'");
      return false;
    }
    auto array_ptr = ros_message->elements.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: predictions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_perception_msgs, msg, PredictedTrafficLightState
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->predictions.data) {
      autoware_perception_msgs__msg__PredictedTrafficLightState__Sequence__fini(&ros_message->predictions);
    }
    if (!autoware_perception_msgs__msg__PredictedTrafficLightState__Sequence__init(&ros_message->predictions, size)) {
      fprintf(stderr, "failed to create array for field 'predictions'");
      return false;
    }
    auto array_ptr = ros_message->predictions.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_perception_msgs
size_t get_serialized_size_autoware_perception_msgs__msg__TrafficLightGroup(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrafficLightGroup__ros_msg_type * ros_message = static_cast<const _TrafficLightGroup__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name traffic_light_group_id
  {
    size_t item_size = sizeof(ros_message->traffic_light_group_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name elements
  {
    size_t array_size = ros_message->elements.size;
    auto array_ptr = ros_message->elements.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_autoware_perception_msgs__msg__TrafficLightElement(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name predictions
  {
    size_t array_size = ros_message->predictions.size;
    auto array_ptr = ros_message->predictions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_autoware_perception_msgs__msg__PredictedTrafficLightState(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TrafficLightGroup__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_perception_msgs__msg__TrafficLightGroup(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_perception_msgs
size_t max_serialized_size_autoware_perception_msgs__msg__TrafficLightGroup(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: traffic_light_group_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: elements
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_autoware_perception_msgs__msg__TrafficLightElement(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: predictions
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_autoware_perception_msgs__msg__PredictedTrafficLightState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = autoware_perception_msgs__msg__TrafficLightGroup;
    is_plain =
      (
      offsetof(DataType, predictions) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TrafficLightGroup__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_autoware_perception_msgs__msg__TrafficLightGroup(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TrafficLightGroup = {
  "autoware_perception_msgs::msg",
  "TrafficLightGroup",
  _TrafficLightGroup__cdr_serialize,
  _TrafficLightGroup__cdr_deserialize,
  _TrafficLightGroup__get_serialized_size,
  _TrafficLightGroup__max_serialized_size
};

static rosidl_message_type_support_t _TrafficLightGroup__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrafficLightGroup,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_perception_msgs, msg, TrafficLightGroup)() {
  return &_TrafficLightGroup__type_support;
}

#if defined(__cplusplus)
}
#endif
