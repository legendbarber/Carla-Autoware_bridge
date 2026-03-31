// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_internal_planning_msgs:msg/CandidateTrajectory.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__CANDIDATE_TRAJECTORY__BUILDER_HPP_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__CANDIDATE_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_internal_planning_msgs/msg/detail/candidate_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_internal_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_CandidateTrajectory_points
{
public:
  explicit Init_CandidateTrajectory_points(::autoware_internal_planning_msgs::msg::CandidateTrajectory & msg)
  : msg_(msg)
  {}
  ::autoware_internal_planning_msgs::msg::CandidateTrajectory points(::autoware_internal_planning_msgs::msg::CandidateTrajectory::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::CandidateTrajectory msg_;
};

class Init_CandidateTrajectory_generator_id
{
public:
  explicit Init_CandidateTrajectory_generator_id(::autoware_internal_planning_msgs::msg::CandidateTrajectory & msg)
  : msg_(msg)
  {}
  Init_CandidateTrajectory_points generator_id(::autoware_internal_planning_msgs::msg::CandidateTrajectory::_generator_id_type arg)
  {
    msg_.generator_id = std::move(arg);
    return Init_CandidateTrajectory_points(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::CandidateTrajectory msg_;
};

class Init_CandidateTrajectory_header
{
public:
  Init_CandidateTrajectory_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CandidateTrajectory_generator_id header(::autoware_internal_planning_msgs::msg::CandidateTrajectory::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CandidateTrajectory_generator_id(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::CandidateTrajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_internal_planning_msgs::msg::CandidateTrajectory>()
{
  return autoware_internal_planning_msgs::msg::builder::Init_CandidateTrajectory_header();
}

}  // namespace autoware_internal_planning_msgs

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__CANDIDATE_TRAJECTORY__BUILDER_HPP_
