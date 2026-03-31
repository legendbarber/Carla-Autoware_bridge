// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_internal_planning_msgs:msg/ScoredCandidateTrajectory.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SCORED_CANDIDATE_TRAJECTORY__TRAITS_HPP_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SCORED_CANDIDATE_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_internal_planning_msgs/msg/detail/scored_candidate_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'candidate_trajectory'
#include "autoware_internal_planning_msgs/msg/detail/candidate_trajectory__traits.hpp"

namespace autoware_internal_planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ScoredCandidateTrajectory & msg,
  std::ostream & out)
{
  out << "{";
  // member: candidate_trajectory
  {
    out << "candidate_trajectory: ";
    to_flow_style_yaml(msg.candidate_trajectory, out);
    out << ", ";
  }

  // member: score
  {
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ScoredCandidateTrajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: candidate_trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "candidate_trajectory:\n";
    to_block_style_yaml(msg.candidate_trajectory, out, indentation + 2);
  }

  // member: score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ScoredCandidateTrajectory & msg, bool use_flow_style = false)
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
  const autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_internal_planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_internal_planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory & msg)
{
  return autoware_internal_planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory>()
{
  return "autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory";
}

template<>
inline const char * name<autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory>()
{
  return "autoware_internal_planning_msgs/msg/ScoredCandidateTrajectory";
}

template<>
struct has_fixed_size<autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory>
  : std::integral_constant<bool, has_fixed_size<autoware_internal_planning_msgs::msg::CandidateTrajectory>::value> {};

template<>
struct has_bounded_size<autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory>
  : std::integral_constant<bool, has_bounded_size<autoware_internal_planning_msgs::msg::CandidateTrajectory>::value> {};

template<>
struct is_message<autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SCORED_CANDIDATE_TRAJECTORY__TRAITS_HPP_
