// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_internal_planning_msgs:msg/SafetyFactor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_internal_planning_msgs/msg/detail/safety_factor__rosidl_typesupport_introspection_c.h"
#include "autoware_internal_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_internal_planning_msgs/msg/detail/safety_factor__functions.h"
#include "autoware_internal_planning_msgs/msg/detail/safety_factor__struct.h"


// Include directives for member types
// Member `object_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `object_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `predicted_path`
#include "autoware_perception_msgs/msg/predicted_path.h"
// Member `predicted_path`
#include "autoware_perception_msgs/msg/detail/predicted_path__rosidl_typesupport_introspection_c.h"
// Member `points`
#include "geometry_msgs/msg/point.h"
// Member `points`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_internal_planning_msgs__msg__SafetyFactor__rosidl_typesupport_introspection_c__SafetyFactor_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_internal_planning_msgs__msg__SafetyFactor__init(message_memory);
}

void autoware_internal_planning_msgs__msg__SafetyFactor__rosidl_typesupport_introspection_c__SafetyFactor_fini_function(void * message_memory)
{
  autoware_internal_planning_msgs__msg__SafetyFactor__fini(message_memory);
}

size_t autoware_internal_planning_msgs__msg__SafetyFactor__rosidl_typesupport_introspection_c__size_function__SafetyFactor__points(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_internal_planning_msgs__msg__SafetyFactor__rosidl_typesupport_introspection_c__get_const_function__SafetyFactor__points(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_internal_planning_msgs__msg__SafetyFactor__rosidl_typesupport_introspection_c__get_function__SafetyFactor__points(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_internal_planning_msgs__msg__SafetyFactor__rosidl_typesupport_introspection_c__fetch_function__SafetyFactor__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    autoware_internal_planning_msgs__msg__SafetyFactor__rosidl_typesupport_introspection_c__get_const_function__SafetyFactor__points(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void autoware_internal_planning_msgs__msg__SafetyFactor__rosidl_typesupport_introspection_c__assign_function__SafetyFactor__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    autoware_internal_planning_msgs__msg__SafetyFactor__rosidl_typesupport_introspection_c__get_function__SafetyFactor__points(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool autoware_internal_planning_msgs__msg__SafetyFactor__rosidl_typesupport_introspection_c__resize_function__SafetyFactor__points(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_internal_planning_msgs__msg__SafetyFactor__rosidl_typesupport_introspection_c__SafetyFactor_message_member_array[7] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_planning_msgs__msg__SafetyFactor, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_planning_msgs__msg__SafetyFactor, object_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "predicted_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_planning_msgs__msg__SafetyFactor, predicted_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ttc_begin",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_planning_msgs__msg__SafetyFactor, ttc_begin),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ttc_end",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_planning_msgs__msg__SafetyFactor, ttc_end),  // bytes offset in struct
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
    offsetof(autoware_internal_planning_msgs__msg__SafetyFactor, points),  // bytes offset in struct
    NULL,  // default value
    autoware_internal_planning_msgs__msg__SafetyFactor__rosidl_typesupport_introspection_c__size_function__SafetyFactor__points,  // size() function pointer
    autoware_internal_planning_msgs__msg__SafetyFactor__rosidl_typesupport_introspection_c__get_const_function__SafetyFactor__points,  // get_const(index) function pointer
    autoware_internal_planning_msgs__msg__SafetyFactor__rosidl_typesupport_introspection_c__get_function__SafetyFactor__points,  // get(index) function pointer
    autoware_internal_planning_msgs__msg__SafetyFactor__rosidl_typesupport_introspection_c__fetch_function__SafetyFactor__points,  // fetch(index, &value) function pointer
    autoware_internal_planning_msgs__msg__SafetyFactor__rosidl_typesupport_introspection_c__assign_function__SafetyFactor__points,  // assign(index, value) function pointer
    autoware_internal_planning_msgs__msg__SafetyFactor__rosidl_typesupport_introspection_c__resize_function__SafetyFactor__points  // resize(index) function pointer
  },
  {
    "is_safe",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_planning_msgs__msg__SafetyFactor, is_safe),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_internal_planning_msgs__msg__SafetyFactor__rosidl_typesupport_introspection_c__SafetyFactor_message_members = {
  "autoware_internal_planning_msgs__msg",  // message namespace
  "SafetyFactor",  // message name
  7,  // number of fields
  sizeof(autoware_internal_planning_msgs__msg__SafetyFactor),
  autoware_internal_planning_msgs__msg__SafetyFactor__rosidl_typesupport_introspection_c__SafetyFactor_message_member_array,  // message members
  autoware_internal_planning_msgs__msg__SafetyFactor__rosidl_typesupport_introspection_c__SafetyFactor_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_internal_planning_msgs__msg__SafetyFactor__rosidl_typesupport_introspection_c__SafetyFactor_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_internal_planning_msgs__msg__SafetyFactor__rosidl_typesupport_introspection_c__SafetyFactor_message_type_support_handle = {
  0,
  &autoware_internal_planning_msgs__msg__SafetyFactor__rosidl_typesupport_introspection_c__SafetyFactor_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_internal_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_internal_planning_msgs, msg, SafetyFactor)() {
  autoware_internal_planning_msgs__msg__SafetyFactor__rosidl_typesupport_introspection_c__SafetyFactor_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  autoware_internal_planning_msgs__msg__SafetyFactor__rosidl_typesupport_introspection_c__SafetyFactor_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_perception_msgs, msg, PredictedPath)();
  autoware_internal_planning_msgs__msg__SafetyFactor__rosidl_typesupport_introspection_c__SafetyFactor_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!autoware_internal_planning_msgs__msg__SafetyFactor__rosidl_typesupport_introspection_c__SafetyFactor_message_type_support_handle.typesupport_identifier) {
    autoware_internal_planning_msgs__msg__SafetyFactor__rosidl_typesupport_introspection_c__SafetyFactor_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_internal_planning_msgs__msg__SafetyFactor__rosidl_typesupport_introspection_c__SafetyFactor_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
