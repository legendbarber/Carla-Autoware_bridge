// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_internal_planning_msgs:msg/SafetyFactorArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_internal_planning_msgs/msg/detail/safety_factor_array__rosidl_typesupport_introspection_c.h"
#include "autoware_internal_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_internal_planning_msgs/msg/detail/safety_factor_array__functions.h"
#include "autoware_internal_planning_msgs/msg/detail/safety_factor_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `factors`
#include "autoware_internal_planning_msgs/msg/safety_factor.h"
// Member `factors`
#include "autoware_internal_planning_msgs/msg/detail/safety_factor__rosidl_typesupport_introspection_c.h"
// Member `detail`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_internal_planning_msgs__msg__SafetyFactorArray__rosidl_typesupport_introspection_c__SafetyFactorArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_internal_planning_msgs__msg__SafetyFactorArray__init(message_memory);
}

void autoware_internal_planning_msgs__msg__SafetyFactorArray__rosidl_typesupport_introspection_c__SafetyFactorArray_fini_function(void * message_memory)
{
  autoware_internal_planning_msgs__msg__SafetyFactorArray__fini(message_memory);
}

size_t autoware_internal_planning_msgs__msg__SafetyFactorArray__rosidl_typesupport_introspection_c__size_function__SafetyFactorArray__factors(
  const void * untyped_member)
{
  const autoware_internal_planning_msgs__msg__SafetyFactor__Sequence * member =
    (const autoware_internal_planning_msgs__msg__SafetyFactor__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_internal_planning_msgs__msg__SafetyFactorArray__rosidl_typesupport_introspection_c__get_const_function__SafetyFactorArray__factors(
  const void * untyped_member, size_t index)
{
  const autoware_internal_planning_msgs__msg__SafetyFactor__Sequence * member =
    (const autoware_internal_planning_msgs__msg__SafetyFactor__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_internal_planning_msgs__msg__SafetyFactorArray__rosidl_typesupport_introspection_c__get_function__SafetyFactorArray__factors(
  void * untyped_member, size_t index)
{
  autoware_internal_planning_msgs__msg__SafetyFactor__Sequence * member =
    (autoware_internal_planning_msgs__msg__SafetyFactor__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_internal_planning_msgs__msg__SafetyFactorArray__rosidl_typesupport_introspection_c__fetch_function__SafetyFactorArray__factors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autoware_internal_planning_msgs__msg__SafetyFactor * item =
    ((const autoware_internal_planning_msgs__msg__SafetyFactor *)
    autoware_internal_planning_msgs__msg__SafetyFactorArray__rosidl_typesupport_introspection_c__get_const_function__SafetyFactorArray__factors(untyped_member, index));
  autoware_internal_planning_msgs__msg__SafetyFactor * value =
    (autoware_internal_planning_msgs__msg__SafetyFactor *)(untyped_value);
  *value = *item;
}

void autoware_internal_planning_msgs__msg__SafetyFactorArray__rosidl_typesupport_introspection_c__assign_function__SafetyFactorArray__factors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autoware_internal_planning_msgs__msg__SafetyFactor * item =
    ((autoware_internal_planning_msgs__msg__SafetyFactor *)
    autoware_internal_planning_msgs__msg__SafetyFactorArray__rosidl_typesupport_introspection_c__get_function__SafetyFactorArray__factors(untyped_member, index));
  const autoware_internal_planning_msgs__msg__SafetyFactor * value =
    (const autoware_internal_planning_msgs__msg__SafetyFactor *)(untyped_value);
  *item = *value;
}

bool autoware_internal_planning_msgs__msg__SafetyFactorArray__rosidl_typesupport_introspection_c__resize_function__SafetyFactorArray__factors(
  void * untyped_member, size_t size)
{
  autoware_internal_planning_msgs__msg__SafetyFactor__Sequence * member =
    (autoware_internal_planning_msgs__msg__SafetyFactor__Sequence *)(untyped_member);
  autoware_internal_planning_msgs__msg__SafetyFactor__Sequence__fini(member);
  return autoware_internal_planning_msgs__msg__SafetyFactor__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_internal_planning_msgs__msg__SafetyFactorArray__rosidl_typesupport_introspection_c__SafetyFactorArray_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_planning_msgs__msg__SafetyFactorArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "factors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_planning_msgs__msg__SafetyFactorArray, factors),  // bytes offset in struct
    NULL,  // default value
    autoware_internal_planning_msgs__msg__SafetyFactorArray__rosidl_typesupport_introspection_c__size_function__SafetyFactorArray__factors,  // size() function pointer
    autoware_internal_planning_msgs__msg__SafetyFactorArray__rosidl_typesupport_introspection_c__get_const_function__SafetyFactorArray__factors,  // get_const(index) function pointer
    autoware_internal_planning_msgs__msg__SafetyFactorArray__rosidl_typesupport_introspection_c__get_function__SafetyFactorArray__factors,  // get(index) function pointer
    autoware_internal_planning_msgs__msg__SafetyFactorArray__rosidl_typesupport_introspection_c__fetch_function__SafetyFactorArray__factors,  // fetch(index, &value) function pointer
    autoware_internal_planning_msgs__msg__SafetyFactorArray__rosidl_typesupport_introspection_c__assign_function__SafetyFactorArray__factors,  // assign(index, value) function pointer
    autoware_internal_planning_msgs__msg__SafetyFactorArray__rosidl_typesupport_introspection_c__resize_function__SafetyFactorArray__factors  // resize(index) function pointer
  },
  {
    "is_safe",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_planning_msgs__msg__SafetyFactorArray, is_safe),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detail",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_planning_msgs__msg__SafetyFactorArray, detail),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_internal_planning_msgs__msg__SafetyFactorArray__rosidl_typesupport_introspection_c__SafetyFactorArray_message_members = {
  "autoware_internal_planning_msgs__msg",  // message namespace
  "SafetyFactorArray",  // message name
  4,  // number of fields
  sizeof(autoware_internal_planning_msgs__msg__SafetyFactorArray),
  autoware_internal_planning_msgs__msg__SafetyFactorArray__rosidl_typesupport_introspection_c__SafetyFactorArray_message_member_array,  // message members
  autoware_internal_planning_msgs__msg__SafetyFactorArray__rosidl_typesupport_introspection_c__SafetyFactorArray_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_internal_planning_msgs__msg__SafetyFactorArray__rosidl_typesupport_introspection_c__SafetyFactorArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_internal_planning_msgs__msg__SafetyFactorArray__rosidl_typesupport_introspection_c__SafetyFactorArray_message_type_support_handle = {
  0,
  &autoware_internal_planning_msgs__msg__SafetyFactorArray__rosidl_typesupport_introspection_c__SafetyFactorArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_internal_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_internal_planning_msgs, msg, SafetyFactorArray)() {
  autoware_internal_planning_msgs__msg__SafetyFactorArray__rosidl_typesupport_introspection_c__SafetyFactorArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  autoware_internal_planning_msgs__msg__SafetyFactorArray__rosidl_typesupport_introspection_c__SafetyFactorArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_internal_planning_msgs, msg, SafetyFactor)();
  if (!autoware_internal_planning_msgs__msg__SafetyFactorArray__rosidl_typesupport_introspection_c__SafetyFactorArray_message_type_support_handle.typesupport_identifier) {
    autoware_internal_planning_msgs__msg__SafetyFactorArray__rosidl_typesupport_introspection_c__SafetyFactorArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_internal_planning_msgs__msg__SafetyFactorArray__rosidl_typesupport_introspection_c__SafetyFactorArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
