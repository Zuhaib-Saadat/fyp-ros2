// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_msgs:srv/ListLabels.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rtabmap_msgs/srv/list_labels.h"


#ifndef RTABMAP_MSGS__SRV__DETAIL__LIST_LABELS__STRUCT_H_
#define RTABMAP_MSGS__SRV__DETAIL__LIST_LABELS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ListLabels in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__ListLabels_Request
{
  uint8_t structure_needs_at_least_one_member;
} rtabmap_msgs__srv__ListLabels_Request;

// Struct for a sequence of rtabmap_msgs__srv__ListLabels_Request.
typedef struct rtabmap_msgs__srv__ListLabels_Request__Sequence
{
  rtabmap_msgs__srv__ListLabels_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__ListLabels_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'ids'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'labels'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ListLabels in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__ListLabels_Response
{
  rosidl_runtime_c__int32__Sequence ids;
  rosidl_runtime_c__String__Sequence labels;
} rtabmap_msgs__srv__ListLabels_Response;

// Struct for a sequence of rtabmap_msgs__srv__ListLabels_Response.
typedef struct rtabmap_msgs__srv__ListLabels_Response__Sequence
{
  rtabmap_msgs__srv__ListLabels_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__ListLabels_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  rtabmap_msgs__srv__ListLabels_Event__request__MAX_SIZE = 1
};
// response
enum
{
  rtabmap_msgs__srv__ListLabels_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ListLabels in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__ListLabels_Event
{
  service_msgs__msg__ServiceEventInfo info;
  rtabmap_msgs__srv__ListLabels_Request__Sequence request;
  rtabmap_msgs__srv__ListLabels_Response__Sequence response;
} rtabmap_msgs__srv__ListLabels_Event;

// Struct for a sequence of rtabmap_msgs__srv__ListLabels_Event.
typedef struct rtabmap_msgs__srv__ListLabels_Event__Sequence
{
  rtabmap_msgs__srv__ListLabels_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__ListLabels_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__SRV__DETAIL__LIST_LABELS__STRUCT_H_
