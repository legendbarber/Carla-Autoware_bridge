// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_perception_msgs:msg/PredictedTrafficLightState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_perception_msgs/msg/detail/predicted_traffic_light_state__rosidl_typesupport_introspection_c.h"
#include "autoware_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_perception_msgs/msg/detail/predicted_traffic_light_state__functions.h"
#include "autoware_perception_msgs/msg/detail/predicted_traffic_light_state__struct.h"


// Include directives for member types
// Member `predicted_stamp`
#include "builtin_interfaces/msg/time.h"
// Member `predicted_stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `simultaneous_elements`
#include "autoware_perception_msgs/msg/traffic_light_element.h"
// Member `simultaneous_elements`
#include "autoware_perception_msgs/msg/detail/traffic_light_element__rosidl_typesupport_introspection_c.h"
// Member `information_source`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_perception_msgs__msg__PredictedTrafficLightState__rosidl_typesupport_introspection_c__PredictedTrafficLightState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_perception_msgs__msg__PredictedTrafficLightState__init(message_memory);
}

void autoware_perception_msgs__msg__PredictedTrafficLightState__rosidl_typesupport_introspection_c__PredictedTrafficLightState_fini_function(void * message_memory)
{
  autoware_perception_msgs__msg__PredictedTrafficLightState__fini(message_memory);
}

