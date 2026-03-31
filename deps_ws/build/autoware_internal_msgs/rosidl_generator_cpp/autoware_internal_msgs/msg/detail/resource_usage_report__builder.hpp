// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_internal_msgs:msg/ResourceUsageReport.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__RESOURCE_USAGE_REPORT__BUILDER_HPP_
#define AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__RESOURCE_USAGE_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_internal_msgs/msg/detail/resource_usage_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_internal_msgs
{

namespace msg
{

namespace builder
{

class Init_ResourceUsageReport_process_memory_bytes
{
public:
  explicit Init_ResourceUsageReport_process_memory_bytes(::autoware_internal_msgs::msg::ResourceUsageReport & msg)
  : msg_(msg)
  {}
  ::autoware_internal_msgs::msg::ResourceUsageReport process_memory_bytes(::autoware_internal_msgs::msg::ResourceUsageReport::_process_memory_bytes_type arg)
  {
    msg_.process_memory_bytes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_internal_msgs::msg::ResourceUsageReport msg_;
};

class Init_ResourceUsageReport_free_memory_bytes
{
public:
  explicit Init_ResourceUsageReport_free_memory_bytes(::autoware_internal_msgs::msg::ResourceUsageReport & msg)
  : msg_(msg)
  {}
  Init_ResourceUsageReport_process_memory_bytes free_memory_bytes(::autoware_internal_msgs::msg::ResourceUsageReport::_free_memory_bytes_type arg)
  {
    msg_.free_memory_bytes = std::move(arg);
    return Init_ResourceUsageReport_process_memory_bytes(msg_);
  }

private:
  ::autoware_internal_msgs::msg::ResourceUsageReport msg_;
};

class Init_ResourceUsageReport_total_memory_bytes
{
public:
  explicit Init_ResourceUsageReport_total_memory_bytes(::autoware_internal_msgs::msg::ResourceUsageReport & msg)
  : msg_(msg)
  {}
  Init_ResourceUsageReport_free_memory_bytes total_memory_bytes(::autoware_internal_msgs::msg::ResourceUsageReport::_total_memory_bytes_type arg)
  {
    msg_.total_memory_bytes = std::move(arg);
    return Init_ResourceUsageReport_free_memory_bytes(msg_);
  }

private:
  ::autoware_internal_msgs::msg::ResourceUsageReport msg_;
};

class Init_ResourceUsageReport_cpu_cores_utilized
{
public:
  explicit Init_ResourceUsageReport_cpu_cores_utilized(::autoware_internal_msgs::msg::ResourceUsageReport & msg)
  : msg_(msg)
  {}
  Init_ResourceUsageReport_total_memory_bytes cpu_cores_utilized(::autoware_internal_msgs::msg::ResourceUsageReport::_cpu_cores_utilized_type arg)
  {
    msg_.cpu_cores_utilized = std::move(arg);
    return Init_ResourceUsageReport_total_memory_bytes(msg_);
  }

private:
  ::autoware_internal_msgs::msg::ResourceUsageReport msg_;
};

class Init_ResourceUsageReport_pid
{
public:
  explicit Init_ResourceUsageReport_pid(::autoware_internal_msgs::msg::ResourceUsageReport & msg)
  : msg_(msg)
  {}
  Init_ResourceUsageReport_cpu_cores_utilized pid(::autoware_internal_msgs::msg::ResourceUsageReport::_pid_type arg)
  {
    msg_.pid = std::move(arg);
    return Init_ResourceUsageReport_cpu_cores_utilized(msg_);
  }

private:
  ::autoware_internal_msgs::msg::ResourceUsageReport msg_;
};

class Init_ResourceUsageReport_header
{
public:
  Init_ResourceUsageReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResourceUsageReport_pid header(::autoware_internal_msgs::msg::ResourceUsageReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ResourceUsageReport_pid(msg_);
  }

private:
  ::autoware_internal_msgs::msg::ResourceUsageReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_internal_msgs::msg::ResourceUsageReport>()
{
  return autoware_internal_msgs::msg::builder::Init_ResourceUsageReport_header();
}

}  // namespace autoware_internal_msgs

#endif  // AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__RESOURCE_USAGE_REPORT__BUILDER_HPP_
