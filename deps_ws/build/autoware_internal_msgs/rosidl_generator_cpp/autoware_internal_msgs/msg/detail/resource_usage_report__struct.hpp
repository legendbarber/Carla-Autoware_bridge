// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_internal_msgs:msg/ResourceUsageReport.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__RESOURCE_USAGE_REPORT__STRUCT_HPP_
#define AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__RESOURCE_USAGE_REPORT__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__autoware_internal_msgs__msg__ResourceUsageReport __attribute__((deprecated))
#else
# define DEPRECATED__autoware_internal_msgs__msg__ResourceUsageReport __declspec(deprecated)
#endif

namespace autoware_internal_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ResourceUsageReport_
{
  using Type = ResourceUsageReport_<ContainerAllocator>;

  explicit ResourceUsageReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pid = 0ul;
      this->cpu_cores_utilized = 0.0f;
      this->total_memory_bytes = 0ull;
      this->free_memory_bytes = 0ull;
      this->process_memory_bytes = 0ull;
    }
  }

  explicit ResourceUsageReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pid = 0ul;
      this->cpu_cores_utilized = 0.0f;
      this->total_memory_bytes = 0ull;
      this->free_memory_bytes = 0ull;
      this->process_memory_bytes = 0ull;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pid_type =
    uint32_t;
  _pid_type pid;
  using _cpu_cores_utilized_type =
    float;
  _cpu_cores_utilized_type cpu_cores_utilized;
  using _total_memory_bytes_type =
    uint64_t;
  _total_memory_bytes_type total_memory_bytes;
  using _free_memory_bytes_type =
    uint64_t;
  _free_memory_bytes_type free_memory_bytes;
  using _process_memory_bytes_type =
    uint64_t;
  _process_memory_bytes_type process_memory_bytes;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pid(
    const uint32_t & _arg)
  {
    this->pid = _arg;
    return *this;
  }
  Type & set__cpu_cores_utilized(
    const float & _arg)
  {
    this->cpu_cores_utilized = _arg;
    return *this;
  }
  Type & set__total_memory_bytes(
    const uint64_t & _arg)
  {
    this->total_memory_bytes = _arg;
    return *this;
  }
  Type & set__free_memory_bytes(
    const uint64_t & _arg)
  {
    this->free_memory_bytes = _arg;
    return *this;
  }
  Type & set__process_memory_bytes(
    const uint64_t & _arg)
  {
    this->process_memory_bytes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_internal_msgs::msg::ResourceUsageReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_internal_msgs::msg::ResourceUsageReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_internal_msgs::msg::ResourceUsageReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_internal_msgs::msg::ResourceUsageReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_internal_msgs::msg::ResourceUsageReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_internal_msgs::msg::ResourceUsageReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_internal_msgs::msg::ResourceUsageReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_internal_msgs::msg::ResourceUsageReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_internal_msgs::msg::ResourceUsageReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_internal_msgs::msg::ResourceUsageReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_internal_msgs__msg__ResourceUsageReport
    std::shared_ptr<autoware_internal_msgs::msg::ResourceUsageReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_internal_msgs__msg__ResourceUsageReport
    std::shared_ptr<autoware_internal_msgs::msg::ResourceUsageReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResourceUsageReport_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pid != other.pid) {
      return false;
    }
    if (this->cpu_cores_utilized != other.cpu_cores_utilized) {
      return false;
    }
    if (this->total_memory_bytes != other.total_memory_bytes) {
      return false;
    }
    if (this->free_memory_bytes != other.free_memory_bytes) {
      return false;
    }
    if (this->process_memory_bytes != other.process_memory_bytes) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResourceUsageReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResourceUsageReport_

// alias to use template instance with default allocator
using ResourceUsageReport =
  autoware_internal_msgs::msg::ResourceUsageReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_internal_msgs

#endif  // AUTOWARE_INTERNAL_MSGS__MSG__DETAIL__RESOURCE_USAGE_REPORT__STRUCT_HPP_
