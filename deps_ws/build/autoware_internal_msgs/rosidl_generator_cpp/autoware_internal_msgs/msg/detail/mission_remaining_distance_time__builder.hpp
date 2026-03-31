// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_internal_msgs:msg/MissionRemainingDistanceTime.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__MISSION_REMAINING_DISTANCE_TIME__BUILDER_HPP_
#define AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__MISSION_REMAINING_DISTANCE_TIME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_internal_msgs/msg/detail/mission_remaining_distance_time__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_internal_msgs
{

namespace msg
{

namespace builder
{

class Init_MissionRemainingDistanceTime_remaining_time
{
public:
  explicit Init_MissionRemainingDistanceTime_remaining_time(::autoware_internal_msgs::msg::MissionRemainingDistanceTime & msg)
  : msg_(msg)
  {}
  ::autoware_internal_msgs::msg::MissionRemainingDistanceTime remaining_time(::autoware_internal_msgs::msg::MissionRemainingDistanceTime::_remaining_time_type arg)
  {
    msg_.remaining_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_internal_msgs::msg::MissionRemainingDistanceTime msg_;
};

class Init_MissionRemainingDistanceTime_remaining_distance
{
public:
  Init_MissionRemainingDistanceTime_remaining_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionRemainingDistanceTime_remaining_time remaining_distance(::autoware_internal_msgs::msg::MissionRemainingDistanceTime::_remaining_distance_type arg)
  {
    msg_.remaining_distance = std::move(arg);
    return Init_MissionRemainingDistanceTime_remaining_time(msg_);
  }

private:
  ::autoware_internal_msgs::msg::MissionRemainingDistanceTime msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_internal_msgs::msg::MissionRemainingDistanceTime>()
{
  return autoware_internal_msgs::msg::builder::Init_MissionRemainingDistanceTime_remaining_distance();
}

}  // namespace autoware_internal_msgs

#endif  // AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__MISSION_REMAINING_DISTANCE_TIME__BUILDER_HPP_
