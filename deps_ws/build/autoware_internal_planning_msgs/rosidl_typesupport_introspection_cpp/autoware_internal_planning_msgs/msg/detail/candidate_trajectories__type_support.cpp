// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from autoware_internal_planning_msgs:msg/CandidateTrajectories.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "autoware_internal_planning_msgs/msg/detail/candidate_trajectories__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autoware_internal_planning_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CandidateTrajectories_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autoware_internal_planning_msgs::msg::CandidateTrajectories(_init);
}

void CandidateTrajectories_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autoware_internal_planning_msgs::msg::CandidateTrajectories *>(message_memory);
  typed_message->~CandidateTrajectories();
}

size_t size_function__CandidateTrajectories__candidate_trajectories(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<autoware_internal_planning_msgs::msg::CandidateTrajectory> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CandidateTrajectories__candidate_trajectories(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<autoware_internal_planning_msgs::msg::CandidateTrajectory> *>(untyped_member);
  return &member[index];
}

void * get_function__CandidateTrajectories__candidate_trajectories(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<autoware_internal_planning_msgs::msg::CandidateTrajectory> *>(untyped_member);
  return &member[index];
}

void fetch_function__CandidateTrajectories__candidate_trajectories(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const autoware_internal_planning_msgs::msg::CandidateTrajectory *>(
    get_const_function__CandidateTrajectories__candidate_trajectories(untyped_member, index));
  auto & value = *reinterpret_cast<autoware_internal_planning_msgs::msg::CandidateTrajectory *>(untyped_value);
  value = item;
}

void assign_function__CandidateTrajectories__candidate_trajectories(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<autoware_internal_planning_msgs::msg::CandidateTrajectory *>(
    get_function__CandidateTrajectories__candidate_trajectories(untyped_member, index));
  const auto & value = *reinterpret_cast<const autoware_internal_planning_msgs::msg::CandidateTrajectory *>(untyped_value);
  item = value;
}

void resize_function__CandidateTrajectories__candidate_trajectories(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<autoware_internal_planning_msgs::msg::CandidateTrajectory> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CandidateTrajectories__generator_info(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<autoware_internal_planning_msgs::msg::GeneratorInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CandidateTrajectories__generator_info(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<autoware_internal_planning_msgs::msg::GeneratorInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__CandidateTrajectories__generator_info(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<autoware_internal_planning_msgs::msg::GeneratorInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__CandidateTrajectories__generator_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const autoware_internal_planning_msgs::msg::GeneratorInfo *>(
    get_const_function__CandidateTrajectories__generator_info(untyped_member, index));
  auto & value = *reinterpret_cast<autoware_internal_planning_msgs::msg::GeneratorInfo *>(untyped_value);
  value = item;
}

void assign_function__CandidateTrajectories__generator_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<autoware_internal_planning_msgs::msg::GeneratorInfo *>(
    get_function__CandidateTrajectories__generator_info(untyped_member, index));
  const auto & value = *reinterpret_cast<const autoware_internal_planning_msgs::msg::GeneratorInfo *>(untyped_value);
  item = value;
}

void resize_function__CandidateTrajectories__generator_info(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<autoware_internal_planning_msgs::msg::GeneratorInfo> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CandidateTrajectories_message_member_array[2] = {
  {
    "candidate_trajectories",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autoware_internal_planning_msgs::msg::CandidateTrajectory>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_planning_msgs::msg::CandidateTrajectories, candidate_trajectories),  // bytes offset in struct
    nullptr,  // default value
    size_function__CandidateTrajectories__candidate_trajectories,  // size() function pointer
    get_const_function__CandidateTrajectories__candidate_trajectories,  // get_const(index) function pointer
    get_function__CandidateTrajectories__candidate_trajectories,  // get(index) function pointer
    fetch_function__CandidateTrajectories__candidate_trajectories,  // fetch(index, &value) function pointer
    assign_function__CandidateTrajectories__candidate_trajectories,  // assign(index, value) function pointer
    resize_function__CandidateTrajectories__candidate_trajectories  // resize(index) function pointer
  },
  {
    "generator_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autoware_internal_planning_msgs::msg::GeneratorInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_planning_msgs::msg::CandidateTrajectories, generator_info),  // bytes offset in struct
    nullptr,  // default value
    size_function__CandidateTrajectories__generator_info,  // size() function pointer
    get_const_function__CandidateTrajectories__generator_info,  // get_const(index) function pointer
    get_function__CandidateTrajectories__generator_info,  // get(index) function pointer
    fetch_function__CandidateTrajectories__generator_info,  // fetch(index, &value) function pointer
    assign_function__CandidateTrajectories__generator_info,  // assign(index, value) function pointer
    resize_function__CandidateTrajectories__generator_info  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CandidateTrajectories_message_members = {
  "autoware_internal_planning_msgs::msg",  // message namespace
  "CandidateTrajectories",  // message name
  2,  // number of fields
  sizeof(autoware_internal_planning_msgs::msg::CandidateTrajectories),
  CandidateTrajectories_message_member_array,  // message members
  CandidateTrajectories_init_function,  // function to initialize message memory (memory has to be allocated)
  CandidateTrajectories_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CandidateTrajectories_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CandidateTrajectories_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace autoware_internal_planning_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_internal_planning_msgs::msg::CandidateTrajectories>()
{
  return &::autoware_internal_planning_msgs::msg::rosidl_typesupport_introspection_cpp::CandidateTrajectories_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autoware_internal_planning_msgs, msg, CandidateTrajectories)() {
  return &::autoware_internal_planning_msgs::msg::rosidl_typesupport_introspection_cpp::CandidateTrajectories_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
