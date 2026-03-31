// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_internal_planning_msgs:msg/GeneratorInfo.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__GENERATOR_INFO__STRUCT_HPP_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__GENERATOR_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'generator_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'generator_name'
#include "std_msgs/msg/detail/string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_internal_planning_msgs__msg__GeneratorInfo __attribute__((deprecated))
#else
# define DEPRECATED__autoware_internal_planning_msgs__msg__GeneratorInfo __declspec(deprecated)
#endif

namespace autoware_internal_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GeneratorInfo_
{
  using Type = GeneratorInfo_<ContainerAllocator>;

  explicit GeneratorInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : generator_id(_init),
    generator_name(_init)
  {
    (void)_init;
  }

  explicit GeneratorInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : generator_id(_alloc, _init),
    generator_name(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _generator_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _generator_id_type generator_id;
  using _generator_name_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _generator_name_type generator_name;

  // setters for named parameter idiom
  Type & set__generator_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->generator_id = _arg;
    return *this;
  }
  Type & set__generator_name(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->generator_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_internal_planning_msgs::msg::GeneratorInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_internal_planning_msgs::msg::GeneratorInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_internal_planning_msgs::msg::GeneratorInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_internal_planning_msgs::msg::GeneratorInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_internal_planning_msgs::msg::GeneratorInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_internal_planning_msgs::msg::GeneratorInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_internal_planning_msgs::msg::GeneratorInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_internal_planning_msgs::msg::GeneratorInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_internal_planning_msgs::msg::GeneratorInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_internal_planning_msgs::msg::GeneratorInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_internal_planning_msgs__msg__GeneratorInfo
    std::shared_ptr<autoware_internal_planning_msgs::msg::GeneratorInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_internal_planning_msgs__msg__GeneratorInfo
    std::shared_ptr<autoware_internal_planning_msgs::msg::GeneratorInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GeneratorInfo_ & other) const
  {
    if (this->generator_id != other.generator_id) {
      return false;
    }
    if (this->generator_name != other.generator_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const GeneratorInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GeneratorInfo_

// alias to use template instance with default allocator
using GeneratorInfo =
  autoware_internal_planning_msgs::msg::GeneratorInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_internal_planning_msgs

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__GENERATOR_INFO__STRUCT_HPP_
