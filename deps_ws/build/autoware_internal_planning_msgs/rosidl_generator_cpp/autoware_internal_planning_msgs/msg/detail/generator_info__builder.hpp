// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_internal_planning_msgs:msg/GeneratorInfo.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__GENERATOR_INFO__BUILDER_HPP_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__GENERATOR_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_internal_planning_msgs/msg/detail/generator_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_internal_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_GeneratorInfo_generator_name
{
public:
  explicit Init_GeneratorInfo_generator_name(::autoware_internal_planning_msgs::msg::GeneratorInfo & msg)
  : msg_(msg)
  {}
  ::autoware_internal_planning_msgs::msg::GeneratorInfo generator_name(::autoware_internal_planning_msgs::msg::GeneratorInfo::_generator_name_type arg)
  {
    msg_.generator_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::GeneratorInfo msg_;
};

class Init_GeneratorInfo_generator_id
{
public:
  Init_GeneratorInfo_generator_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GeneratorInfo_generator_name generator_id(::autoware_internal_planning_msgs::msg::GeneratorInfo::_generator_id_type arg)
  {
    msg_.generator_id = std::move(arg);
    return Init_GeneratorInfo_generator_name(msg_);
  }

private:
  ::autoware_internal_planning_msgs::msg::GeneratorInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_internal_planning_msgs::msg::GeneratorInfo>()
{
  return autoware_internal_planning_msgs::msg::builder::Init_GeneratorInfo_generator_id();
}

}  // namespace autoware_internal_planning_msgs

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__GENERATOR_INFO__BUILDER_HPP_
