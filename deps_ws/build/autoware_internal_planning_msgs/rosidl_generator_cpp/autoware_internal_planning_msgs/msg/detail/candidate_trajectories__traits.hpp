// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_internal_planning_msgs:msg/CandidateTrajectories.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__CANDIDATE_TRAJECTORIES__TRAITS_HPP_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__CANDIDATE_TRAJECTORIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_internal_planning_msgs/msg/detail/candidate_trajectories__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'candidate_trajectories'
#include "autoware_internal_planning_msgs/msg/detail/candidate_trajectory__traits.hpp"
// Member 'generator_info'
#include "autoware_internal_planning_msgs/msg/detail/generator_info__traits.hpp"

namespace autoware_internal_planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CandidateTrajectories & msg,
  std::ostream & out)
{
  out << "{";
  // member: candidate_trajectories
  {
    if (msg.candidate_trajectories.size() == 0) {
      out << "candidate_trajectories: []";
    } else {
      out << "candidate_trajectories: [";
      size_t pending_items = msg.candidate_trajectories.size();
      for (auto item : msg.candidate_trajectories) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: generator_info
  {
    if (msg.generator_info.size() == 0) {
      out << "generator_info: []";
    } else {
      out << "generator_info: [";
      size_t pending_items = msg.generator_info.size();
      for (auto item : msg.generator_info) {
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
  const CandidateTrajectories & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: candidate_trajectories
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.candidate_trajectories.size() == 0) {
      out << "candidate_trajectories: []\n";
    } else {
      out << "candidate_trajectories:\n";
      for (auto item : msg.candidate_trajectories) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: generator_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.generator_info.size() == 0) {
      out << "generator_info: []\n";
    } else {
      out << "generator_info:\n";
      for (auto item : msg.generator_info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CandidateTrajectories & msg, bool use_flow_style = false)
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
  const autoware_internal_planning_msgs::msg::CandidateTrajectories & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_internal_planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_internal_planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_internal_planning_msgs::msg::CandidateTrajectories & msg)
{
  return autoware_internal_planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_internal_planning_msgs::msg::CandidateTrajectories>()
{
  return "autoware_internal_planning_msgs::msg::CandidateTrajectories";
}

template<>
inline const char * name<autoware_internal_planning_msgs::msg::CandidateTrajectories>()
{
  return "autoware_internal_planning_msgs/msg/CandidateTrajectories";
}

template<>
struct has_fixed_size<autoware_internal_planning_msgs::msg::CandidateTrajectories>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_internal_planning_msgs::msg::CandidateTrajectories>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_internal_planning_msgs::msg::CandidateTrajectories>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__CANDIDATE_TRAJECTORIES__TRAITS_HPP_
