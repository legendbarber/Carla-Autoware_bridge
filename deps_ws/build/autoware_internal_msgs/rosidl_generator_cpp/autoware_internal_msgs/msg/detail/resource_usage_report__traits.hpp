// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_internal_msgs:msg/ResourceUsageReport.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__RESOURCE_USAGE_REPORT__TRAITS_HPP_
#define AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__RESOURCE_USAGE_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_internal_msgs/msg/detail/resource_usage_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace autoware_internal_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ResourceUsageReport & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pid
  {
    out << "pid: ";
    rosidl_generator_traits::value_to_yaml(msg.pid, out);
    out << ", ";
  }

  // member: cpu_cores_utilized
  {
    out << "cpu_cores_utilized: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_cores_utilized, out);
    out << ", ";
  }

  // member: total_memory_bytes
  {
    out << "total_memory_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.total_memory_bytes, out);
    out << ", ";
  }

  // member: free_memory_bytes
  {
    out << "free_memory_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.free_memory_bytes, out);
    out << ", ";
  }

  // member: process_memory_bytes
  {
    out << "process_memory_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.process_memory_bytes, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResourceUsageReport & msg,
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

  // member: pid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pid: ";
    rosidl_generator_traits::value_to_yaml(msg.pid, out);
    out << "\n";
  }

  // member: cpu_cores_utilized
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cpu_cores_utilized: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_cores_utilized, out);
    out << "\n";
  }

  // member: total_memory_bytes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_memory_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.total_memory_bytes, out);
    out << "\n";
  }

  // member: free_memory_bytes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "free_memory_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.free_memory_bytes, out);
    out << "\n";
  }

  // member: process_memory_bytes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "process_memory_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.process_memory_bytes, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResourceUsageReport & msg, bool use_flow_style = false)
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
  const autoware_internal_msgs::msg::ResourceUsageReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_internal_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_internal_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_internal_msgs::msg::ResourceUsageReport & msg)
{
  return autoware_internal_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_internal_msgs::msg::ResourceUsageReport>()
{
  return "autoware_internal_msgs::msg::ResourceUsageReport";
}

template<>
inline const char * name<autoware_internal_msgs::msg::ResourceUsageReport>()
{
  return "autoware_internal_msgs/msg/ResourceUsageReport";
}

template<>
struct has_fixed_size<autoware_internal_msgs::msg::ResourceUsageReport>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<autoware_internal_msgs::msg::ResourceUsageReport>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<autoware_internal_msgs::msg::ResourceUsageReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__RESOURCE_USAGE_REPORT__TRAITS_HPP_