size_t autoware_perception_msgs__msg__PredictedTrafficLightState__rosidl_typesupport_introspection_c__size_function__PredictedTrafficLightState__simultaneous_elements(
  const void * untyped_member)
{
  const autoware_perception_msgs__msg__TrafficLightElement__Sequence * member =
    (const autoware_perception_msgs__msg__TrafficLightElement__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_perception_msgs__msg__PredictedTrafficLightState__rosidl_typesupport_introspection_c__get_const_function__PredictedTrafficLightState__simultaneous_elements(
  const void * untyped_member, size_t index)
{
  const autoware_perception_msgs__msg__TrafficLightElement__Sequence * member =
    (const autoware_perception_msgs__msg__TrafficLightElement__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_perception_msgs__msg__PredictedTrafficLightState__rosidl_typesupport_introspection_c__get_function__PredictedTrafficLightState__simultaneous_elements(
  void * untyped_member, size_t index)
{
  autoware_perception_msgs__msg__TrafficLightElement__Sequence * member =
    (autoware_perception_msgs__msg__TrafficLightElement__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_perception_msgs__msg__PredictedTrafficLightState__rosidl_typesupport_introspection_c__fetch_function__PredictedTrafficLightState__simultaneous_elements(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autoware_perception_msgs__msg__TrafficLightElement * item =
    ((const autoware_perception_msgs__msg__TrafficLightElement *)
    autoware_perception_msgs__msg__PredictedTrafficLightState__rosidl_typesupport_introspection_c__get_const_function__PredictedTrafficLightState__simultaneous_elements(untyped_member, index));
  autoware_perception_msgs__msg__TrafficLightElement * value =
    (autoware_perception_msgs__msg__TrafficLightElement *)(untyped_value);
  *value = *item;
}

void autoware_perception_msgs__msg__PredictedTrafficLightState__rosidl_typesupport_introspection_c__assign_function__PredictedTrafficLightState__simultaneous_elements(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autoware_perception_msgs__msg__TrafficLightElement * item =
    ((autoware_perception_msgs__msg__TrafficLightElement *)
    autoware_perception_msgs__msg__PredictedTrafficLightState__rosidl_typesupport_introspection_c__get_function__PredictedTrafficLightState__simultaneous_elements(untyped_member, index));
  const autoware_perception_msgs__msg__TrafficLightElement * value =
    (const autoware_perception_msgs__msg__TrafficLightElement *)(untyped_value);
  *item = *value;
}

bool autoware_perception_msgs__msg__PredictedTrafficLightState__rosidl_typesupport_introspection_c__resize_function__PredictedTrafficLightState__simultaneous_elements(
  void * untyped_member, size_t size)
{
  autoware_perception_msgs__msg__TrafficLightElement__Sequence * member =
    (autoware_perception_msgs__msg__TrafficLightElement__Sequence *)(untyped_member);
  autoware_perception_msgs__msg__TrafficLightElement__Sequence__fini(member);
  return autoware_perception_msgs__msg__TrafficLightElement__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_perception_msgs__msg__PredictedTrafficLightState__rosidl_typesupport_introspection_c__PredictedTrafficLightState_message_member_array[4] = {
  {
    "predicted_stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_perception_msgs__msg__PredictedTrafficLightState, predicted_stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "simultaneous_elements",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_perception_msgs__msg__PredictedTrafficLightState, simultaneous_elements),  // bytes offset in struct
    NULL,  // default value
    autoware_perception_msgs__msg__PredictedTrafficLightState__rosidl_typesupport_introspection_c__size_function__PredictedTrafficLightState__simultaneous_elements,  // size() function pointer
    autoware_perception_msgs__msg__PredictedTrafficLightState__rosidl_typesupport_introspection_c__get_const_function__PredictedTrafficLightState__simultaneous_elements,  // get_const(index) function pointer
    autoware_perception_msgs__msg__PredictedTrafficLightState__rosidl_typesupport_introspection_c__get_function__PredictedTrafficLightState__simultaneous_elements,  // get(index) function pointer
    autoware_perception_msgs__msg__PredictedTrafficLightState__rosidl_typesupport_introspection_c__fetch_function__PredictedTrafficLightState__simultaneous_elements,  // fetch(index, &value) function pointer
    autoware_perception_msgs__msg__PredictedTrafficLightState__rosidl_typesupport_introspection_c__assign_function__PredictedTrafficLightState__simultaneous_elements,  // assign(index, value) function pointer
    autoware_perception_msgs__msg__PredictedTrafficLightState__rosidl_typesupport_introspection_c__resize_function__PredictedTrafficLightState__simultaneous_elements  // resize(index) function pointer
  },
  {
    "reliability",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_perception_msgs__msg__PredictedTrafficLightState, reliability),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "information_source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_perception_msgs__msg__PredictedTrafficLightState, information_source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_perception_msgs__msg__PredictedTrafficLightState__rosidl_typesupport_introspection_c__PredictedTrafficLightState_message_members = {
  "autoware_perception_msgs__msg",  // message namespace
  "PredictedTrafficLightState",  // message name
  4,  // number of fields
  sizeof(autoware_perception_msgs__msg__PredictedTrafficLightState),
  autoware_perception_msgs__msg__PredictedTrafficLightState__rosidl_typesupport_introspection_c__PredictedTrafficLightState_message_member_array,  // message members
  autoware_perception_msgs__msg__PredictedTrafficLightState__rosidl_typesupport_introspection_c__PredictedTrafficLightState_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_perception_msgs__msg__PredictedTrafficLightState__rosidl_typesupport_introspection_c__PredictedTrafficLightState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_perception_msgs__msg__PredictedTrafficLightState__rosidl_typesupport_introspection_c__PredictedTrafficLightState_message_type_support_handle = {
  0,
  &autoware_perception_msgs__msg__PredictedTrafficLightState__rosidl_typesupport_introspection_c__PredictedTrafficLightState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_perception_msgs, msg, PredictedTrafficLightState)() {
  autoware_perception_msgs__msg__PredictedTrafficLightState__rosidl_typesupport_introspection_c__PredictedTrafficLightState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  autoware_perception_msgs__msg__PredictedTrafficLightState__rosidl_typesupport_introspection_c__PredictedTrafficLightState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_perception_msgs, msg, TrafficLightElement)();
  if (!autoware_perception_msgs__msg__PredictedTrafficLightState__rosidl_typesupport_introspection_c__PredictedTrafficLightState_message_type_support_handle.typesupport_identifier) {
    autoware_perception_msgs__msg__PredictedTrafficLightState__rosidl_typesupport_introspection_c__PredictedTrafficLightState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_perception_msgs__msg__PredictedTrafficLightState__rosidl_typesupport_introspection_c__PredictedTrafficLightState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
