// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_internal_planning_msgs:msg/PlanningFactor.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__PLANNING_FACTOR__TRAITS_HPP_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__PLANNING_FACTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_internal_planning_msgs/msg/detail/planning_factor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'control_points'
#include "autoware_internal_planning_msgs/msg/detail/control_point__traits.hpp"
// Member 'safety_factors'
#include "autoware_internal_planning_msgs/msg/detail/safety_factor_array__traits.hpp"

namespace autoware_internal_planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanningFactor & msg,
  std::ostream & out)
{
  out << "{";
  // member: module
  {
    out << "module: ";
    rosidl_generator_traits::value_to_yaml(msg.module, out);
    out << ", ";
  }

  // member: is_driving_forward
  {
    out << "is_driving_forward: ";
    rosidl_generator_traits::value_to_yaml(msg.is_driving_forward, out);
    out << ", ";
  }

  // member: control_points
  {
    if (msg.control_points.size() == 0) {
      out << "control_points: []";
    } else {
      out << "control_points: [";
      size_t pending_items = msg.control_points.size();
      for (auto item : msg.control_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: behavior
  {
    out << "behavior: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior, out);
    out << ", ";
  }

  // member: detail
  {
    out << "detail: ";
    rosidl_generator_traits::value_to_yaml(msg.detail, out);
    out << ", ";
  }

  // member: safety_factors
  {
    out << "safety_factors: ";
    to_flow_style_yaml(msg.safety_factors, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanningFactor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: module
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "module: ";
    rosidl_generator_traits::value_to_yaml(msg.module, out);
    out << "\n";
  }

  // member: is_driving_forward
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_driving_forward: ";
    rosidl_generator_traits::value_to_yaml(msg.is_driving_forward, out);
    out << "\n";
  }

  // member: control_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.control_points.size() == 0) {
      out << "control_points: []\n";
    } else {
      out << "control_points:\n";
      for (auto item : msg.control_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: behavior
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "behavior: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior, out);
    out << "\n";
  }

  // member: detail
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detail: ";
    rosidl_generator_traits::value_to_yaml(msg.detail, out);
    out << "\n";
  }

  // member: safety_factors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_factors:\n";
    to_block_style_yaml(msg.safety_factors, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanningFactor & msg, bool use_flow_style = false)
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
  const autoware_internal_planning_msgs::msg::PlanningFactor & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_internal_planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_internal_planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_internal_planning_msgs::msg::PlanningFactor & msg)
{
  return autoware_internal_planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_internal_planning_msgs::msg::PlanningFactor>()
{
  return "autoware_internal_planning_msgs::msg::PlanningFactor";
}

template<>
inline const char * name<autoware_internal_planning_msgs::msg::PlanningFactor>()
{
  return "autoware_internal_planning_msgs/msg/PlanningFactor";
}

template<>
struct has_fixed_size<autoware_internal_planning_msgs::msg::PlanningFactor>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_internal_planning_msgs::msg::PlanningFactor>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_internal_planning_msgs::msg::PlanningFactor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__PLANNING_FACTOR__TRAITS_HPP_
