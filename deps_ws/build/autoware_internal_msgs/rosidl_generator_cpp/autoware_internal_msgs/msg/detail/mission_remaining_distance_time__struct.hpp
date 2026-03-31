// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_internal_msgs:msg/MissionRemainingDistanceTime.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__MISSION_REMAINING_DISTANCE_TIME__STRUCT_HPP_
#define AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__MISSION_REMAINING_DISTANCE_TIME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__autoware_internal_msgs__msg__MissionRemainingDistanceTime __attribute__((deprecated))
#else
# define DEPRECATED__autoware_internal_msgs__msg__MissionRemainingDistanceTime __declspec(deprecated)
#endif

namespace autoware_internal_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MissionRemainingDistanceTime_
{
  using Type = MissionRemainingDistanceTime_<ContainerAllocator>;

  explicit MissionRemainingDistanceTime_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->remaining_distance = 0.0;
      this->remaining_time = 0.0;
    }
  }

  explicit MissionRemainingDistanceTime_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->remaining_distance = 0.0;
      this->remaining_time = 0.0;
    }
  }

  // field types and members
  using _remaining_distance_type =
    double;
  _remaining_distance_type remaining_distance;
  using _remaining_time_type =
    double;
  _remaining_time_type remaining_time;

  // setters for named parameter idiom
  Type & set__remaining_distance(
    const double & _arg)
  {
    this->remaining_distance = _arg;
    return *this;
  }
  Type & set__remaining_time(
    const double & _arg)
  {
    this->remaining_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_internal_msgs::msg::MissionRemainingDistanceTime_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_internal_msgs::msg::MissionRemainingDistanceTime_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_internal_msgs::msg::MissionRemainingDistanceTime_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_internal_msgs::msg::MissionRemainingDistanceTime_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_internal_msgs::msg::MissionRemainingDistanceTime_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_internal_msgs::msg::MissionRemainingDistanceTime_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_internal_msgs::msg::MissionRemainingDistanceTime_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_internal_msgs::msg::MissionRemainingDistanceTime_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_internal_msgs::msg::MissionRemainingDistanceTime_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_internal_msgs::msg::MissionRemainingDistanceTime_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_internal_msgs__msg__MissionRemainingDistanceTime
    std::shared_ptr<autoware_internal_msgs::msg::MissionRemainingDistanceTime_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_internal_msgs__msg__MissionRemainingDistanceTime
    std::shared_ptr<autoware_internal_msgs::msg::MissionRemainingDistanceTime_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionRemainingDistanceTime_ & other) const
  {
    if (this->remaining_distance != other.remaining_distance) {
      return false;
    }
    if (this->remaining_time != other.remaining_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionRemainingDistanceTime_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionRemainingDistanceTime_

// alias to use template instance with default allocator
using MissionRemainingDistanceTime =
  autoware_internal_msgs::msg::MissionRemainingDistanceTime_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_internal_msgs

#endif  // AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__MISSION_REMAINING_DISTANCE_TIME__STRUCT_HPP_
