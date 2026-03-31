// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_adapi_v1_msgs:msg/DiagLinkStruct.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/msg/detail/diag_link_struct__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_adapi_v1_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_adapi_v1_msgs/msg/detail/diag_link_struct__struct.h"
#include "autoware_adapi_v1_msgs/msg/detail/diag_link_struct__functions.h"
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


// forward declare type support functions


using _DiagLinkStruct__ros_msg_type = autoware_adapi_v1_msgs__msg__DiagLinkStruct;

static bool _DiagLinkStruct__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DiagLinkStruct__ros_msg_type * ros_message = static_cast<const _DiagLinkStruct__ros_msg_type *>(untyped_ros_message);
  // Field name: parent
  {
    cdr << ros_message->parent;
  }

  // Field name: child
  {
    cdr << ros_message->child;
  }

  return true;
}

static bool _DiagLinkStruct__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DiagLinkStruct__ros_msg_type * ros_message = static_cast<_DiagLinkStruct__ros_msg_type *>(untyped_ros_message);
  // Field name: parent
  {
    cdr >> ros_message->parent;
  }

  // Field name: child
  {
    cdr >> ros_message->child;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_adapi_v1_msgs
size_t get_serialized_size_autoware_adapi_v1_msgs__msg__DiagLinkStruct(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DiagLinkStruct__ros_msg_type * ros_message = static_cast<const _DiagLinkStruct__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name parent
  {
    size_t item_size = sizeof(ros_message->parent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name child
  {
    size_t item_size = sizeof(ros_message->child);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DiagLinkStruct__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_adapi_v1_msgs__msg__DiagLinkStruct(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_adapi_v1_msgs
size_t max_serialized_size_autoware_adapi_v1_msgs__msg__DiagLinkStruct(
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

  // member: parent
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: child
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = autoware_adapi_v1_msgs__msg__DiagLinkStruct;
    is_plain =
      (
      offsetof(DataType, child) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DiagLinkStruct__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_autoware_adapi_v1_msgs__msg__DiagLinkStruct(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DiagLinkStruct = {
  "autoware_adapi_v1_msgs::msg",
  "DiagLinkStruct",
  _DiagLinkStruct__cdr_serialize,
  _DiagLinkStruct__cdr_deserialize,
  _DiagLinkStruct__get_serialized_size,
  _DiagLinkStruct__max_serialized_size
};

static rosidl_message_type_support_t _DiagLinkStruct__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DiagLinkStruct,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_adapi_v1_msgs, msg, DiagLinkStruct)() {
  return &_DiagLinkStruct__type_support;
}

#if defined(__cplusplus)
}
#endif
