// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_msgs:srv/CleanupLocalGrids.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rtabmap_msgs/srv/cleanup_local_grids.h"


#ifndef RTABMAP_MSGS__SRV__DETAIL__CLEANUP_LOCAL_GRIDS__STRUCT_H_
#define RTABMAP_MSGS__SRV__DETAIL__CLEANUP_LOCAL_GRIDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CleanupLocalGrids in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__CleanupLocalGrids_Request
{
  /// Radius in cells around empty cell without obstacles to clear underlying obstacles, default 1 cell if not set.
  int32_t radius;
  /// Filter also the scans, default false if not set.
  /// The filtered laser scans will be used for localization,
  /// so if dynamic obstacles have been removed, localization won't try to
  /// match them anymore. Filtering the laser scans cannot be reverted,
  /// but grids can (see DatabaseViewer->Edit menu).
  bool filter_scans;
} rtabmap_msgs__srv__CleanupLocalGrids_Request;

// Struct for a sequence of rtabmap_msgs__srv__CleanupLocalGrids_Request.
typedef struct rtabmap_msgs__srv__CleanupLocalGrids_Request__Sequence
{
  rtabmap_msgs__srv__CleanupLocalGrids_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__CleanupLocalGrids_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/CleanupLocalGrids in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__CleanupLocalGrids_Response
{
  int32_t modified;
} rtabmap_msgs__srv__CleanupLocalGrids_Response;

// Struct for a sequence of rtabmap_msgs__srv__CleanupLocalGrids_Response.
typedef struct rtabmap_msgs__srv__CleanupLocalGrids_Response__Sequence
{
  rtabmap_msgs__srv__CleanupLocalGrids_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__CleanupLocalGrids_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  rtabmap_msgs__srv__CleanupLocalGrids_Event__request__MAX_SIZE = 1
};
// response
enum
{
  rtabmap_msgs__srv__CleanupLocalGrids_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/CleanupLocalGrids in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__CleanupLocalGrids_Event
{
  service_msgs__msg__ServiceEventInfo info;
  rtabmap_msgs__srv__CleanupLocalGrids_Request__Sequence request;
  rtabmap_msgs__srv__CleanupLocalGrids_Response__Sequence response;
} rtabmap_msgs__srv__CleanupLocalGrids_Event;

// Struct for a sequence of rtabmap_msgs__srv__CleanupLocalGrids_Event.
typedef struct rtabmap_msgs__srv__CleanupLocalGrids_Event__Sequence
{
  rtabmap_msgs__srv__CleanupLocalGrids_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__CleanupLocalGrids_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__SRV__DETAIL__CLEANUP_LOCAL_GRIDS__STRUCT_H_
