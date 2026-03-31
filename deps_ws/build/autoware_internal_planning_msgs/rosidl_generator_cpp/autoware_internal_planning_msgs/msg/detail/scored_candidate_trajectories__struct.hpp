// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_internal_planning_msgs:msg/ScoredCandidateTrajectories.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SCORED_CANDIDATE_TRAJECTORIES__STRUCT_HPP_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SCORED_CANDIDATE_TRAJECTORIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'scored_candidate_trajectories'
#include "autoware_internal_planning_msgs/msg/detail/scored_candidate_trajectory__struct.hpp"
// Member 'generator_info'
#include "autoware_internal_planning_msgs/msg/detail/generator_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories __attribute__((deprecated))
#else
# define DEPRECATED__autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories __declspec(deprecated)
#endif

namespace autoware_internal_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScoredCandidateTrajectories_
{
  using Type = ScoredCandidateTrajectories_<ContainerAllocator>;

  explicit ScoredCandidateTrajectories_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ScoredCandidateTrajectories_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _scored_candidate_trajectories_type =
    std::vector<autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory_<ContainerAllocator>>>;
  _scored_candidate_trajectories_type scored_candidate_trajectories;
  using _generator_info_type =
    std::vector<autoware_internal_planning_msgs::msg::GeneratorInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_internal_planning_msgs::msg::GeneratorInfo_<ContainerAllocator>>>;
  _generator_info_type generator_info;

  // setters for named parameter idiom
  Type & set__scored_candidate_trajectories(
    const std::vector<autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_internal_planning_msgs::msg::ScoredCandidateTrajectory_<ContainerAllocator>>> & _arg)
  {
    this->scored_candidate_trajectories = _arg;
    return *this;
  }
  Type & set__generator_info(
    const std::vector<autoware_internal_planning_msgs::msg::GeneratorInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_internal_planning_msgs::msg::GeneratorInfo_<ContainerAllocator>>> & _arg)
  {
    this->generator_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_internal_planning_msgs::msg::ScoredCandidateTrajectories_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_internal_planning_msgs::msg::ScoredCandidateTrajectories_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_internal_planning_msgs::msg::ScoredCandidateTrajectories_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_internal_planning_msgs::msg::ScoredCandidateTrajectories_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_internal_planning_msgs::msg::ScoredCandidateTrajectories_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_internal_planning_msgs::msg::ScoredCandidateTrajectories_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_internal_planning_msgs::msg::ScoredCandidateTrajectories_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_internal_planning_msgs::msg::ScoredCandidateTrajectories_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_internal_planning_msgs::msg::ScoredCandidateTrajectories_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_internal_planning_msgs::msg::ScoredCandidateTrajectories_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories
    std::shared_ptr<autoware_internal_planning_msgs::msg::ScoredCandidateTrajectories_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_internal_planning_msgs__msg__ScoredCandidateTrajectories
    std::shared_ptr<autoware_internal_planning_msgs::msg::ScoredCandidateTrajectories_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScoredCandidateTrajectories_ & other) const
  {
    if (this->scored_candidate_trajectories != other.scored_candidate_trajectories) {
      return false;
    }
    if (this->generator_info != other.generator_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScoredCandidateTrajectories_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScoredCandidateTrajectories_

// alias to use template instance with default allocator
using ScoredCandidateTrajectories =
  autoware_internal_planning_msgs::msg::ScoredCandidateTrajectories_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_internal_planning_msgs

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__MSG__DETAIL__SCORED_CANDIDATE_TRAJECTORIES__STRUCT_HPP_
