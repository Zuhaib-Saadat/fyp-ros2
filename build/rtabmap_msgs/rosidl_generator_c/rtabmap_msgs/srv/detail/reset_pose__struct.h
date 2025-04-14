// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_msgs:srv/ResetPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rtabmap_msgs/srv/reset_pose.h"


#ifndef RTABMAP_MSGS__SRV__DETAIL__RESET_POSE__STRUCT_H_
#define RTABMAP_MSGS__SRV__DETAIL__RESET_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ResetPose in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__ResetPose_Request
{
  float x;
  float y;
  float z;
  float roll;
  float pitch;
  float yaw;
} rtabmap_msgs__srv__ResetPose_Request;

// Struct for a sequence of rtabmap_msgs__srv__ResetPose_Request.
typedef struct rtabmap_msgs__srv__ResetPose_Request__Sequence
{
  rtabmap_msgs__srv__ResetPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__ResetPose_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/ResetPose in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__ResetPose_Response
{
  uint8_t structure_needs_at_least_one_member;
} rtabmap_msgs__srv__ResetPose_Response;

// Struct for a sequence of rtabmap_msgs__srv__ResetPose_Response.
typedef struct rtabmap_msgs__srv__ResetPose_Response__Sequence
{
  rtabmap_msgs__srv__ResetPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__ResetPose_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  rtabmap_msgs__srv__ResetPose_Event__request__MAX_SIZE = 1
};
// response
enum
{
  rtabmap_msgs__srv__ResetPose_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ResetPose in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__ResetPose_Event
{
  service_msgs__msg__ServiceEventInfo info;
  rtabmap_msgs__srv__ResetPose_Request__Sequence request;
  rtabmap_msgs__srv__ResetPose_Response__Sequence response;
} rtabmap_msgs__srv__ResetPose_Event;

// Struct for a sequence of rtabmap_msgs__srv__ResetPose_Event.
typedef struct rtabmap_msgs__srv__ResetPose_Event__Sequence
{
  rtabmap_msgs__srv__ResetPose_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__ResetPose_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__SRV__DETAIL__RESET_POSE__STRUCT_H_
