// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_internal_planning_msgs:msg/VelocityLimitConstraints.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT_CONSTRAINTS__BUILDER_HPP_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT_CONSTRAINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_internal_planning_msgs/msg/detail/velocity_limit_constraints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_internal_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_VelocityLimitConstraints_min_jerk
{
public:
  explicit Init_VelocityLimitConstraints_min_jerk(::autoware_internal_planning_msgs::msg::VelocityLimitConstraints & msg)
  : msg_(msg)
  {}
  ::autoware_internal_planning_msgs::msg::VelocityLimitConstraints min_jerk(::autoware_internal_planning_msgs::msg::VelocityLimitConstraints::_min_jerk_type arg)
  {
    msg_.min_jerk = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::VelocityLimitConstraints msg_;
};

class Init_VelocityLimitConstraints_max_jerk
{
public:
  explicit Init_VelocityLimitConstraints_max_jerk(::autoware_internal_planning_msgs::msg::VelocityLimitConstraints & msg)
  : msg_(msg)
  {}
  Init_VelocityLimitConstraints_min_jerk max_jerk(::autoware_internal_planning_msgs::msg::VelocityLimitConstraints::_max_jerk_type arg)
  {
    msg_.max_jerk = std::move(arg);
    return Init_VelocityLimitConstraints_min_jerk(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::VelocityLimitConstraints msg_;
};

class Init_VelocityLimitConstraints_min_acceleration
{
public:
  explicit Init_VelocityLimitConstraints_min_acceleration(::autoware_internal_planning_msgs::msg::VelocityLimitConstraints & msg)
  : msg_(msg)
  {}
  Init_VelocityLimitConstraints_max_jerk min_acceleration(::autoware_internal_planning_msgs::msg::VelocityLimitConstraints::_min_acceleration_type arg)
  {
    msg_.min_acceleration = std::move(arg);
    return Init_VelocityLimitConstraints_max_jerk(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::VelocityLimitConstraints msg_;
};

class Init_VelocityLimitConstraints_max_acceleration
{
public:
  Init_VelocityLimitConstraints_max_acceleration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VelocityLimitConstraints_min_acceleration max_acceleration(::autoware_internal_planning_msgs::msg::VelocityLimitConstraints::_max_acceleration_type arg)
  {
    msg_.max_acceleration = std::move(arg);
    return Init_VelocityLimitConstraints_min_acceleration(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::VelocityLimitConstraints msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_internal_planning_msgs::msg::VelocityLimitConstraints>()
{
  return autoware_internal_planning_msgs::msg::builder::Init_VelocityLimitConstraints_max_acceleration();
}

}  // namespace autoware_internal_planning_msgs

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT_CONSTRAINTS__BUILDER_HPP_
