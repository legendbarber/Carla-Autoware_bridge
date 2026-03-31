// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_internal_planning_msgs:msg/GeneratorInfo.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__GENERATOR_INFO__TRAITS_HPP_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__GENERATOR_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_internal_planning_msgs/msg/detail/generator_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'generator_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'generator_name'
#include "std_msgs/msg/detail/string__traits.hpp"

namespace autoware_internal_planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GeneratorInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: generator_id
  {
    out << "generator_id: ";
    to_flow_style_yaml(msg.generator_id, out);
    out << ", ";
  }

  // member: generator_name
  {
    out << "generator_name: ";
    to_flow_style_yaml(msg.generator_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GeneratorInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: generator_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "generator_id:\n";
    to_block_style_yaml(msg.generator_id, out, indentation + 2);
  }

  // member: generator_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "generator_name:\n";
    to_block_style_yaml(msg.generator_name, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GeneratorInfo & msg, bool use_flow_style = false)
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
  const autoware_internal_planning_msgs::msg::GeneratorInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_internal_planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_internal_planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_internal_planning_msgs::msg::GeneratorInfo & msg)
{
  return autoware_internal_planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_internal_planning_msgs::msg::GeneratorInfo>()
{
  return "autoware_internal_planning_msgs::msg::GeneratorInfo";
}

template<>
inline const char * name<autoware_internal_planning_msgs::msg::GeneratorInfo>()
{
  return "autoware_internal_planning_msgs/msg/GeneratorInfo";
}

template<>
struct has_fixed_size<autoware_internal_planning_msgs::msg::GeneratorInfo>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::String>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<autoware_internal_planning_msgs::msg::GeneratorInfo>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::String>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<autoware_internal_planning_msgs::msg::GeneratorInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__GENERATOR_INFO__TRAITS_HPP_
