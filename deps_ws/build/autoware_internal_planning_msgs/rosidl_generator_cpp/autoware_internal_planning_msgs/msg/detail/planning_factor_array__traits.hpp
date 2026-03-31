// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_internal_planning_msgs:msg/PlanningFactorArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__PLANNING_FACTOR_ARRAY__TRAITS_HPP_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__PLANNING_FACTOR_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_internal_planning_msgs/msg/detail/planning_factor_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'factors'
#include "autoware_internal_planning_msgs/msg/detail/planning_factor__traits.hpp"

namespace autoware_internal_planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanningFactorArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: factors
  {
    if (msg.factors.size() == 0) {
      out << "factors: []";
    } else {
      out << "factors: [";
      size_t pending_items = msg.factors.size();
      for (auto item : msg.factors) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanningFactorArray & msg,
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

  // member: factors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.factors.size() == 0) {
      out << "factors: []\n";
    } else {
      out << "factors:\n";
      for (auto item : msg.factors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanningFactorArray & msg, bool use_flow_style = false)
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
  const autoware_internal_planning_msgs::msg::PlanningFactorArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_internal_planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_internal_planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_internal_planning_msgs::msg::PlanningFactorArray & msg)
{
  return autoware_internal_planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_internal_planning_msgs::msg::PlanningFactorArray>()
{
  return "autoware_internal_planning_msgs::msg::PlanningFactorArray";
}

template<>
inline const char * name<autoware_internal_planning_msgs::msg::PlanningFactorArray>()
{
  return "autoware_internal_planning_msgs/msg/PlanningFactorArray";
}

template<>
struct has_fixed_size<autoware_internal_planning_msgs::msg::PlanningFactorArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_internal_planning_msgs::msg::PlanningFactorArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_internal_planning_msgs::msg::PlanningFactorArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__PLANNING_FACTOR_ARRAY__TRAITS_HPP_
