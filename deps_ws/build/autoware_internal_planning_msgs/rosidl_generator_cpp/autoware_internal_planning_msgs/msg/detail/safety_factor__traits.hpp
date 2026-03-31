// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_internal_planning_msgs:msg/SafetyFactor.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SAFETY_FACTOR__TRAITS_HPP_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SAFETY_FACTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_internal_planning_msgs/msg/detail/safety_factor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'object_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'predicted_path'
#include "autoware_perception_msgs/msg/detail/predicted_path__traits.hpp"
// Member 'points'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace autoware_internal_planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SafetyFactor & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: object_id
  {
    out << "object_id: ";
    to_flow_style_yaml(msg.object_id, out);
    out << ", ";
  }

  // member: predicted_path
  {
    out << "predicted_path: ";
    to_flow_style_yaml(msg.predicted_path, out);
    out << ", ";
  }

  // member: ttc_begin
  {
    out << "ttc_begin: ";
    rosidl_generator_traits::value_to_yaml(msg.ttc_begin, out);
    out << ", ";
  }

  // member: ttc_end
  {
    out << "ttc_end: ";
    rosidl_generator_traits::value_to_yaml(msg.ttc_end, out);
    out << ", ";
  }

  // member: points
  {
    if (msg.points.size() == 0) {
      out << "points: []";
    } else {
      out << "points: [";
      size_t pending_items = msg.points.size();
      for (auto item : msg.points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: is_safe
  {
    out << "is_safe: ";
    rosidl_generator_traits::value_to_yaml(msg.is_safe, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SafetyFactor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: object_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_id:\n";
    to_block_style_yaml(msg.object_id, out, indentation + 2);
  }

  // member: predicted_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "predicted_path:\n";
    to_block_style_yaml(msg.predicted_path, out, indentation + 2);
  }

  // member: ttc_begin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ttc_begin: ";
    rosidl_generator_traits::value_to_yaml(msg.ttc_begin, out);
    out << "\n";
  }

  // member: ttc_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ttc_end: ";
    rosidl_generator_traits::value_to_yaml(msg.ttc_end, out);
    out << "\n";
  }

  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points.size() == 0) {
      out << "points: []\n";
    } else {
      out << "points:\n";
      for (auto item : msg.points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: is_safe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_safe: ";
    rosidl_generator_traits::value_to_yaml(msg.is_safe, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SafetyFactor & msg, bool use_flow_style = false)
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
  const autoware_internal_planning_msgs::msg::SafetyFactor & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_internal_planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_internal_planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_internal_planning_msgs::msg::SafetyFactor & msg)
{
  return autoware_internal_planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_internal_planning_msgs::msg::SafetyFactor>()
{
  return "autoware_internal_planning_msgs::msg::SafetyFactor";
}

template<>
inline const char * name<autoware_internal_planning_msgs::msg::SafetyFactor>()
{
  return "autoware_internal_planning_msgs/msg/SafetyFactor";
}

template<>
struct has_fixed_size<autoware_internal_planning_msgs::msg::SafetyFactor>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_internal_planning_msgs::msg::SafetyFactor>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_internal_planning_msgs::msg::SafetyFactor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SAFETY_FACTOR__TRAITS_HPP_
