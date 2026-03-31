// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_internal_planning_msgs:msg/VelocityLimitClearCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT_CLEAR_COMMAND__BUILDER_HPP_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT_CLEAR_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_internal_planning_msgs/msg/detail/velocity_limit_clear_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_internal_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_VelocityLimitClearCommand_sender
{
public:
  explicit Init_VelocityLimitClearCommand_sender(::autoware_internal_planning_msgs::msg::VelocityLimitClearCommand & msg)
  : msg_(msg)
  {}
  ::autoware_internal_planning_msgs::msg::VelocityLimitClearCommand sender(::autoware_internal_planning_msgs::msg::VelocityLimitClearCommand::_sender_type arg)
  {
    msg_.sender = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::VelocityLimitClearCommand msg_;
};

class Init_VelocityLimitClearCommand_command
{
public:
  explicit Init_VelocityLimitClearCommand_command(::autoware_internal_planning_msgs::msg::VelocityLimitClearCommand & msg)
  : msg_(msg)
  {}
  Init_VelocityLimitClearCommand_sender command(::autoware_internal_planning_msgs::msg::VelocityLimitClearCommand::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_VelocityLimitClearCommand_sender(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::VelocityLimitClearCommand msg_;
};

class Init_VelocityLimitClearCommand_stamp
{
public:
  Init_VelocityLimitClearCommand_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VelocityLimitClearCommand_command stamp(::autoware_internal_planning_msgs::msg::VelocityLimitClearCommand::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_VelocityLimitClearCommand_command(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::VelocityLimitClearCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_internal_planning_msgs::msg::VelocityLimitClearCommand>()
{
  return autoware_internal_planning_msgs::msg::builder::Init_VelocityLimitClearCommand_stamp();
}

}  // namespace autoware_internal_planning_msgs

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT_CLEAR_COMMAND__BUILDER_HPP_
