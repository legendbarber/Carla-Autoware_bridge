// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from autoware_internal_planning_msgs:msg/PlanningFactor.idl
// generated code does not contain a copyright notice
#include "autoware_internal_planning_msgs/msg/detail/planning_factor__rosidl_typesupport_fastrtps_cpp.hpp"
#include "autoware_internal_planning_msgs/msg/detail/planning_factor__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace autoware_internal_planning_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const autoware_internal_planning_msgs::msg::ControlPoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  autoware_internal_planning_msgs::msg::ControlPoint &);
size_t get_serialized_size(
  const autoware_internal_planning_msgs::msg::ControlPoint &,
  size_t current_alignment);
size_t
max_serialized_size_ControlPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace autoware_internal_planning_msgs

namespace autoware_internal_planning_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const autoware_internal_planning_msgs::msg::SafetyFactorArray &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  autoware_internal_planning_msgs::msg::SafetyFactorArray &);
size_t get_serialized_size(
  const autoware_internal_planning_msgs::msg::SafetyFactorArray &,
  size_t current_alignment);
size_t
max_serialized_size_SafetyFactorArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace autoware_internal_planning_msgs


namespace autoware_internal_planning_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_internal_planning_msgs
cdr_serialize(
  const autoware_internal_planning_msgs::msg::PlanningFactor & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: module
  cdr << ros_message.module;
  // Member: is_driving_forward
  cdr << (ros_message.is_driving_forward ? true : false);
  // Member: control_points
  {
    size_t size = ros_message.control_points.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      autoware_internal_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.control_points[i],
        cdr);
    }
  }
  // Member: behavior
  cdr << ros_message.behavior;
  // Member: detail
  cdr << ros_message.detail;
  // Member: safety_factors
  autoware_internal_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.safety_factors,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_internal_planning_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autoware_internal_planning_msgs::msg::PlanningFactor & ros_message)
{
  // Member: module
  cdr >> ros_message.module;

  // Member: is_driving_forward
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_driving_forward = tmp ? true : false;
  }

  // Member: control_points
  {
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

    ros_message.control_points.resize(size);
    for (size_t i = 0; i < size; i++) {
      autoware_internal_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.control_points[i]);
    }
  }

  // Member: behavior
  cdr >> ros_message.behavior;

  // Member: detail
  cdr >> ros_message.detail;

  // Member: safety_factors
  autoware_internal_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.safety_factors);

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_internal_planning_msgs
get_serialized_size(
  const autoware_internal_planning_msgs::msg::PlanningFactor & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: module
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.module.size() + 1);
  // Member: is_driving_forward
  {
    size_t item_size = sizeof(ros_message.is_driving_forward);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: control_points
  {
    size_t array_size = ros_message.control_points.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        autoware_internal_planning_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.control_points[index], current_alignment);
    }
  }
  // Member: behavior
  {
    size_t item_size = sizeof(ros_message.behavior);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: detail
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.detail.size() + 1);
  // Member: safety_factors

  current_alignment +=
    autoware_internal_planning_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.safety_factors, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_internal_planning_msgs
max_serialized_size_PlanningFactor(
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


  // Member: module
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: is_driving_forward
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: control_points
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
      size_t inner_size =
        autoware_internal_planning_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ControlPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: behavior
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: detail
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: safety_factors
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        autoware_internal_planning_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SafetyFactorArray(
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
    using DataType = autoware_internal_planning_msgs::msg::PlanningFactor;
    is_plain =
      (
      offsetof(DataType, safety_factors) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _PlanningFactor__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const autoware_internal_planning_msgs::msg::PlanningFactor *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PlanningFactor__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<autoware_internal_planning_msgs::msg::PlanningFactor *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PlanningFactor__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const autoware_internal_planning_msgs::msg::PlanningFactor *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PlanningFactor__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PlanningFactor(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PlanningFactor__callbacks = {
  "autoware_internal_planning_msgs::msg",
  "PlanningFactor",
  _PlanningFactor__cdr_serialize,
  _PlanningFactor__cdr_deserialize,
  _PlanningFactor__get_serialized_size,
  _PlanningFactor__max_serialized_size
};

static rosidl_message_type_support_t _PlanningFactor__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PlanningFactor__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace autoware_internal_planning_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_autoware_internal_planning_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_internal_planning_msgs::msg::PlanningFactor>()
{
  return &autoware_internal_planning_msgs::msg::typesupport_fastrtps_cpp::_PlanningFactor__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_internal_planning_msgs, msg, PlanningFactor)() {
  return &autoware_internal_planning_msgs::msg::typesupport_fastrtps_cpp::_PlanningFactor__handle;
}

#ifdef __cplusplus
}
#endif
