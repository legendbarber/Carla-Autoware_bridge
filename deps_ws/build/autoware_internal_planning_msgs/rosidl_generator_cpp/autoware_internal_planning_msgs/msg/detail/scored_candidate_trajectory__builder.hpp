// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_internal_planning_msgs:msg/ScoredCandidateTrajectory.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SCORED_CANDIDATE_TRAJECTORY__BUILDER_HPP_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SCORED_CANDIDATE_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_internal_planning_msgs/msg/detail/scored_candidate_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_internal_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_ScoredCandidateTrajectory_score
{
public:
  explicit Init_ScoredCandidateTrajectory_score(::autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory & msg)
  : msg_(msg)
  {}
  ::autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory score(::autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory::_score_type arg)
  {
    msg_.score = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory msg_;
};

class Init_ScoredCandidateTrajectory_candidate_trajectory
{
public:
  Init_ScoredCandidateTrajectory_candidate_trajectory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScoredCandidateTrajectory_score candidate_trajectory(::autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory::_candidate_trajectory_type arg)
  {
    msg_.candidate_trajectory = std::move(arg);
    return Init_ScoredCandidateTrajectory_score(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory>()
{
  return autoware_internal_planning_msgs::msg::builder::Init_ScoredCandidateTrajectory_candidate_trajectory();
}

}  // namespace autoware_internal_planning_msgs

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SCORED_CANDIDATE_TRAJECTORY__BUILDER_HPP_
