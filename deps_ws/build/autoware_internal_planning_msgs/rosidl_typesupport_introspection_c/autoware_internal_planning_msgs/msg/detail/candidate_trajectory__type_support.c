// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_internal_planning_msgs:msg/CandidateTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_internal_planning_msgs/msg/detail/candidate_trajectory__rosidl_typesupport_introspection_c.h"
#include "autoware_internal_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_internal_planning_msgs/msg/detail/candidate_trajectory__functions.h"
#include "autoware_internal_planning_msgs/msg/detail/candidate_trajectory__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `generator_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `generator_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `points`
#include "autoware_planning_msgs/msg/trajectory_point.h"
// Member `points`
#include "autoware_planning_msgs/msg/detail/trajectory_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_internal_planning_msgs__msg__CandidateTrajectory__rosidl_typesupport_introspection_c__CandidateTrajectory_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_internal_planning_msgs__msg__CandidateTrajectory__init(message_memory);
}

void autoware_internal_planning_msgs__msg__CandidateTrajectory__rosidl_typesupport_introspection_c__CandidateTrajectory_fini_function(void * message_memory)
{
  autoware_internal_planning_msgs__msg__CandidateTrajectory__fini(message_memory);
}

size_t autoware_internal_planning_msgs__msg__CandidateTrajectory__rosidl_typesupport_introspection_c__size_function__CandidateTrajectory__points(
  const void * untyped_member)
{
  const autoware_planning_msgs__msg__TrajectoryPoint__Sequence * member =
    (const autoware_planning_msgs__msg__TrajectoryPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_internal_planning_msgs__msg__CandidateTrajectory__rosidl_typesupport_introspection_c__get_const_function__CandidateTrajectory__points(
  const void * untyped_member, size_t index)
{
  const autoware_planning_msgs__msg__TrajectoryPoint__Sequence * member =
    (const autoware_planning_msgs__msg__TrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_internal_planning_msgs__msg__CandidateTrajectory__rosidl_typesupport_introspection_c__get_function__CandidateTrajectory__points(
  void * untyped_member, size_t index)
{
  autoware_planning_msgs__msg__TrajectoryPoint__Sequence * member =
    (autoware_planning_msgs__msg__TrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_internal_planning_msgs__msg__CandidateTrajectory__rosidl_typesupport_introspection_c__fetch_function__CandidateTrajectory__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autoware_planning_msgs__msg__TrajectoryPoint * item =
    ((const autoware_planning_msgs__msg__TrajectoryPoint *)
    autoware_internal_planning_msgs__msg__CandidateTrajectory__rosidl_typesupport_introspection_c__get_const_function__CandidateTrajectory__points(untyped_member, index));
  autoware_planning_msgs__msg__TrajectoryPoint * value =
    (autoware_planning_msgs__msg__TrajectoryPoint *)(untyped_value);
  *value = *item;
}

void autoware_internal_planning_msgs__msg__CandidateTrajectory__rosidl_typesupport_introspection_c__assign_function__CandidateTrajectory__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autoware_planning_msgs__msg__TrajectoryPoint * item =
    ((autoware_planning_msgs__msg__TrajectoryPoint *)
    autoware_internal_planning_msgs__msg__CandidateTrajectory__rosidl_typesupport_introspection_c__get_function__CandidateTrajectory__points(untyped_member, index));
  const autoware_planning_msgs__msg__TrajectoryPoint * value =
    (const autoware_planning_msgs__msg__TrajectoryPoint *)(untyped_value);
  *item = *value;
}

bool autoware_internal_planning_msgs__msg__CandidateTrajectory__rosidl_typesupport_introspection_c__resize_function__CandidateTrajectory__points(
  void * untyped_member, size_t size)
{
  autoware_planning_msgs__msg__TrajectoryPoint__Sequence * member =
    (autoware_planning_msgs__msg__TrajectoryPoint__Sequence *)(untyped_member);
  autoware_planning_msgs__msg__TrajectoryPoint__Sequence__fini(member);
  return autoware_planning_msgs__msg__TrajectoryPoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_internal_planning_msgs__msg__CandidateTrajectory__rosidl_typesupport_introspection_c__CandidateTrajectory_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_planning_msgs__msg__CandidateTrajectory, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "generator_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_planning_msgs__msg__CandidateTrajectory, generator_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_planning_msgs__msg__CandidateTrajectory, points),  // bytes offset in struct
    NULL,  // default value
    autoware_internal_planning_msgs__msg__CandidateTrajectory__rosidl_typesupport_introspection_c__size_function__CandidateTrajectory__points,  // size() function pointer
    autoware_internal_planning_msgs__msg__CandidateTrajectory__rosidl_typesupport_introspection_c__get_const_function__CandidateTrajectory__points,  // get_const(index) function pointer
    autoware_internal_planning_msgs__msg__CandidateTrajectory__rosidl_typesupport_introspection_c__get_function__CandidateTrajectory__points,  // get(index) function pointer
    autoware_internal_planning_msgs__msg__CandidateTrajectory__rosidl_typesupport_introspection_c__fetch_function__CandidateTrajectory__points,  // fetch(index, &value) function pointer
    autoware_internal_planning_msgs__msg__CandidateTrajectory__rosidl_typesupport_introspection_c__assign_function__CandidateTrajectory__points,  // assign(index, value) function pointer
    autoware_internal_planning_msgs__msg__CandidateTrajectory__rosidl_typesupport_introspection_c__resize_function__CandidateTrajectory__points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_internal_planning_msgs__msg__CandidateTrajectory__rosidl_typesupport_introspection_c__CandidateTrajectory_message_members = {
  "autoware_internal_planning_msgs__msg",  // message namespace
  "CandidateTrajectory",  // message name
  3,  // number of fields
  sizeof(autoware_internal_planning_msgs__msg__CandidateTrajectory),
  autoware_internal_planning_msgs__msg__CandidateTrajectory__rosidl_typesupport_introspection_c__CandidateTrajectory_message_member_array,  // message members
  autoware_internal_planning_msgs__msg__CandidateTrajectory__rosidl_typesupport_introspection_c__CandidateTrajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_internal_planning_msgs__msg__CandidateTrajectory__rosidl_typesupport_introspection_c__CandidateTrajectory_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_internal_planning_msgs__msg__CandidateTrajectory__rosidl_typesupport_introspection_c__CandidateTrajectory_message_type_support_handle = {
  0,
  &autoware_internal_planning_msgs__msg__CandidateTrajectory__rosidl_typesupport_introspection_c__CandidateTrajectory_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_internal_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_internal_planning_msgs, msg, CandidateTrajectory)() {
  autoware_internal_planning_msgs__msg__CandidateTrajectory__rosidl_typesupport_introspection_c__CandidateTrajectory_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  autoware_internal_planning_msgs__msg__CandidateTrajectory__rosidl_typesupport_introspection_c__CandidateTrajectory_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  autoware_internal_planning_msgs__msg__CandidateTrajectory__rosidl_typesupport_introspection_c__CandidateTrajectory_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_planning_msgs, msg, TrajectoryPoint)();
  if (!autoware_internal_planning_msgs__msg__CandidateTrajectory__rosidl_typesupport_introspection_c__CandidateTrajectory_message_type_support_handle.typesupport_identifier) {
    autoware_internal_planning_msgs__msg__CandidateTrajectory__rosidl_typesupport_introspection_c__CandidateTrajectory_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_internal_planning_msgs__msg__CandidateTrajectory__rosidl_typesupport_introspection_c__CandidateTrajectory_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
