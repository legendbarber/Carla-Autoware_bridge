// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_internal_planning_msgs:msg/CandidateTrajectories.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__CANDIDATE_TRAJECTORIES__BUILDER_HPP_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__CANDIDATE_TRAJECTORIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_internal_planning_msgs/msg/detail/candidate_trajectories__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_internal_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_CandidateTrajectories_generator_info
{
public:
  explicit Init_CandidateTrajectories_generator_info(::autoware_internal_planning_msgs::msg::CandidateTrajectories & msg)
  : msg_(msg)
  {}
  ::autoware_internal_planning_msgs::msg::CandidateTrajectories generator_info(::autoware_internal_planning_msgs::msg::CandidateTrajectories::_generator_info_type arg)
  {
    msg_.generator_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::CandidateTrajectories msg_;
};

class Init_CandidateTrajectories_candidate_trajectories
{
public:
  Init_CandidateTrajectories_candidate_trajectories()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CandidateTrajectories_generator_info candidate_trajectories(::autoware_internal_planning_msgs::msg::CandidateTrajectories::_candidate_trajectories_type arg)
  {
    msg_.candidate_trajectories = std::move(arg);
    return Init_CandidateTrajectories_generator_info(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::CandidateTrajectories msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_internal_planning_msgs::msg::CandidateTrajectories>()
{
  return autoware_internal_planning_msgs::msg::builder::Init_CandidateTrajectories_candidate_trajectories();
}

}  // namespace autoware_internal_planning_msgs

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__CANDIDATE_TRAJECTORIES__BUILDER_HPP_
