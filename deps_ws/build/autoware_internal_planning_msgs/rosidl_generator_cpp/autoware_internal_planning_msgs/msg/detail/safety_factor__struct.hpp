// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_internal_planning_msgs:msg/SafetyFactor.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SAFETY_FACTOR__STRUCT_HPP_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SAFETY_FACTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'object_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'predicted_path'
#include "autoware_perception_msgs/msg/detail/predicted_path__struct.hpp"
// Member 'points'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_internal_planning_msgs__msg__SafetyFactor __attribute__((deprecated))
#else
# define DEPRECATED__autoware_internal_planning_msgs__msg__SafetyFactor __declspec(deprecated)
#endif

namespace autoware_internal_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SafetyFactor_
{
  using Type = SafetyFactor_<ContainerAllocator>;

  explicit SafetyFactor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_id(_init),
    predicted_path(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->ttc_begin = 0.0f;
      this->ttc_end = 0.0f;
      this->is_safe = false;
    }
  }

  explicit SafetyFactor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_id(_alloc, _init),
    predicted_path(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->ttc_begin = 0.0f;
      this->ttc_end = 0.0f;
      this->is_safe = false;
    }
  }

  // field types and members
  using _type_type =
    uint16_t;
  _type_type type;
  using _object_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _object_id_type object_id;
  using _predicted_path_type =
    autoware_perception_msgs::msg::PredictedPath_<ContainerAllocator>;
  _predicted_path_type predicted_path;
  using _ttc_begin_type =
    float;
  _ttc_begin_type ttc_begin;
  using _ttc_end_type =
    float;
  _ttc_end_type ttc_end;
  using _points_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _points_type points;
  using _is_safe_type =
    bool;
  _is_safe_type is_safe;

  // setters for named parameter idiom
  Type & set__type(
    const uint16_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__object_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->object_id = _arg;
    return *this;
  }
  Type & set__predicted_path(
    const autoware_perception_msgs::msg::PredictedPath_<ContainerAllocator> & _arg)
  {
    this->predicted_path = _arg;
    return *this;
  }
  Type & set__ttc_begin(
    const float & _arg)
  {
    this->ttc_begin = _arg;
    return *this;
  }
  Type & set__ttc_end(
    const float & _arg)
  {
    this->ttc_end = _arg;
    return *this;
  }
  Type & set__points(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }
  Type & set__is_safe(
    const bool & _arg)
  {
    this->is_safe = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t UNKNOWN =
    0u;
  static constexpr uint16_t POINTCLOUD =
    1u;
  static constexpr uint16_t OBJECT =
    2u;

  // pointer types
  using RawPtr =
    autoware_internal_planning_msgs::msg::SafetyFactor_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_internal_planning_msgs::msg::SafetyFactor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_internal_planning_msgs::msg::SafetyFactor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_internal_planning_msgs::msg::SafetyFactor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_internal_planning_msgs::msg::SafetyFactor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_internal_planning_msgs::msg::SafetyFactor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_internal_planning_msgs::msg::SafetyFactor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_internal_planning_msgs::msg::SafetyFactor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_internal_planning_msgs::msg::SafetyFactor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_internal_planning_msgs::msg::SafetyFactor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_internal_planning_msgs__msg__SafetyFactor
    std::shared_ptr<autoware_internal_planning_msgs::msg::SafetyFactor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_internal_planning_msgs__msg__SafetyFactor
    std::shared_ptr<autoware_internal_planning_msgs::msg::SafetyFactor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SafetyFactor_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->object_id != other.object_id) {
      return false;
    }
    if (this->predicted_path != other.predicted_path) {
      return false;
    }
    if (this->ttc_begin != other.ttc_begin) {
      return false;
    }
    if (this->ttc_end != other.ttc_end) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    if (this->is_safe != other.is_safe) {
      return false;
    }
    return true;
  }
  bool operator!=(const SafetyFactor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SafetyFactor_

// alias to use template instance with default allocator
using SafetyFactor =
  autoware_internal_planning_msgs::msg::SafetyFactor_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SafetyFactor_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SafetyFactor_<ContainerAllocator>::POINTCLOUD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SafetyFactor_<ContainerAllocator>::OBJECT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autoware_internal_planning_msgs

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SAFETY_FACTOR__STRUCT_HPP_
