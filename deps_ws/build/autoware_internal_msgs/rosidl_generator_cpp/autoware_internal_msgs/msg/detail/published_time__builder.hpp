// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_internal_msgs:msg/PublishedTime.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__PUBLISHED_TIME__BUILDER_HPP_
#define AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__PUBLISHED_TIME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_internal_msgs/msg/detail/published_time__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_internal_msgs
{

namespace msg
{

namespace builder
{

class Init_PublishedTime_published_stamp
{
public:
  explicit Init_PublishedTime_published_stamp(::autoware_internal_msgs::msg::PublishedTime & msg)
  : msg_(msg)
  {}
  ::autoware_internal_msgs::msg::PublishedTime published_stamp(::autoware_internal_msgs::msg::PublishedTime::_published_stamp_type arg)
  {
    msg_.published_stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_internal_msgs::msg::PublishedTime msg_;
};

class Init_PublishedTime_header
{
public:
  Init_PublishedTime_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PublishedTime_published_stamp header(::autoware_internal_msgs::msg::PublishedTime::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PublishedTime_published_stamp(msg_);
  }

private:
  ::autoware_internal_msgs::msg::PublishedTime msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_internal_msgs::msg::PublishedTime>()
{
  return autoware_internal_msgs::msg::builder::Init_PublishedTime_header();
}

}  // namespace autoware_internal_msgs

#endif  // AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__PUBLISHED_TIME__BUILDER_HPP_
