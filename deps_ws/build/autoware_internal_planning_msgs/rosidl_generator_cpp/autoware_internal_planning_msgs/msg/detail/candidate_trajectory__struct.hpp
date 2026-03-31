// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_internal_planning_msgs:msg/CandidateTrajectory.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__CANDIDATE_TRAJECTORY__STRUCT_HPP_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__CANDIDATE_TRAJECTORY__STRUCT_HPP_

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
// Member 'generator_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'points'
#include "autoware_planning_msgs/msg/detail/trajectory_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_internal_planning_msgs__msg__CandidateTrajectory __attribute__((deprecated))
#else
# define DEPRECATED__autoware_internal_planning_msgs__msg__CandidateTrajectory __declspec(deprecated)
#endif

namespace autoware_internal_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CandidateTrajectory_
{
  using Type = CandidateTrajectory_<ContainerAllocator>;

  explicit CandidateTrajectory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    generator_id(_init)
  {
    (void)_init;
  }

  explicit CandidateTrajectory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    generator_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _generator_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _generator_id_type generator_id;
  using _points_type =
    std::vector<autoware_planning_msgs::msg::TrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_planning_msgs::msg::TrajectoryPoint_<ContainerAllocator>>>;
  _points_type points;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__generator_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->generator_id = _arg;
    return *this;
  }
  Type & set__points(
    const std::vector<autoware_planning_msgs::msg::TrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_planning_msgs::msg::TrajectoryPoint_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_internal_planning_msgs::msg::CandidateTrajectory_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_internal_planning_msgs::msg::CandidateTrajectory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_internal_planning_msgs::msg::CandidateTrajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_internal_planning_msgs::msg::CandidateTrajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_internal_planning_msgs::msg::CandidateTrajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_internal_planning_msgs::msg::CandidateTrajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_internal_planning_msgs::msg::CandidateTrajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_internal_planning_msgs::msg::CandidateTrajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_internal_planning_msgs::msg::CandidateTrajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_internal_planning_msgs::msg::CandidateTrajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_internal_planning_msgs__msg__CandidateTrajectory
    std::shared_ptr<autoware_internal_planning_msgs::msg::CandidateTrajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_internal_planning_msgs__msg__CandidateTrajectory
    std::shared_ptr<autoware_internal_planning_msgs::msg::CandidateTrajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CandidateTrajectory_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->generator_id != other.generator_id) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    return true;
  }
  bool operator!=(const CandidateTrajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CandidateTrajectory_

// alias to use template instance with default allocator
using CandidateTrajectory =
  autoware_internal_planning_msgs::msg::CandidateTrajectory_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_internal_planning_msgs

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__CANDIDATE_TRAJECTORY__STRUCT_HPP_
