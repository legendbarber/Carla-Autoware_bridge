// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_internal_planning_msgs:msg/ControlPoint.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__CONTROL_POINT__TRAITS_HPP_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__CONTROL_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_internal_planning_msgs/msg/detail/control_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace autoware_internal_planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControlPoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: shift_length
  {
    out << "shift_length: ";
    rosidl_generator_traits::value_to_yaml(msg.shift_length, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: shift_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shift_length: ";
    rosidl_generator_traits::value_to_yaml(msg.shift_length, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlPoint & msg, bool use_flow_style = false)
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

}  // namespace autoware_internal_planning_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_internal_planning_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_internal_planning_msgs::msg::ControlPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_internal_planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_internal_planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_internal_planning_msgs::msg::ControlPoint & msg)
{
  return autoware_internal_planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_internal_planning_msgs::msg::ControlPoint>()
{
  return "autoware_internal_planning_msgs::msg::ControlPoint";
}

template<>
inline const char * name<autoware_internal_planning_msgs::msg::ControlPoint>()
{
  return "autoware_internal_planning_msgs/msg/ControlPoint";
}

template<>
struct has_fixed_size<autoware_internal_planning_msgs::msg::ControlPoint>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<autoware_internal_planning_msgs::msg::ControlPoint>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<autoware_internal_planning_msgs::msg::ControlPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__CONTROL_POINT__TRAITS_HPP_
