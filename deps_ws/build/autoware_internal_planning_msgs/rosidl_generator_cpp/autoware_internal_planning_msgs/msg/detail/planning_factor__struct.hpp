// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_internal_planning_msgs:msg/PlanningFactor.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__PLANNING_FACTOR__STRUCT_HPP_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__PLANNING_FACTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'control_points'
#include "autoware_internal_planning_msgs/msg/detail/control_point__struct.hpp"
// Member 'safety_factors'
#include "autoware_internal_planning_msgs/msg/detail/safety_factor_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_internal_planning_msgs__msg__PlanningFactor __attribute__((deprecated))
#else
# define DEPRECATED__autoware_internal_planning_msgs__msg__PlanningFactor __declspec(deprecated)
#endif

namespace autoware_internal_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanningFactor_
{
  using Type = PlanningFactor_<ContainerAllocator>;

  explicit PlanningFactor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : safety_factors(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->module = "";
      this->is_driving_forward = false;
      this->behavior = 0;
      this->detail = "";
    }
  }

  explicit PlanningFactor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : module(_alloc),
    detail(_alloc),
    safety_factors(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->module = "";
      this->is_driving_forward = false;
      this->behavior = 0;
      this->detail = "";
    }
  }

  // field types and members
  using _module_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _module_type module;
  using _is_driving_forward_type =
    bool;
  _is_driving_forward_type is_driving_forward;
  using _control_points_type =
    std::vector<autoware_internal_planning_msgs::msg::ControlPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_internal_planning_msgs::msg::ControlPoint_<ContainerAllocator>>>;
  _control_points_type control_points;
  using _behavior_type =
    uint16_t;
  _behavior_type behavior;
  using _detail_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _detail_type detail;
  using _safety_factors_type =
    autoware_internal_planning_msgs::msg::SafetyFactorArray_<ContainerAllocator>;
  _safety_factors_type safety_factors;

  // setters for named parameter idiom
  Type & set__module(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->module = _arg;
    return *this;
  }
  Type & set__is_driving_forward(
    const bool & _arg)
  {
    this->is_driving_forward = _arg;
    return *this;
  }
  Type & set__control_points(
    const std::vector<autoware_internal_planning_msgs::msg::ControlPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_internal_planning_msgs::msg::ControlPoint_<ContainerAllocator>>> & _arg)
  {
    this->control_points = _arg;
    return *this;
  }
  Type & set__behavior(
    const uint16_t & _arg)
  {
    this->behavior = _arg;
    return *this;
  }
  Type & set__detail(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->detail = _arg;
    return *this;
  }
  Type & set__safety_factors(
    const autoware_internal_planning_msgs::msg::SafetyFactorArray_<ContainerAllocator> & _arg)
  {
    this->safety_factors = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t UNKNOWN =
    0u;
  static constexpr uint16_t NONE =
    1u;
  static constexpr uint16_t SLOW_DOWN =
    2u;
  static constexpr uint16_t STOP =
    3u;
  static constexpr uint16_t SHIFT_LEFT =
    4u;
  static constexpr uint16_t SHIFT_RIGHT =
    5u;
  static constexpr uint16_t TURN_LEFT =
    6u;
  static constexpr uint16_t TURN_RIGHT =
    7u;

  // pointer types
  using RawPtr =
    autoware_internal_planning_msgs::msg::PlanningFactor_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_internal_planning_msgs::msg::PlanningFactor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_internal_planning_msgs::msg::PlanningFactor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_internal_planning_msgs::msg::PlanningFactor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_internal_planning_msgs::msg::PlanningFactor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_internal_planning_msgs::msg::PlanningFactor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_internal_planning_msgs::msg::PlanningFactor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_internal_planning_msgs::msg::PlanningFactor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_internal_planning_msgs::msg::PlanningFactor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_internal_planning_msgs::msg::PlanningFactor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_internal_planning_msgs__msg__PlanningFactor
    std::shared_ptr<autoware_internal_planning_msgs::msg::PlanningFactor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_internal_planning_msgs__msg__PlanningFactor
    std::shared_ptr<autoware_internal_planning_msgs::msg::PlanningFactor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanningFactor_ & other) const
  {
    if (this->module != other.module) {
      return false;
    }
    if (this->is_driving_forward != other.is_driving_forward) {
      return false;
    }
    if (this->control_points != other.control_points) {
      return false;
    }
    if (this->behavior != other.behavior) {
      return false;
    }
    if (this->detail != other.detail) {
      return false;
    }
    if (this->safety_factors != other.safety_factors) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanningFactor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanningFactor_

// alias to use template instance with default allocator
using PlanningFactor =
  autoware_internal_planning_msgs::msg::PlanningFactor_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t PlanningFactor_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t PlanningFactor_<ContainerAllocator>::NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t PlanningFactor_<ContainerAllocator>::SLOW_DOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t PlanningFactor_<ContainerAllocator>::STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t PlanningFactor_<ContainerAllocator>::SHIFT_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t PlanningFactor_<ContainerAllocator>::SHIFT_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t PlanningFactor_<ContainerAllocator>::TURN_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t PlanningFactor_<ContainerAllocator>::TURN_RIGHT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autoware_internal_planning_msgs

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__PLANNING_FACTOR__STRUCT_HPP_
