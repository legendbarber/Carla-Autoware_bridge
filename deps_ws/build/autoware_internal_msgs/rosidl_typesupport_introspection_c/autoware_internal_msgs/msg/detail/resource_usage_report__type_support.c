// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_internal_msgs:msg/ResourceUsageReport.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_internal_msgs/msg/detail/resource_usage_report__rosidl_typesupport_introspection_c.h"
#include "autoware_internal_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_internal_msgs/msg/detail/resource_usage_report__functions.h"
#include "autoware_internal_msgs/msg/detail/resource_usage_report__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_internal_msgs__msg__ResourceUsageReport__rosidl_typesupport_introspection_c__ResourceUsageReport_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_internal_msgs__msg__ResourceUsageReport__init(message_memory);
}

void autoware_internal_msgs__msg__ResourceUsageReport__rosidl_typesupport_introspection_c__ResourceUsageReport_fini_function(void * message_memory)
{
  autoware_internal_msgs__msg__ResourceUsageReport__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_internal_msgs__msg__ResourceUsageReport__rosidl_typesupport_introspection_c__ResourceUsageReport_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_msgs__msg__ResourceUsageReport, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_msgs__msg__ResourceUsageReport, pid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cpu_cores_utilized",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_msgs__msg__ResourceUsageReport, cpu_cores_utilized),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "total_memory_bytes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_msgs__msg__ResourceUsageReport, total_memory_bytes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "free_memory_bytes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_msgs__msg__ResourceUsageReport, free_memory_bytes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "process_memory_bytes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_internal_msgs__msg__ResourceUsageReport, process_memory_bytes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_internal_msgs__msg__ResourceUsageReport__rosidl_typesupport_introspection_c__ResourceUsageReport_message_members = {
  "autoware_internal_msgs__msg",  // message namespace
  "ResourceUsageReport",  // message name
  6,  // number of fields
  sizeof(autoware_internal_msgs__msg__ResourceUsageReport),
  autoware_internal_msgs__msg__ResourceUsageReport__rosidl_typesupport_introspection_c__ResourceUsageReport_message_member_array,  // message members
  autoware_internal_msgs__msg__ResourceUsageReport__rosidl_typesupport_introspection_c__ResourceUsageReport_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_internal_msgs__msg__ResourceUsageReport__rosidl_typesupport_introspection_c__ResourceUsageReport_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_internal_msgs__msg__ResourceUsageReport__rosidl_typesupport_introspection_c__ResourceUsageReport_message_type_support_handle = {
  0,
  &autoware_internal_msgs__msg__ResourceUsageReport__rosidl_typesupport_introspection_c__ResourceUsageReport_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_internal_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_internal_msgs, msg, ResourceUsageReport)() {
  autoware_internal_msgs__msg__ResourceUsageReport__rosidl_typesupport_introspection_c__ResourceUsageReport_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!autoware_internal_msgs__msg__ResourceUsageReport__rosidl_typesupport_introspection_c__ResourceUsageReport_message_type_support_handle.typesupport_identifier) {
    autoware_internal_msgs__msg__ResourceUsageReport__rosidl_typesupport_introspection_c__ResourceUsageReport_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_internal_msgs__msg__ResourceUsageReport__rosidl_typesupport_introspection_c__ResourceUsageReport_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
