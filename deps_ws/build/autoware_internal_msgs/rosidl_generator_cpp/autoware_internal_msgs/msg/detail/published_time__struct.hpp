// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_internal_msgs:msg/PublishedTime.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__PUBLISHED_TIME__STRUCT_HPP_
#define AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__PUBLISHED_TIME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'published_stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_internal_msgs__msg__PublishedTime __attribute__((deprecated))
#else
# define DEPRECATED__autoware_internal_msgs__msg__PublishedTime __declspec(deprecated)
#endif

namespace autoware_internal_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PublishedTime_
{
  using Type = PublishedTime_<ContainerAllocator>;

  explicit PublishedTime_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    published_stamp(_init)
  {
    (void)_init;
  }

  explicit PublishedTime_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    published_stamp(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _published_stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _published_stamp_type published_stamp;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__published_stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->published_stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_internal_msgs::msg::PublishedTime_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_internal_msgs::msg::PublishedTime_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_internal_msgs::msg::PublishedTime_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_internal_msgs::msg::PublishedTime_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_internal_msgs::msg::PublishedTime_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_internal_msgs::msg::PublishedTime_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_internal_msgs::msg::PublishedTime_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_internal_msgs::msg::PublishedTime_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_internal_msgs::msg::PublishedTime_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_internal_msgs::msg::PublishedTime_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_internal_msgs__msg__PublishedTime
    std::shared_ptr<autoware_internal_msgs::msg::PublishedTime_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_internal_msgs__msg__PublishedTime
    std::shared_ptr<autoware_internal_msgs::msg::PublishedTime_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PublishedTime_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->published_stamp != other.published_stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const PublishedTime_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PublishedTime_

// alias to use template instance with default allocator
using PublishedTime =
  autoware_internal_msgs::msg::PublishedTime_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_internal_msgs

#endif  // AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__PUBLISHED_TIME__STRUCT_HPP_
