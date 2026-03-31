// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_internal_planning_msgs:srv/SetLaneletRoute.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PLANNING_MSGS__SRV__DETAIL__SET_LANELET_ROUTE__STRUCT_H_
#define AUTOWARE_INTERNAL_PLANNING_MSGS__SRV__DETAIL__SET_LANELET_ROUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'goal_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'segments'
#include "autoware_planning_msgs/msg/detail/lanelet_segment__struct.h"
// Member 'uuid'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in srv/SetLaneletRoute in the package autoware_internal_planning_msgs.
typedef struct autoware_internal_planning_msgs__srv__SetLaneletRoute_Request
{
  std_msgs__msg__Header header;
  /// Goal pose in map frame
  geometry_msgs__msg__Pose goal_pose;
  /// Lanelet segments defining the route path
  autoware_planning_msgs__msg__LaneletSegment__Sequence segments;
  /// Unique identifier for this route request
  unique_identifier_msgs__msg__UUID uuid;
  /// If true, planner may modify route for optimization
  bool allow_modification;
} autoware_internal_planning_msgs__srv__SetLaneletRoute_Request;

// Struct for a sequence of autoware_internal_planning_msgs__srv__SetLaneletRoute_Request.
typedef struct autoware_internal_planning_msgs__srv__SetLaneletRoute_Request__Sequence
{
  autoware_internal_planning_msgs__srv__SetLaneletRoute_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_internal_planning_msgs__srv__SetLaneletRoute_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "autoware_common_msgs/msg/detail/response_status__struct.h"

/// Struct defined in srv/SetLaneletRoute in the package autoware_internal_planning_msgs.
typedef struct autoware_internal_planning_msgs__srv__SetLaneletRoute_Response
{
  autoware_common_msgs__msg__ResponseStatus status;
} autoware_internal_planning_msgs__srv__SetLaneletRoute_Response;

// Struct for a sequence of autoware_internal_planning_msgs__srv__SetLaneletRoute_Response.
typedef struct autoware_internal_planning_msgs__srv__SetLaneletRoute_Response__Sequence
{
  autoware_internal_planning_msgs__srv__SetLaneletRoute_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_internal_planning_msgs__srv__SetLaneletRoute_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_INTERNAL_PLANNING_MSGS__SRV__DETAIL__SET_LANELET_ROUTE__STRUCT_H_
