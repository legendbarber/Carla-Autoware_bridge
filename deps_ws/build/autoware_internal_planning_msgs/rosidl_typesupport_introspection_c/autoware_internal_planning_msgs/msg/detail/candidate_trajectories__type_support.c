// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_internal_planning_msgs:msg/CandidateTrajectories.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_internal_planning_msgs/msg/detail/candidate_trajectories__rosidl_typesupport_introspection_c.h"
#include "autoware_internal_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_internal_planning_msgs/msg/detail/candidate_trajectories__functions.h"
#include "autoware_internal_planning_msgs/msg/detail/candidate_trajectories__struct.h"


// Include directives for member types
// Member `candidate_trajectories`
#include "autoware_internal_planning_msgs/msg/candidate_trajectory.h"
// Member `candidate_trajectories`
#include "autoware_internal_planning_msgs/msg/detail/candidate_trajectory__rosidl_typesupport_introspection_c.h"
// Member `generator_info`
#include "autoware_internal_planning_msgs/msg/generator_info.h"
// Member `generator_info`
#include "autoware_internal_planning_msgs/msg/detail/generator_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__CandidateTrajectories_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_internal_planning_msgs__msg__CandidateTrajectories__init(message_memory);
}

void autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__CandidateTrajectories_fini_function(void * message_memory)
{
  autoware_internal_planning_msgs__msg__CandidateTrajectories__fini(message_memory);
}

size_t autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__size_function__CandidateTrajectories__candidate_trajectories(
  const void * untyped_member)
{
  const autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence * member =
    (const autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__get_const_function__CandidateTrajectories__candidate_trajectories(
  const void * untyped_member, size_t index)
{
  const autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence * member =
    (const autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__get_function__CandidateTrajectories__candidate_trajectories(
  void * untyped_member, size_t index)
{
  autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence * member =
    (autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__fetch_function__CandidateTrajectories__candidate_trajectories(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autoware_internal_planning_msgs__msg__CandidateTrajectory * item =
    ((const autoware_internal_planning_msgs__msg__CandidateTrajectory *)
    autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__get_const_function__CandidateTrajectories__candidate_trajectories(untyped_member, index));
  autoware_internal_planning_msgs__msg__CandidateTrajectory * value =
    (autoware_internal_planning_msgs__msg__CandidateTrajectory *)(untyped_value);
  *value = *item;
}

void autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__assign_function__CandidateTrajectories__candidate_trajectories(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autoware_internal_planning_msgs__msg__CandidateTrajectory * item =
    ((autoware_internal_planning_msgs__msg__CandidateTrajectory *)
    autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__get_function__CandidateTrajectories__candidate_trajectories(untyped_member, index));
  const autoware_internal_planning_msgs__msg__CandidateTrajectory * value =
    (const autoware_internal_planning_msgs__msg__CandidateTrajectory *)(untyped_value);
  *item = *value;
}

bool autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__resize_function__CandidateTrajectories__candidate_trajectories(
  void * untyped_member, size_t size)
{
  autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence * member =
    (autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence *)(untyped_member);
  autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence__fini(member);
  return autoware_internal_planning_msgs__msg__CandidateTrajectory__Sequence__init(member, size);
}

size_t autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__size_function__CandidateTrajectories__generator_info(
  const void * untyped_member)
{
  const autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence * member =
    (const autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__get_const_function__CandidateTrajectories__generator_info(
  const void * untyped_member, size_t index)
{
  const autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence * member =
    (const autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__get_function__CandidateTrajectories__generator_info(
  void * untyped_member, size_t index)
{
  autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence * member =
    (autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__fetch_function__CandidateTrajectories__generator_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autoware_internal_planning_msgs__msg__GeneratorInfo * item =
    ((const autoware_internal_planning_msgs__msg__GeneratorInfo *)
    autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__get_const_function__CandidateTrajectories__generator_info(untyped_member, index));
  autoware_internal_planning_msgs__msg__GeneratorInfo * value =
    (autoware_internal_planning_msgs__msg__GeneratorInfo *)(untyped_value);
  *value = *item;
}

void autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__assign_function__CandidateTrajectories__generator_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autoware_internal_planning_msgs__msg__GeneratorInfo * item =
    ((autoware_internal_planning_msgs__msg__GeneratorInfo *)
    autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__get_function__CandidateTrajectories__generator_info(untyped_member, index));
  const autoware_internal_planning_msgs__msg__GeneratorInfo * value =
    (const autoware_internal_planning_msgs__msg__GeneratorInfo *)(untyped_value);
  *item = *value;
}

bool autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__resize_function__CandidateTrajectories__generator_info(
  void * untyped_member, size_t size)
{
  autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence * member =
    (autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence *)(untyped_member);
  autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence__fini(member);
  return autoware_internal_planning_msgs__msg__GeneratorInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__CandidateTrajectories_message_member_array[2] = {
  {
    "candidate_trajectories",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_planning_msgs__msg__CandidateTrajectories, candidate_trajectories),  // bytes offset in struct
    NULL,  // default value
    autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__size_function__CandidateTrajectories__candidate_trajectories,  // size() function pointer
    autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__get_const_function__CandidateTrajectories__candidate_trajectories,  // get_const(index) function pointer
    autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__get_function__CandidateTrajectories__candidate_trajectories,  // get(index) function pointer
    autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__fetch_function__CandidateTrajectories__candidate_trajectories,  // fetch(index, &value) function pointer
    autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__assign_function__CandidateTrajectories__candidate_trajectories,  // assign(index, value) function pointer
    autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__resize_function__CandidateTrajectories__candidate_trajectories  // resize(index) function pointer
  },
  {
    "generator_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_planning_msgs__msg__CandidateTrajectories, generator_info),  // bytes offset in struct
    NULL,  // default value
    autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__size_function__CandidateTrajectories__generator_info,  // size() function pointer
    autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__get_const_function__CandidateTrajectories__generator_info,  // get_const(index) function pointer
    autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__get_function__CandidateTrajectories__generator_info,  // get(index) function pointer
    autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__fetch_function__CandidateTrajectories__generator_info,  // fetch(index, &value) function pointer
    autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__assign_function__CandidateTrajectories__generator_info,  // assign(index, value) function pointer
    autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__resize_function__CandidateTrajectories__generator_info  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__CandidateTrajectories_message_members = {
  "autoware_internal_planning_msgs__msg",  // message namespace
  "CandidateTrajectories",  // message name
  2,  // number of fields
  sizeof(autoware_internal_planning_msgs__msg__CandidateTrajectories),
  autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__CandidateTrajectories_message_member_array,  // message members
  autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__CandidateTrajectories_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__CandidateTrajectories_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__CandidateTrajectories_message_type_support_handle = {
  0,
  &autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__CandidateTrajectories_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_internal_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_internal_planning_msgs, msg, CandidateTrajectories)() {
  autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__CandidateTrajectories_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_internal_planning_msgs, msg, CandidateTrajectory)();
  autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__CandidateTrajectories_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_internal_planning_msgs, msg, GeneratorInfo)();
  if (!autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__CandidateTrajectories_message_type_support_handle.typesupport_identifier) {
    autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__CandidateTrajectories_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_internal_planning_msgs__msg__CandidateTrajectories__rosidl_typesupport_introspection_c__CandidateTrajectories_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
