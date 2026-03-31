// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_internal_planning_msgs:msg/PlanningFactorArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__PLANNING_FACTOR_ARRAY__BUILDER_HPP_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__PLANNING_FACTOR_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_internal_planning_msgs/msg/detail/planning_factor_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_internal_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanningFactorArray_factors
{
public:
  explicit Init_PlanningFactorArray_factors(::autoware_internal_planning_msgs::msg::PlanningFactorArray & msg)
  : msg_(msg)
  {}
  ::autoware_internal_planning_msgs::msg::PlanningFactorArray factors(::autoware_internal_planning_msgs::msg::PlanningFactorArray::_factors_type arg)
  {
    msg_.factors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::PlanningFactorArray msg_;
};

class Init_PlanningFactorArray_header
{
public:
  Init_PlanningFactorArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanningFactorArray_factors header(::autoware_internal_planning_msgs::msg::PlanningFactorArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PlanningFactorArray_factors(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::PlanningFactorArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_internal_planning_msgs::msg::PlanningFactorArray>()
{
  return autoware_internal_planning_msgs::msg::builder::Init_PlanningFactorArray_header();
}

}  // namespace autoware_internal_planning_msgs

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__PLANNING_FACTOR_ARRAY__BUILDER_HPP_
