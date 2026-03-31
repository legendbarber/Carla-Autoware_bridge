// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_internal_msgs:msg/MissionRemainingDistanceTime.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__MISSION_REMAINING_DISTANCE_TIME__TRAITS_HPP_
#define AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__MISSION_REMAINING_DISTANCE_TIME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_internal_msgs/msg/detail/mission_remaining_distance_time__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace autoware_internal_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MissionRemainingDistanceTime & msg,
  std::ostream & out)
{
  out << "{";
  // member: remaining_distance
  {
    out << "remaining_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_distance, out);
    out << ", ";
  }

  // member: remaining_time
  {
    out << "remaining_time: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MissionRemainingDistanceTime & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: remaining_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_distance, out);
    out << "\n";
  }

  // member: remaining_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining_time: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionRemainingDistanceTime & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace autoware_internal_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_internal_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_internal_msgs::msg::MissionRemainingDistanceTime & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_internal_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_internal_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_internal_msgs::msg::MissionRemainingDistanceTime & msg)
{
  return autoware_internal_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_internal_msgs::msg::MissionRemainingDistanceTime>()
{
  return "autoware_internal_msgs::msg::MissionRemainingDistanceTime";
}

template<>
inline const char * name<autoware_internal_msgs::msg::MissionRemainingDistanceTime>()
{
  return "autoware_internal_msgs/msg/MissionRemainingDistanceTime";
}

template<>
struct has_fixed_size<autoware_internal_msgs::msg::MissionRemainingDistanceTime>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autoware_internal_msgs::msg::MissionRemainingDistanceTime>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autoware_internal_msgs::msg::MissionRemainingDistanceTime>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__MISSION_REMAINING_DISTANCE_TIME__TRAITS_HPP_
