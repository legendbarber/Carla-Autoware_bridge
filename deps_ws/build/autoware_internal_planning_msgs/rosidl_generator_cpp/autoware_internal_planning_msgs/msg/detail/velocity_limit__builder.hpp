// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_internal_planning_msgs:msg/VelocityLimit.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT__BUILDER_HPP_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_internal_planning_msgs/msg/detail/velocity_limit__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_internal_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_VelocityLimit_sender
{
public:
  explicit Init_VelocityLimit_sender(::autoware_internal_planning_msgs::msg::VelocityLimit & msg)
  : msg_(msg)
  {}
  ::autoware_internal_planning_msgs::msg::VelocityLimit sender(::autoware_internal_planning_msgs::msg::VelocityLimit::_sender_type arg)
  {
    msg_.sender = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::VelocityLimit msg_;
};

class Init_VelocityLimit_constraints
{
public:
  explicit Init_VelocityLimit_constraints(::autoware_internal_planning_msgs::msg::VelocityLimit & msg)
  : msg_(msg)
  {}
  Init_VelocityLimit_sender constraints(::autoware_internal_planning_msgs::msg::VelocityLimit::_constraints_type arg)
  {
    msg_.constraints = std::move(arg);
    return Init_VelocityLimit_sender(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::VelocityLimit msg_;
};

class Init_VelocityLimit_use_constraints
{
public:
  explicit Init_VelocityLimit_use_constraints(::autoware_internal_planning_msgs::msg::VelocityLimit & msg)
  : msg_(msg)
  {}
  Init_VelocityLimit_constraints use_constraints(::autoware_internal_planning_msgs::msg::VelocityLimit::_use_constraints_type arg)
  {
    msg_.use_constraints = std::move(arg);
    return Init_VelocityLimit_constraints(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::VelocityLimit msg_;
};

class Init_VelocityLimit_max_velocity
{
public:
  explicit Init_VelocityLimit_max_velocity(::autoware_internal_planning_msgs::msg::VelocityLimit & msg)
  : msg_(msg)
  {}
  Init_VelocityLimit_use_constraints max_velocity(::autoware_internal_planning_msgs::msg::VelocityLimit::_max_velocity_type arg)
  {
    msg_.max_velocity = std::move(arg);
    return Init_VelocityLimit_use_constraints(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::VelocityLimit msg_;
};

class Init_VelocityLimit_stamp
{
public:
  Init_VelocityLimit_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VelocityLimit_max_velocity stamp(::autoware_internal_planning_msgs::msg::VelocityLimit::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_VelocityLimit_max_velocity(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::VelocityLimit msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_internal_planning_msgs::msg::VelocityLimit>()
{
  return autoware_internal_planning_msgs::msg::builder::Init_VelocityLimit_stamp();
}

}  // namespace autoware_internal_planning_msgs

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT__BUILDER_HPP_
