// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_internal_planning_msgs:msg/PlanningFactor.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__PLANNING_FACTOR__BUILDER_HPP_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__PLANNING_FACTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_internal_planning_msgs/msg/detail/planning_factor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_internal_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanningFactor_safety_factors
{
public:
  explicit Init_PlanningFactor_safety_factors(::autoware_internal_planning_msgs::msg::PlanningFactor & msg)
  : msg_(msg)
  {}
  ::autoware_internal_planning_msgs::msg::PlanningFactor safety_factors(::autoware_internal_planning_msgs::msg::PlanningFactor::_safety_factors_type arg)
  {
    msg_.safety_factors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::PlanningFactor msg_;
};

class Init_PlanningFactor_detail
{
public:
  explicit Init_PlanningFactor_detail(::autoware_internal_planning_msgs::msg::PlanningFactor & msg)
  : msg_(msg)
  {}
  Init_PlanningFactor_safety_factors detail(::autoware_internal_planning_msgs::msg::PlanningFactor::_detail_type arg)
  {
    msg_.detail = std::move(arg);
    return Init_PlanningFactor_safety_factors(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::PlanningFactor msg_;
};

class Init_PlanningFactor_behavior
{
public:
  explicit Init_PlanningFactor_behavior(::autoware_internal_planning_msgs::msg::PlanningFactor & msg)
  : msg_(msg)
  {}
  Init_PlanningFactor_detail behavior(::autoware_internal_planning_msgs::msg::PlanningFactor::_behavior_type arg)
  {
    msg_.behavior = std::move(arg);
    return Init_PlanningFactor_detail(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::PlanningFactor msg_;
};

class Init_PlanningFactor_control_points
{
public:
  explicit Init_PlanningFactor_control_points(::autoware_internal_planning_msgs::msg::PlanningFactor & msg)
  : msg_(msg)
  {}
  Init_PlanningFactor_behavior control_points(::autoware_internal_planning_msgs::msg::PlanningFactor::_control_points_type arg)
  {
    msg_.control_points = std::move(arg);
    return Init_PlanningFactor_behavior(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::PlanningFactor msg_;
};

class Init_PlanningFactor_is_driving_forward
{
public:
  explicit Init_PlanningFactor_is_driving_forward(::autoware_internal_planning_msgs::msg::PlanningFactor & msg)
  : msg_(msg)
  {}
  Init_PlanningFactor_control_points is_driving_forward(::autoware_internal_planning_msgs::msg::PlanningFactor::_is_driving_forward_type arg)
  {
    msg_.is_driving_forward = std::move(arg);
    return Init_PlanningFactor_control_points(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::PlanningFactor msg_;
};

class Init_PlanningFactor_module
{
public:
  Init_PlanningFactor_module()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanningFactor_is_driving_forward module(::autoware_internal_planning_msgs::msg::PlanningFactor::_module_type arg)
  {
    msg_.module = std::move(arg);
    return Init_PlanningFactor_is_driving_forward(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::PlanningFactor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_internal_planning_msgs::msg::PlanningFactor>()
{
  return autoware_internal_planning_msgs::msg::builder::Init_PlanningFactor_module();
}

}  // namespace autoware_internal_planning_msgs

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__PLANNING_FACTOR__BUILDER_HPP_
