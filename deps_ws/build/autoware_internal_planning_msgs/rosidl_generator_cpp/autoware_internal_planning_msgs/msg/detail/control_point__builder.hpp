// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_internal_planning_msgs:msg/ControlPoint.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__CONTROL_POINT__BUILDER_HPP_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__CONTROL_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_internal_planning_msgs/msg/detail/control_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_internal_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_ControlPoint_distance
{
public:
  explicit Init_ControlPoint_distance(::autoware_internal_planning_msgs::msg::ControlPoint & msg)
  : msg_(msg)
  {}
  ::autoware_internal_planning_msgs::msg::ControlPoint distance(::autoware_internal_planning_msgs::msg::ControlPoint::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::ControlPoint msg_;
};

class Init_ControlPoint_shift_length
{
public:
  explicit Init_ControlPoint_shift_length(::autoware_internal_planning_msgs::msg::ControlPoint & msg)
  : msg_(msg)
  {}
  Init_ControlPoint_distance shift_length(::autoware_internal_planning_msgs::msg::ControlPoint::_shift_length_type arg)
  {
    msg_.shift_length = std::move(arg);
    return Init_ControlPoint_distance(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::ControlPoint msg_;
};

class Init_ControlPoint_velocity
{
public:
  explicit Init_ControlPoint_velocity(::autoware_internal_planning_msgs::msg::ControlPoint & msg)
  : msg_(msg)
  {}
  Init_ControlPoint_shift_length velocity(::autoware_internal_planning_msgs::msg::ControlPoint::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_ControlPoint_shift_length(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::ControlPoint msg_;
};

class Init_ControlPoint_pose
{
public:
  Init_ControlPoint_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlPoint_velocity pose(::autoware_internal_planning_msgs::msg::ControlPoint::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_ControlPoint_velocity(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::ControlPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_internal_planning_msgs::msg::ControlPoint>()
{
  return autoware_internal_planning_msgs::msg::builder::Init_ControlPoint_pose();
}

}  // namespace autoware_internal_planning_msgs

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__CONTROL_POINT__BUILDER_HPP_
