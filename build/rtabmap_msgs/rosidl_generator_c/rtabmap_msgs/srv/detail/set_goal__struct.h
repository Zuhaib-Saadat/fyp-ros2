// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_msgs:srv/SetGoal.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rtabmap_msgs/srv/set_goal.h"


#ifndef RTABMAP_MSGS__SRV__DETAIL__SET_GOAL__STRUCT_H_
#define RTABMAP_MSGS__SRV__DETAIL__SET_GOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'node_label'
// Member 'frame_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetGoal in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__SetGoal_Request
{
  /// Set either node_id or node_label
  int32_t node_id;
  rosidl_runtime_c__String node_label;
  /// optional: if not set, the base frame of the robot is used
  rosidl_runtime_c__String frame_id;
} rtabmap_msgs__srv__SetGoal_Request;

// Struct for a sequence of rtabmap_msgs__srv__SetGoal_Request.
typedef struct rtabmap_msgs__srv__SetGoal_Request__Sequence
{
  rtabmap_msgs__srv__SetGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__SetGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'path_ids'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'path_poses'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/SetGoal in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__SetGoal_Response
{
  /// response
  rosidl_runtime_c__int32__Sequence path_ids;
  geometry_msgs__msg__Pose__Sequence path_poses;
  float planning_time;
} rtabmap_msgs__srv__SetGoal_Response;

// Struct for a sequence of rtabmap_msgs__srv__SetGoal_Response.
typedef struct rtabmap_msgs__srv__SetGoal_Response__Sequence
{
  rtabmap_msgs__srv__SetGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__SetGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  rtabmap_msgs__srv__SetGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  rtabmap_msgs__srv__SetGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetGoal in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__SetGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  rtabmap_msgs__srv__SetGoal_Request__Sequence request;
  rtabmap_msgs__srv__SetGoal_Response__Sequence response;
} rtabmap_msgs__srv__SetGoal_Event;

// Struct for a sequence of rtabmap_msgs__srv__SetGoal_Event.
typedef struct rtabmap_msgs__srv__SetGoal_Event__Sequence
{
  rtabmap_msgs__srv__SetGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__SetGoal_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__SRV__DETAIL__SET_GOAL__STRUCT_H_
