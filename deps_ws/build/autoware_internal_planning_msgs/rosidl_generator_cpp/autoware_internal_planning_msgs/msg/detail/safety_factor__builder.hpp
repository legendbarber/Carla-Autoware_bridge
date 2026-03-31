// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_internal_planning_msgs:msg/SafetyFactor.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SAFETY_FACTOR__BUILDER_HPP_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SAFETY_FACTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_internal_planning_msgs/msg/detail/safety_factor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_internal_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_SafetyFactor_is_safe
{
public:
  explicit Init_SafetyFactor_is_safe(::autoware_internal_planning_msgs::msg::SafetyFactor & msg)
  : msg_(msg)
  {}
  ::autoware_internal_planning_msgs::msg::SafetyFactor is_safe(::autoware_internal_planning_msgs::msg::SafetyFactor::_is_safe_type arg)
  {
    msg_.is_safe = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::SafetyFactor msg_;
};

class Init_SafetyFactor_points
{
public:
  explicit Init_SafetyFactor_points(::autoware_internal_planning_msgs::msg::SafetyFactor & msg)
  : msg_(msg)
  {}
  Init_SafetyFactor_is_safe points(::autoware_internal_planning_msgs::msg::SafetyFactor::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_SafetyFactor_is_safe(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::SafetyFactor msg_;
};

class Init_SafetyFactor_ttc_end
{
public:
  explicit Init_SafetyFactor_ttc_end(::autoware_internal_planning_msgs::msg::SafetyFactor & msg)
  : msg_(msg)
  {}
  Init_SafetyFactor_points ttc_end(::autoware_internal_planning_msgs::msg::SafetyFactor::_ttc_end_type arg)
  {
    msg_.ttc_end = std::move(arg);
    return Init_SafetyFactor_points(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::SafetyFactor msg_;
};

class Init_SafetyFactor_ttc_begin
{
public:
  explicit Init_SafetyFactor_ttc_begin(::autoware_internal_planning_msgs::msg::SafetyFactor & msg)
  : msg_(msg)
  {}
  Init_SafetyFactor_ttc_end ttc_begin(::autoware_internal_planning_msgs::msg::SafetyFactor::_ttc_begin_type arg)
  {
    msg_.ttc_begin = std::move(arg);
    return Init_SafetyFactor_ttc_end(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::SafetyFactor msg_;
};

class Init_SafetyFactor_predicted_path
{
public:
  explicit Init_SafetyFactor_predicted_path(::autoware_internal_planning_msgs::msg::SafetyFactor & msg)
  : msg_(msg)
  {}
  Init_SafetyFactor_ttc_begin predicted_path(::autoware_internal_planning_msgs::msg::SafetyFactor::_predicted_path_type arg)
  {
    msg_.predicted_path = std::move(arg);
    return Init_SafetyFactor_ttc_begin(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::SafetyFactor msg_;
};

class Init_SafetyFactor_object_id
{
public:
  explicit Init_SafetyFactor_object_id(::autoware_internal_planning_msgs::msg::SafetyFactor & msg)
  : msg_(msg)
  {}
  Init_SafetyFactor_predicted_path object_id(::autoware_internal_planning_msgs::msg::SafetyFactor::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return Init_SafetyFactor_predicted_path(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::SafetyFactor msg_;
};

class Init_SafetyFactor_type
{
public:
  Init_SafetyFactor_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SafetyFactor_object_id type(::autoware_internal_planning_msgs::msg::SafetyFactor::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SafetyFactor_object_id(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::SafetyFactor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_internal_planning_msgs::msg::SafetyFactor>()
{
  return autoware_internal_planning_msgs::msg::builder::Init_SafetyFactor_type();
}

}  // namespace autoware_internal_planning_msgs

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SAFETY_FACTOR__BUILDER_HPP_
