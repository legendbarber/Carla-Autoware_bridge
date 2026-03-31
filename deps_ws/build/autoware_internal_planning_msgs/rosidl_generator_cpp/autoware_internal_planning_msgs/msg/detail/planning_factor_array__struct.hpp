// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_internal_planning_msgs:msg/PlanningFactorArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__PLANNING_FACTOR_ARRAY__STRUCT_HPP_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__PLANNING_FACTOR_ARRAY__STRUCT_HPP_

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
// Member 'factors'
#include "autoware_internal_planning_msgs/msg/detail/planning_factor__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_internal_planning_msgs__msg__PlanningFactorArray __attribute__((deprecated))
#else
# define DEPRECATED__autoware_internal_planning_msgs__msg__PlanningFactorArray __declspec(deprecated)
#endif

namespace autoware_internal_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanningFactorArray_
{
  using Type = PlanningFactorArray_<ContainerAllocator>;

  explicit PlanningFactorArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit PlanningFactorArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _factors_type =
    std::vector<autoware_internal_planning_msgs::msg::PlanningFactor_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_internal_planning_msgs::msg::PlanningFactor_<ContainerAllocator>>>;
  _factors_type factors;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__factors(
    const std::vector<autoware_internal_planning_msgs::msg::PlanningFactor_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_internal_planning_msgs::msg::PlanningFactor_<ContainerAllocator>>> & _arg)
  {
    this->factors = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_internal_planning_msgs::msg::PlanningFactorArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_internal_planning_msgs::msg::PlanningFactorArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_internal_planning_msgs::msg::PlanningFactorArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_internal_planning_msgs::msg::PlanningFactorArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_internal_planning_msgs::msg::PlanningFactorArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_internal_planning_msgs::msg::PlanningFactorArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_internal_planning_msgs::msg::PlanningFactorArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_internal_planning_msgs::msg::PlanningFactorArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_internal_planning_msgs::msg::PlanningFactorArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_internal_planning_msgs::msg::PlanningFactorArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_internal_planning_msgs__msg__PlanningFactorArray
    std::shared_ptr<autoware_internal_planning_msgs::msg::PlanningFactorArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_internal_planning_msgs__msg__PlanningFactorArray
    std::shared_ptr<autoware_internal_planning_msgs::msg::PlanningFactorArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanningFactorArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->factors != other.factors) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanningFactorArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanningFactorArray_

// alias to use template instance with default allocator
using PlanningFactorArray =
  autoware_internal_planning_msgs::msg::PlanningFactorArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_internal_planning_msgs

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__PLANNING_FACTOR_ARRAY__STRUCT_HPP_
