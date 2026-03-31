// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_internal_msgs:msg/PublishedTime.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__PUBLISHED_TIME__TRAITS_HPP_
#define AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__PUBLISHED_TIME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_internal_msgs/msg/detail/published_time__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'published_stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace autoware_internal_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PublishedTime & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: published_stamp
  {
    out << "published_stamp: ";
    to_flow_style_yaml(msg.published_stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PublishedTime & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: published_stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "published_stamp:\n";
    to_block_style_yaml(msg.published_stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PublishedTime & msg, bool use_flow_style = false)
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
  const autoware_internal_msgs::msg::PublishedTime & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_internal_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_internal_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_internal_msgs::msg::PublishedTime & msg)
{
  return autoware_internal_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_internal_msgs::msg::PublishedTime>()
{
  return "autoware_internal_msgs::msg::PublishedTime";
}

template<>
inline const char * name<autoware_internal_msgs::msg::PublishedTime>()
{
  return "autoware_internal_msgs/msg/PublishedTime";
}

template<>
struct has_fixed_size<autoware_internal_msgs::msg::PublishedTime>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<autoware_internal_msgs::msg::PublishedTime>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<autoware_internal_msgs::msg::PublishedTime>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__PUBLISHED_TIME__TRAITS_HPP_
