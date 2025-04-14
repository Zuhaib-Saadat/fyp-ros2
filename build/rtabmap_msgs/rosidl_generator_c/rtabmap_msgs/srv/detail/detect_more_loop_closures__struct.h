// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_msgs:srv/DetectMoreLoopClosures.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rtabmap_msgs/srv/detect_more_loop_closures.h"


#ifndef RTABMAP_MSGS__SRV__DETAIL__DETECT_MORE_LOOP_CLOSURES__STRUCT_H_
#define RTABMAP_MSGS__SRV__DETAIL__DETECT_MORE_LOOP_CLOSURES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/DetectMoreLoopClosures in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__DetectMoreLoopClosures_Request
{
  /// Cluster radius (m),     default 1 m if not set
  float cluster_radius_max;
  /// Cluster radius min (m), default 0 m if not set
  float cluster_radius_min;
  /// Cluster angle (deg),    default 0 deg if not set
  float cluster_angle;
  /// Iterations,             default 1 if not set
  int32_t iterations;
  /// Add only intra session loop closures
  bool intra_only;
  /// Add only inter session loop closures
  bool inter_only;
} rtabmap_msgs__srv__DetectMoreLoopClosures_Request;

// Struct for a sequence of rtabmap_msgs__srv__DetectMoreLoopClosures_Request.
typedef struct rtabmap_msgs__srv__DetectMoreLoopClosures_Request__Sequence
{
  rtabmap_msgs__srv__DetectMoreLoopClosures_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__DetectMoreLoopClosures_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/DetectMoreLoopClosures in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__DetectMoreLoopClosures_Response
{
  int32_t detected;
} rtabmap_msgs__srv__DetectMoreLoopClosures_Response;

// Struct for a sequence of rtabmap_msgs__srv__DetectMoreLoopClosures_Response.
typedef struct rtabmap_msgs__srv__DetectMoreLoopClosures_Response__Sequence
{
  rtabmap_msgs__srv__DetectMoreLoopClosures_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__DetectMoreLoopClosures_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  rtabmap_msgs__srv__DetectMoreLoopClosures_Event__request__MAX_SIZE = 1
};
// response
enum
{
  rtabmap_msgs__srv__DetectMoreLoopClosures_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/DetectMoreLoopClosures in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__DetectMoreLoopClosures_Event
{
  service_msgs__msg__ServiceEventInfo info;
  rtabmap_msgs__srv__DetectMoreLoopClosures_Request__Sequence request;
  rtabmap_msgs__srv__DetectMoreLoopClosures_Response__Sequence response;
} rtabmap_msgs__srv__DetectMoreLoopClosures_Event;

// Struct for a sequence of rtabmap_msgs__srv__DetectMoreLoopClosures_Event.
typedef struct rtabmap_msgs__srv__DetectMoreLoopClosures_Event__Sequence
{
  rtabmap_msgs__srv__DetectMoreLoopClosures_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__DetectMoreLoopClosures_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__SRV__DETAIL__DETECT_MORE_LOOP_CLOSURES__STRUCT_H_
