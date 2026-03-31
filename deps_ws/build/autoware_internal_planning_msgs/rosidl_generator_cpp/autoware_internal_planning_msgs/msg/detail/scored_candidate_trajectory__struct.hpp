// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_internal_planning_msgs:msg/ScoredCandidateTrajectory.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SCORED_CANDIDATE_TRAJECTORY__STRUCT_HPP_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SCORED_CANDIDATE_TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'candidate_trajectory'
#include "autoware_internal_planning_msgs/msg/detail/candidate_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_internal_planning_msgs__msg__ScoredCandidateTrajectory __attribute__((deprecated))
#else
# define DEPRECATED__autoware_internal_planning_msgs__msg__ScoredCandidateTrajectory __declspec(deprecated)
#endif

namespace autoware_internal_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScoredCandidateTrajectory_
{
  using Type = ScoredCandidateTrajectory_<ContainerAllocator>;

  explicit ScoredCandidateTrajectory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : candidate_trajectory(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->score = 0.0f;
    }
  }

  explicit ScoredCandidateTrajectory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : candidate_trajectory(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->score = 0.0f;
    }
  }

  // field types and members
  using _candidate_trajectory_type =
    autoware_internal_planning_msgs::msg::CandidateTrajectory_<ContainerAllocator>;
  _candidate_trajectory_type candidate_trajectory;
  using _score_type =
    float;
  _score_type score;

  // setters for named parameter idiom
  Type & set__candidate_trajectory(
    const autoware_internal_planning_msgs::msg::CandidateTrajectory_<ContainerAllocator> & _arg)
  {
    this->candidate_trajectory = _arg;
    return *this;
  }
  Type & set__score(
    const float & _arg)
  {
    this->score = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_internal_planning_msgs__msg__ScoredCandidateTrajectory
    std::shared_ptr<autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_internal_planning_msgs__msg__ScoredCandidateTrajectory
    std::shared_ptr<autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScoredCandidateTrajectory_ & other) const
  {
    if (this->candidate_trajectory != other.candidate_trajectory) {
      return false;
    }
    if (this->score != other.score) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScoredCandidateTrajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScoredCandidateTrajectory_

// alias to use template instance with default allocator
using ScoredCandidateTrajectory =
  autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_internal_planning_msgs

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SCORED_CANDIDATE_TRAJECTORY__STRUCT_HPP_
