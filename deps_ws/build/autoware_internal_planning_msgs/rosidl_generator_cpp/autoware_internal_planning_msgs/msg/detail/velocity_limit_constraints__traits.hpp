// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_internal_planning_msgs:msg/VelocityLimitConstraints.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT_CONSTRAINTS__TRAITS_HPP_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT_CONSTRAINTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_internal_planning_msgs/msg/detail/velocity_limit_constraints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace autoware_internal_planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VelocityLimitConstraints & msg,
  std::ostream & out)
{
  out << "{";
  // member: max_acceleration
  {
    out << "max_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.max_acceleration, out);
    out << ", ";
  }

  // member: min_acceleration
  {
    out << "min_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.min_acceleration, out);
    out << ", ";
  }

  // member: max_jerk
  {
    out << "max_jerk: ";
    rosidl_generator_traits::value_to_yaml(msg.max_jerk, out);
    out << ", ";
  }

  // member: min_jerk
  {
    out << "min_jerk: ";
    rosidl_generator_traits::value_to_yaml(msg.min_jerk, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VelocityLimitConstraints & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: max_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.max_acceleration, out);
    out << "\n";
  }

  // member: min_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.min_acceleration, out);
    out << "\n";
  }

  // member: max_jerk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_jerk: ";
    rosidl_generator_traits::value_to_yaml(msg.max_jerk, out);
    out << "\n";
  }

  // member: min_jerk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_jerk: ";
    rosidl_generator_traits::value_to_yaml(msg.min_jerk, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VelocityLimitConstraints & msg, bool use_flow_style = false)
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
  const autoware_internal_planning_msgs::msg::VelocityLimitConstraints & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_internal_planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_internal_planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_internal_planning_msgs::msg::VelocityLimitConstraints & msg)
{
  return autoware_internal_planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_internal_planning_msgs::msg::VelocityLimitConstraints>()
{
  return "autoware_internal_planning_msgs::msg::VelocityLimitConstraints";
}

template<>
inline const char * name<autoware_internal_planning_msgs::msg::VelocityLimitConstraints>()
{
  return "autoware_internal_planning_msgs/msg/VelocityLimitConstraints";
}

template<>
struct has_fixed_size<autoware_internal_planning_msgs::msg::VelocityLimitConstraints>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autoware_internal_planning_msgs::msg::VelocityLimitConstraints>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autoware_internal_planning_msgs::msg::VelocityLimitConstraints>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT_CONSTRAINTS__TRAITS_HPP_
