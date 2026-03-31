// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_internal_planning_msgs:msg/SafetyFactorArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SAFETY_FACTOR_ARRAY__BUILDER_HPP_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SAFETY_FACTOR_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_internal_planning_msgs/msg/detail/safety_factor_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_internal_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_SafetyFactorArray_detail
{
public:
  explicit Init_SafetyFactorArray_detail(::autoware_internal_planning_msgs::msg::SafetyFactorArray & msg)
  : msg_(msg)
  {}
  ::autoware_internal_planning_msgs::msg::SafetyFactorArray detail(::autoware_internal_planning_msgs::msg::SafetyFactorArray::_detail_type arg)
  {
    msg_.detail = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::SafetyFactorArray msg_;
};

class Init_SafetyFactorArray_is_safe
{
public:
  explicit Init_SafetyFactorArray_is_safe(::autoware_internal_planning_msgs::msg::SafetyFactorArray & msg)
  : msg_(msg)
  {}
  Init_SafetyFactorArray_detail is_safe(::autoware_internal_planning_msgs::msg::SafetyFactorArray::_is_safe_type arg)
  {
    msg_.is_safe = std::move(arg);
    return Init_SafetyFactorArray_detail(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::SafetyFactorArray msg_;
};

class Init_SafetyFactorArray_factors
{
public:
  explicit Init_SafetyFactorArray_factors(::autoware_internal_planning_msgs::msg::SafetyFactorArray & msg)
  : msg_(msg)
  {}
  Init_SafetyFactorArray_is_safe factors(::autoware_internal_planning_msgs::msg::SafetyFactorArray::_factors_type arg)
  {
    msg_.factors = std::move(arg);
    return Init_SafetyFactorArray_is_safe(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::SafetyFactorArray msg_;
};

class Init_SafetyFactorArray_header
{
public:
  Init_SafetyFactorArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SafetyFactorArray_factors header(::autoware_internal_planning_msgs::msg::SafetyFactorArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SafetyFactorArray_factors(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::SafetyFactorArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_internal_planning_msgs::msg::SafetyFactorArray>()
{
  return autoware_internal_planning_msgs::msg::builder::Init_SafetyFactorArray_header();
}

}  // namespace autoware_internal_planning_msgs

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SAFETY_FACTOR_ARRAY__BUILDER_HPP_
