// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_internal_planning_msgs:srv/UnloadPlugin.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__SRV__DETAIL__UNLOAD_PLUGIN__STRUCT_H_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__SRV__DETAIL__UNLOAD_PLUGIN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'plugin_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/UnloadPlugin in the package autoware_internal_planning_msgs.
typedef struct autoware_internal_planning_msgs__srv__UnloadPlugin_Request
{
  rosidl_runtime_c__String plugin_name;
} autoware_internal_planning_msgs__srv__UnloadPlugin_Request;

// Struct for a sequence of autoware_internal_planning_msgs__srv__UnloadPlugin_Request.
typedef struct autoware_internal_planning_msgs__srv__UnloadPlugin_Request__Sequence
{
  autoware_internal_planning_msgs__srv__UnloadPlugin_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_internal_planning_msgs__srv__UnloadPlugin_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/UnloadPlugin in the package autoware_internal_planning_msgs.
typedef struct autoware_internal_planning_msgs__srv__UnloadPlugin_Response
{
  bool success;
} autoware_internal_planning_msgs__srv__UnloadPlugin_Response;

// Struct for a sequence of autoware_internal_planning_msgs__srv__UnloadPlugin_Response.
typedef struct autoware_internal_planning_msgs__srv__UnloadPlugin_Response__Sequence
{
  autoware_internal_planning_msgs__srv__UnloadPlugin_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_internal_planning_msgs__srv__UnloadPlugin_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__SRV__DETAIL__UNLOAD_PLUGIN__STRUCT_H_
