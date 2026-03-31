// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_internal_planning_msgs:msg/ScoredCandidateTrajectory.idl
// generated code does not contain a copyright notice
#include "autoware_internal_planning_msgs/msg/detail/scored_candidate_trajectory__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_internal_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_internal_planning_msgs/msg/detail/scored_candidate_trajectory__struct.h"
#include "autoware_internal_planning_msgs/msg/detail/scored_candidate_trajectory__functions.h"
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

#include "autoware_internal_planning_msgs/msg/detail/candidate_trajectory__functions.h"  // candidate_trajectory

// forward declare type support functions
size_t get_serialized_size_autoware_internal_planning_msgs__msg__CandidateTrajectory(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autoware_internal_planning_msgs__msg__CandidateTrajectory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_internal_planning_msgs, msg, CandidateTrajectory)();


using _ScoredCandidateTrajectory__ros_msg_type = autoware_internal_planning_msgs__msg__ScoredCandidateTrajectory;

static bool _ScoredCandidateTrajectory__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ScoredCandidateTrajectory__ros_msg_type * ros_message = static_cast<const _ScoredCandidateTrajectory__ros_msg_type *>(untyped_ros_message);
  // Field name: candidate_trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_internal_planning_msgs, msg, CandidateTrajectory
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->candidate_trajectory, cdr))
    {
      return false;
    }
  }

  // Field name: score
  {
    cdr << ros_message->score;
  }

  return true;
}

static bool _ScoredCandidateTrajectory__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ScoredCandidateTrajectory__ros_msg_type * ros_message = static_cast<_ScoredCandidateTrajectory__ros_msg_type *>(untyped_ros_message);
  // Field name: candidate_trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_internal_planning_msgs, msg, CandidateTrajectory
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->candidate_trajectory))
    {
      return false;
    }
  }

  // Field name: score
  {
    cdr >> ros_message->score;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_internal_planning_msgs
size_t get_serialized_size_autoware_internal_planning_msgs__msg__ScoredCandidateTrajectory(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ScoredCandidateTrajectory__ros_msg_type * ros_message = static_cast<const _ScoredCandidateTrajectory__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name candidate_trajectory

  current_alignment += get_serialized_size_autoware_internal_planning_msgs__msg__CandidateTrajectory(
    &(ros_message->candidate_trajectory), current_alignment);
  // field.name score
  {
    size_t item_size = sizeof(ros_message->score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ScoredCandidateTrajectory__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_internal_planning_msgs__msg__ScoredCandidateTrajectory(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_internal_planning_msgs
size_t max_serialized_size_autoware_internal_planning_msgs__msg__ScoredCandidateTrajectory(
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

  // member: candidate_trajectory
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_autoware_internal_planning_msgs__msg__CandidateTrajectory(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: score
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
    using DataType = autoware_internal_planning_msgs__msg__ScoredCandidateTrajectory;
    is_plain =
      (
      offsetof(DataType, score) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ScoredCandidateTrajectory__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_autoware_internal_planning_msgs__msg__ScoredCandidateTrajectory(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ScoredCandidateTrajectory = {
  "autoware_internal_planning_msgs::msg",
  "ScoredCandidateTrajectory",
  _ScoredCandidateTrajectory__cdr_serialize,
  _ScoredCandidateTrajectory__cdr_deserialize,
  _ScoredCandidateTrajectory__get_serialized_size,
  _ScoredCandidateTrajectory__max_serialized_size
};

static rosidl_message_type_support_t _ScoredCandidateTrajectory__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ScoredCandidateTrajectory,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_internal_planning_msgs, msg, ScoredCandidateTrajectory)() {
  return &_ScoredCandidateTrajectory__type_support;
}

#if defined(__cplusplus)
}
#endif
