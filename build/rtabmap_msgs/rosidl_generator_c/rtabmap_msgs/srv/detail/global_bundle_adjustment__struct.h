// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_msgs:srv/GlobalBundleAdjustment.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rtabmap_msgs/srv/global_bundle_adjustment.h"


#ifndef RTABMAP_MSGS__SRV__DETAIL__GLOBAL_BUNDLE_ADJUSTMENT__STRUCT_H_
#define RTABMAP_MSGS__SRV__DETAIL__GLOBAL_BUNDLE_ADJUSTMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GlobalBundleAdjustment in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__GlobalBundleAdjustment_Request
{
  /// Optimizer type (0=g2o, 1=CVSBA), default 0
  int32_t type;
  /// Iterations,        default 0 (use Optimizer/Iterations already loaded in the node)
  int32_t iterations;
  /// Pixel variance,    default 0 (use g2o/PixelVariance already loaded in the node)
  float pixel_variance;
  /// Use vocabulary matches, default false (rematch all features between frames)
  bool voc_matches;
} rtabmap_msgs__srv__GlobalBundleAdjustment_Request;

// Struct for a sequence of rtabmap_msgs__srv__GlobalBundleAdjustment_Request.
typedef struct rtabmap_msgs__srv__GlobalBundleAdjustment_Request__Sequence
{
  rtabmap_msgs__srv__GlobalBundleAdjustment_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__GlobalBundleAdjustment_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/GlobalBundleAdjustment in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__GlobalBundleAdjustment_Response
{
  uint8_t structure_needs_at_least_one_member;
} rtabmap_msgs__srv__GlobalBundleAdjustment_Response;

// Struct for a sequence of rtabmap_msgs__srv__GlobalBundleAdjustment_Response.
typedef struct rtabmap_msgs__srv__GlobalBundleAdjustment_Response__Sequence
{
  rtabmap_msgs__srv__GlobalBundleAdjustment_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__GlobalBundleAdjustment_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  rtabmap_msgs__srv__GlobalBundleAdjustment_Event__request__MAX_SIZE = 1
};
// response
enum
{
  rtabmap_msgs__srv__GlobalBundleAdjustment_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GlobalBundleAdjustment in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__GlobalBundleAdjustment_Event
{
  service_msgs__msg__ServiceEventInfo info;
  rtabmap_msgs__srv__GlobalBundleAdjustment_Request__Sequence request;
  rtabmap_msgs__srv__GlobalBundleAdjustment_Response__Sequence response;
} rtabmap_msgs__srv__GlobalBundleAdjustment_Event;

// Struct for a sequence of rtabmap_msgs__srv__GlobalBundleAdjustment_Event.
typedef struct rtabmap_msgs__srv__GlobalBundleAdjustment_Event__Sequence
{
  rtabmap_msgs__srv__GlobalBundleAdjustment_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__GlobalBundleAdjustment_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__SRV__DETAIL__GLOBAL_BUNDLE_ADJUSTMENT__STRUCT_H_
