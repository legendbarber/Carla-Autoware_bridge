// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_internal_planning_msgs:srv/UnloadPlugin.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__SRV__DETAIL__UNLOAD_PLUGIN__BUILDER_HPP_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__SRV__DETAIL__UNLOAD_PLUGIN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_internal_planning_msgs/srv/detail/unload_plugin__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_internal_planning_msgs
{

namespace srv
{

namespace builder
{

class Init_UnloadPlugin_Request_plugin_name
{
public:
  Init_UnloadPlugin_Request_plugin_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autoware_internal_planning_msgs::srv::UnloadPlugin_Request plugin_name(::autoware_internal_planning_msgs::srv::UnloadPlugin_Request::_plugin_name_type arg)
  {
    msg_.plugin_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_internal_planning_msgs::srv::UnloadPlugin_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_internal_planning_msgs::srv::UnloadPlugin_Request>()
{
  return autoware_internal_planning_msgs::srv::builder::Init_UnloadPlugin_Request_plugin_name();
}

}  // namespace autoware_internal_planning_msgs


namespace autoware_internal_planning_msgs
{

namespace srv
{

namespace builder
{

class Init_UnloadPlugin_Response_success
{
public:
  Init_UnloadPlugin_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autoware_internal_planning_msgs::srv::UnloadPlugin_Response success(::autoware_internal_planning_msgs::srv::UnloadPlugin_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_internal_planning_msgs::srv::UnloadPlugin_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_internal_planning_msgs::srv::UnloadPlugin_Response>()
{
  return autoware_internal_planning_msgs::srv::builder::Init_UnloadPlugin_Response_success();
}

}  // namespace autoware_internal_planning_msgs

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__SRV__DETAIL__UNLOAD_PLUGIN__BUILDER_HPP_
