// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_internal_planning_msgs:msg/ScoredCandidateTrajectories.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SCORED_CANDIDATE_TRAJECTORIES__BUILDER_HPP_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SCORED_CANDIDATE_TRAJECTORIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_internal_planning_msgs/msg/detail/scored_candidate_trajectories__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_internal_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_ScoredCandidateTrajectories_generator_info
{
public:
  explicit Init_ScoredCandidateTrajectories_generator_info(::autoware_internal_planning_msgs::msg::ScoredCandidateTrajectories & msg)
  : msg_(msg)
  {}
  ::autoware_internal_planning_msgs::msg::ScoredCandidateTrajectories generator_info(::autoware_internal_planning_msgs::msg::ScoredCandidateTrajectories::_generator_info_type arg)
  {
    msg_.generator_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::ScoredCandidateTrajectories msg_;
};

class Init_ScoredCandidateTrajectories_scored_candidate_trajectories
{
public:
  Init_ScoredCandidateTrajectories_scored_candidate_trajectories()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScoredCandidateTrajectories_generator_info scored_candidate_trajectories(::autoware_internal_planning_msgs::msg::ScoredCandidateTrajectories::_scored_candidate_trajectories_type arg)
  {
    msg_.scored_candidate_trajectories = std::move(arg);
    return Init_ScoredCandidateTrajectories_generator_info(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::ScoredCandidateTrajectories msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_internal_planning_msgs::msg::ScoredCandidateTrajectories>()
{
  return autoware_internal_planning_msgs::msg::builder::Init_ScoredCandidateTrajectories_scored_candidate_trajectories();
}

}  // namespace autoware_internal_planning_msgs

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SCORED_CANDIDATE_TRAJECTORIES__BUILDER_HPP_
