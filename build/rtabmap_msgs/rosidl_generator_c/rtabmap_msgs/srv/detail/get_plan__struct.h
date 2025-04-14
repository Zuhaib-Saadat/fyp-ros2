// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_msgs:srv/GetPlan.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rtabmap_msgs/srv/get_plan.h"


#ifndef RTABMAP_MSGS__SRV__DETAIL__GET_PLAN__STRUCT_H_
#define RTABMAP_MSGS__SRV__DETAIL__GET_PLAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'goal'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in srv/GetPlan in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__GetPlan_Request
{
  /// The final node of the goal (set 0 to use pose instead)
  int32_t goal_node;
  /// The final pose of the goal position (used only if goalNodeId=0)
  geometry_msgs__msg__PoseStamped goal;
  /// How many meters from the map's graph we can plan (0=infinite)
  float tolerance;
} rtabmap_msgs__srv__GetPlan_Request;

// Struct for a sequence of rtabmap_msgs__srv__GetPlan_Request.
typedef struct rtabmap_msgs__srv__GetPlan_Request__Sequence
{
  rtabmap_msgs__srv__GetPlan_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__GetPlan_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'plan'
#include "rtabmap_msgs/msg/detail/path__struct.h"

/// Struct defined in srv/GetPlan in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__GetPlan_Response
{
  rtabmap_msgs__msg__Path plan;
} rtabmap_msgs__srv__GetPlan_Response;

// Struct for a sequence of rtabmap_msgs__srv__GetPlan_Response.
typedef struct rtabmap_msgs__srv__GetPlan_Response__Sequence
{
  rtabmap_msgs__srv__GetPlan_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__GetPlan_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  rtabmap_msgs__srv__GetPlan_Event__request__MAX_SIZE = 1
};
// response
enum
{
  rtabmap_msgs__srv__GetPlan_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetPlan in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__GetPlan_Event
{
  service_msgs__msg__ServiceEventInfo info;
  rtabmap_msgs__srv__GetPlan_Request__Sequence request;
  rtabmap_msgs__srv__GetPlan_Response__Sequence response;
} rtabmap_msgs__srv__GetPlan_Event;

// Struct for a sequence of rtabmap_msgs__srv__GetPlan_Event.
typedef struct rtabmap_msgs__srv__GetPlan_Event__Sequence
{
  rtabmap_msgs__srv__GetPlan_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__GetPlan_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__SRV__DETAIL__GET_PLAN__STRUCT_H_
