// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_internal_planning_msgs:msg/VelocityLimit.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_internal_planning_msgs/msg/detail/velocity_limit__rosidl_typesupport_introspection_c.h"
#include "autoware_internal_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_internal_planning_msgs/msg/detail/velocity_limit__functions.h"
#include "autoware_internal_planning_msgs/msg/detail/velocity_limit__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `constraints`
#include "autoware_internal_planning_msgs/msg/velocity_limit_constraints.h"
// Member `constraints`
#include "autoware_internal_planning_msgs/msg/detail/velocity_limit_constraints__rosidl_typesupport_introspection_c.h"
// Member `sender`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_internal_planning_msgs__msg__VelocityLimit__rosidl_typesupport_introspection_c__VelocityLimit_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_internal_planning_msgs__msg__VelocityLimit__init(message_memory);
}

void autoware_internal_planning_msgs__msg__VelocityLimit__rosidl_typesupport_introspection_c__VelocityLimit_fini_function(void * message_memory)
{
  autoware_internal_planning_msgs__msg__VelocityLimit__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_internal_planning_msgs__msg__VelocityLimit__rosidl_typesupport_introspection_c__VelocityLimit_message_member_array[5] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_planning_msgs__msg__VelocityLimit, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_planning_msgs__msg__VelocityLimit, max_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "use_constraints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_planning_msgs__msg__VelocityLimit, use_constraints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "constraints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_planning_msgs__msg__VelocityLimit, constraints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sender",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_planning_msgs__msg__VelocityLimit, sender),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_internal_planning_msgs__msg__VelocityLimit__rosidl_typesupport_introspection_c__VelocityLimit_message_members = {
  "autoware_internal_planning_msgs__msg",  // message namespace
  "VelocityLimit",  // message name
  5,  // number of fields
  sizeof(autoware_internal_planning_msgs__msg__VelocityLimit),
  autoware_internal_planning_msgs__msg__VelocityLimit__rosidl_typesupport_introspection_c__VelocityLimit_message_member_array,  // message members
  autoware_internal_planning_msgs__msg__VelocityLimit__rosidl_typesupport_introspection_c__VelocityLimit_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_internal_planning_msgs__msg__VelocityLimit__rosidl_typesupport_introspection_c__VelocityLimit_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_internal_planning_msgs__msg__VelocityLimit__rosidl_typesupport_introspection_c__VelocityLimit_message_type_support_handle = {
  0,
  &autoware_internal_planning_msgs__msg__VelocityLimit__rosidl_typesupport_introspection_c__VelocityLimit_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_internal_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_internal_planning_msgs, msg, VelocityLimit)() {
  autoware_internal_planning_msgs__msg__VelocityLimit__rosidl_typesupport_introspection_c__VelocityLimit_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  autoware_internal_planning_msgs__msg__VelocityLimit__rosidl_typesupport_introspection_c__VelocityLimit_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_internal_planning_msgs, msg, VelocityLimitConstraints)();
  if (!autoware_internal_planning_msgs__msg__VelocityLimit__rosidl_typesupport_introspection_c__VelocityLimit_message_type_support_handle.typesupport_identifier) {
    autoware_internal_planning_msgs__msg__VelocityLimit__rosidl_typesupport_introspection_c__VelocityLimit_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_internal_planning_msgs__msg__VelocityLimit__rosidl_typesupport_introspection_c__VelocityLimit_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
