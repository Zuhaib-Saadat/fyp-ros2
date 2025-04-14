// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rtabmap_msgs:srv/GetNodesInRadius.idl
// generated code does not contain a copyright notice
#include "rtabmap_msgs/srv/detail/get_nodes_in_radius__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rtabmap_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rtabmap_msgs/srv/detail/get_nodes_in_radius__struct.h"
#include "rtabmap_msgs/srv/detail/get_nodes_in_radius__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GetNodesInRadius_Request__ros_msg_type = rtabmap_msgs__srv__GetNodesInRadius_Request;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
bool cdr_serialize_rtabmap_msgs__srv__GetNodesInRadius_Request(
  const rtabmap_msgs__srv__GetNodesInRadius_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: node_id
  {
    cdr << ros_message->node_id;
  }

  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  // Field name: z
  {
    cdr << ros_message->z;
  }

  // Field name: radius
  {
    cdr << ros_message->radius;
  }

  // Field name: k
  {
    cdr << ros_message->k;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
bool cdr_deserialize_rtabmap_msgs__srv__GetNodesInRadius_Request(
  eprosima::fastcdr::Cdr & cdr,
  rtabmap_msgs__srv__GetNodesInRadius_Request * ros_message)
{
  // Field name: node_id
  {
    cdr >> ros_message->node_id;
  }

  // Field name: x
  {
    cdr >> ros_message->x;
  }

  // Field name: y
  {
    cdr >> ros_message->y;
  }

  // Field name: z
  {
    cdr >> ros_message->z;
  }

  // Field name: radius
  {
    cdr >> ros_message->radius;
  }

  // Field name: k
  {
    cdr >> ros_message->k;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t get_serialized_size_rtabmap_msgs__srv__GetNodesInRadius_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetNodesInRadius_Request__ros_msg_type * ros_message = static_cast<const _GetNodesInRadius_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: node_id
  {
    size_t item_size = sizeof(ros_message->node_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: y
  {
    size_t item_size = sizeof(ros_message->y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: z
  {
    size_t item_size = sizeof(ros_message->z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: radius
  {
    size_t item_size = sizeof(ros_message->radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: k
  {
    size_t item_size = sizeof(ros_message->k);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t max_serialized_size_rtabmap_msgs__srv__GetNodesInRadius_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: node_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: radius
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: k
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rtabmap_msgs__srv__GetNodesInRadius_Request;
    is_plain =
      (
      offsetof(DataType, k) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
bool cdr_serialize_key_rtabmap_msgs__srv__GetNodesInRadius_Request(
  const rtabmap_msgs__srv__GetNodesInRadius_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: node_id
  {
    cdr << ros_message->node_id;
  }

  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  // Field name: z
  {
    cdr << ros_message->z;
  }

  // Field name: radius
  {
    cdr << ros_message->radius;
  }

  // Field name: k
  {
    cdr << ros_message->k;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t get_serialized_size_key_rtabmap_msgs__srv__GetNodesInRadius_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetNodesInRadius_Request__ros_msg_type * ros_message = static_cast<const _GetNodesInRadius_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: node_id
  {
    size_t item_size = sizeof(ros_message->node_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: y
  {
    size_t item_size = sizeof(ros_message->y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: z
  {
    size_t item_size = sizeof(ros_message->z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: radius
  {
    size_t item_size = sizeof(ros_message->radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: k
  {
    size_t item_size = sizeof(ros_message->k);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t max_serialized_size_key_rtabmap_msgs__srv__GetNodesInRadius_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: node_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: radius
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: k
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rtabmap_msgs__srv__GetNodesInRadius_Request;
    is_plain =
      (
      offsetof(DataType, k) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _GetNodesInRadius_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const rtabmap_msgs__srv__GetNodesInRadius_Request * ros_message = static_cast<const rtabmap_msgs__srv__GetNodesInRadius_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_rtabmap_msgs__srv__GetNodesInRadius_Request(ros_message, cdr);
}

static bool _GetNodesInRadius_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  rtabmap_msgs__srv__GetNodesInRadius_Request * ros_message = static_cast<rtabmap_msgs__srv__GetNodesInRadius_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_rtabmap_msgs__srv__GetNodesInRadius_Request(cdr, ros_message);
}

static uint32_t _GetNodesInRadius_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rtabmap_msgs__srv__GetNodesInRadius_Request(
      untyped_ros_message, 0));
}

static size_t _GetNodesInRadius_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rtabmap_msgs__srv__GetNodesInRadius_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetNodesInRadius_Request = {
  "rtabmap_msgs::srv",
  "GetNodesInRadius_Request",
  _GetNodesInRadius_Request__cdr_serialize,
  _GetNodesInRadius_Request__cdr_deserialize,
  _GetNodesInRadius_Request__get_serialized_size,
  _GetNodesInRadius_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _GetNodesInRadius_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetNodesInRadius_Request,
  get_message_typesupport_handle_function,
  &rtabmap_msgs__srv__GetNodesInRadius_Request__get_type_hash,
  &rtabmap_msgs__srv__GetNodesInRadius_Request__get_type_description,
  &rtabmap_msgs__srv__GetNodesInRadius_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, srv, GetNodesInRadius_Request)() {
  return &_GetNodesInRadius_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rtabmap_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "rtabmap_msgs/srv/detail/get_nodes_in_radius__struct.h"
// already included above
// #include "rtabmap_msgs/srv/detail/get_nodes_in_radius__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/pose__functions.h"  // poses
#include "rosidl_runtime_c/primitives_sequence.h"  // dists_sqr, ids
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // dists_sqr, ids

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
bool cdr_serialize_geometry_msgs__msg__Pose(
  const geometry_msgs__msg__Pose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
bool cdr_deserialize_geometry_msgs__msg__Pose(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Pose * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
bool cdr_serialize_key_geometry_msgs__msg__Pose(
  const geometry_msgs__msg__Pose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose)();


using _GetNodesInRadius_Response__ros_msg_type = rtabmap_msgs__srv__GetNodesInRadius_Response;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
bool cdr_serialize_rtabmap_msgs__srv__GetNodesInRadius_Response(
  const rtabmap_msgs__srv__GetNodesInRadius_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: ids
  {
    size_t size = ros_message->ids.size;
    auto array_ptr = ros_message->ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: poses
  {
    size_t size = ros_message->poses.size;
    auto array_ptr = ros_message->poses.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_geometry_msgs__msg__Pose(
        &array_ptr[i], cdr);
    }
  }

  // Field name: dists_sqr
  {
    size_t size = ros_message->dists_sqr.size;
    auto array_ptr = ros_message->dists_sqr.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
bool cdr_deserialize_rtabmap_msgs__srv__GetNodesInRadius_Response(
  eprosima::fastcdr::Cdr & cdr,
  rtabmap_msgs__srv__GetNodesInRadius_Response * ros_message)
{
  // Field name: ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ids.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->ids);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->ids, size)) {
      fprintf(stderr, "failed to create array for field 'ids'");
      return false;
    }
    auto array_ptr = ros_message->ids.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: poses
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->poses.data) {
      geometry_msgs__msg__Pose__Sequence__fini(&ros_message->poses);
    }
    if (!geometry_msgs__msg__Pose__Sequence__init(&ros_message->poses, size)) {
      fprintf(stderr, "failed to create array for field 'poses'");
      return false;
    }
    auto array_ptr = ros_message->poses.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_geometry_msgs__msg__Pose(cdr, &array_ptr[i]);
    }
  }

  // Field name: dists_sqr
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->dists_sqr.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->dists_sqr);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->dists_sqr, size)) {
      fprintf(stderr, "failed to create array for field 'dists_sqr'");
      return false;
    }
    auto array_ptr = ros_message->dists_sqr.data;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t get_serialized_size_rtabmap_msgs__srv__GetNodesInRadius_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetNodesInRadius_Response__ros_msg_type * ros_message = static_cast<const _GetNodesInRadius_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: ids
  {
    size_t array_size = ros_message->ids.size;
    auto array_ptr = ros_message->ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: poses
  {
    size_t array_size = ros_message->poses.size;
    auto array_ptr = ros_message->poses.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: dists_sqr
  {
    size_t array_size = ros_message->dists_sqr.size;
    auto array_ptr = ros_message->dists_sqr.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t max_serialized_size_rtabmap_msgs__srv__GetNodesInRadius_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: poses
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: dists_sqr
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rtabmap_msgs__srv__GetNodesInRadius_Response;
    is_plain =
      (
      offsetof(DataType, dists_sqr) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
bool cdr_serialize_key_rtabmap_msgs__srv__GetNodesInRadius_Response(
  const rtabmap_msgs__srv__GetNodesInRadius_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: ids
  {
    size_t size = ros_message->ids.size;
    auto array_ptr = ros_message->ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: poses
  {
    size_t size = ros_message->poses.size;
    auto array_ptr = ros_message->poses.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_geometry_msgs__msg__Pose(
        &array_ptr[i], cdr);
    }
  }

  // Field name: dists_sqr
  {
    size_t size = ros_message->dists_sqr.size;
    auto array_ptr = ros_message->dists_sqr.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t get_serialized_size_key_rtabmap_msgs__srv__GetNodesInRadius_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetNodesInRadius_Response__ros_msg_type * ros_message = static_cast<const _GetNodesInRadius_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: ids
  {
    size_t array_size = ros_message->ids.size;
    auto array_ptr = ros_message->ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: poses
  {
    size_t array_size = ros_message->poses.size;
    auto array_ptr = ros_message->poses.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_geometry_msgs__msg__Pose(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: dists_sqr
  {
    size_t array_size = ros_message->dists_sqr.size;
    auto array_ptr = ros_message->dists_sqr.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t max_serialized_size_key_rtabmap_msgs__srv__GetNodesInRadius_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: poses
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: dists_sqr
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rtabmap_msgs__srv__GetNodesInRadius_Response;
    is_plain =
      (
      offsetof(DataType, dists_sqr) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _GetNodesInRadius_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const rtabmap_msgs__srv__GetNodesInRadius_Response * ros_message = static_cast<const rtabmap_msgs__srv__GetNodesInRadius_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_rtabmap_msgs__srv__GetNodesInRadius_Response(ros_message, cdr);
}

static bool _GetNodesInRadius_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  rtabmap_msgs__srv__GetNodesInRadius_Response * ros_message = static_cast<rtabmap_msgs__srv__GetNodesInRadius_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_rtabmap_msgs__srv__GetNodesInRadius_Response(cdr, ros_message);
}

static uint32_t _GetNodesInRadius_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rtabmap_msgs__srv__GetNodesInRadius_Response(
      untyped_ros_message, 0));
}

static size_t _GetNodesInRadius_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rtabmap_msgs__srv__GetNodesInRadius_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetNodesInRadius_Response = {
  "rtabmap_msgs::srv",
  "GetNodesInRadius_Response",
  _GetNodesInRadius_Response__cdr_serialize,
  _GetNodesInRadius_Response__cdr_deserialize,
  _GetNodesInRadius_Response__get_serialized_size,
  _GetNodesInRadius_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _GetNodesInRadius_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetNodesInRadius_Response,
  get_message_typesupport_handle_function,
  &rtabmap_msgs__srv__GetNodesInRadius_Response__get_type_hash,
  &rtabmap_msgs__srv__GetNodesInRadius_Response__get_type_description,
  &rtabmap_msgs__srv__GetNodesInRadius_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, srv, GetNodesInRadius_Response)() {
  return &_GetNodesInRadius_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rtabmap_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "rtabmap_msgs/srv/detail/get_nodes_in_radius__struct.h"
// already included above
// #include "rtabmap_msgs/srv/detail/get_nodes_in_radius__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions

bool cdr_serialize_rtabmap_msgs__srv__GetNodesInRadius_Request(
  const rtabmap_msgs__srv__GetNodesInRadius_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_rtabmap_msgs__srv__GetNodesInRadius_Request(
  eprosima::fastcdr::Cdr & cdr,
  rtabmap_msgs__srv__GetNodesInRadius_Request * ros_message);

size_t get_serialized_size_rtabmap_msgs__srv__GetNodesInRadius_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rtabmap_msgs__srv__GetNodesInRadius_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_rtabmap_msgs__srv__GetNodesInRadius_Request(
  const rtabmap_msgs__srv__GetNodesInRadius_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_rtabmap_msgs__srv__GetNodesInRadius_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_rtabmap_msgs__srv__GetNodesInRadius_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, srv, GetNodesInRadius_Request)();

bool cdr_serialize_rtabmap_msgs__srv__GetNodesInRadius_Response(
  const rtabmap_msgs__srv__GetNodesInRadius_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_rtabmap_msgs__srv__GetNodesInRadius_Response(
  eprosima::fastcdr::Cdr & cdr,
  rtabmap_msgs__srv__GetNodesInRadius_Response * ros_message);

size_t get_serialized_size_rtabmap_msgs__srv__GetNodesInRadius_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rtabmap_msgs__srv__GetNodesInRadius_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_rtabmap_msgs__srv__GetNodesInRadius_Response(
  const rtabmap_msgs__srv__GetNodesInRadius_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_rtabmap_msgs__srv__GetNodesInRadius_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_rtabmap_msgs__srv__GetNodesInRadius_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, srv, GetNodesInRadius_Response)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
bool cdr_serialize_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
bool cdr_deserialize_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
bool cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();


using _GetNodesInRadius_Event__ros_msg_type = rtabmap_msgs__srv__GetNodesInRadius_Event;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
bool cdr_serialize_rtabmap_msgs__srv__GetNodesInRadius_Event(
  const rtabmap_msgs__srv__GetNodesInRadius_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_rtabmap_msgs__srv__GetNodesInRadius_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_rtabmap_msgs__srv__GetNodesInRadius_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
bool cdr_deserialize_rtabmap_msgs__srv__GetNodesInRadius_Event(
  eprosima::fastcdr::Cdr & cdr,
  rtabmap_msgs__srv__GetNodesInRadius_Event * ros_message)
{
  // Field name: info
  {
    cdr_deserialize_service_msgs__msg__ServiceEventInfo(cdr, &ros_message->info);
  }

  // Field name: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->request.data) {
      rtabmap_msgs__srv__GetNodesInRadius_Request__Sequence__fini(&ros_message->request);
    }
    if (!rtabmap_msgs__srv__GetNodesInRadius_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_rtabmap_msgs__srv__GetNodesInRadius_Request(cdr, &array_ptr[i]);
    }
  }

  // Field name: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->response.data) {
      rtabmap_msgs__srv__GetNodesInRadius_Response__Sequence__fini(&ros_message->response);
    }
    if (!rtabmap_msgs__srv__GetNodesInRadius_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_rtabmap_msgs__srv__GetNodesInRadius_Response(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t get_serialized_size_rtabmap_msgs__srv__GetNodesInRadius_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetNodesInRadius_Event__ros_msg_type * ros_message = static_cast<const _GetNodesInRadius_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rtabmap_msgs__srv__GetNodesInRadius_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rtabmap_msgs__srv__GetNodesInRadius_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t max_serialized_size_rtabmap_msgs__srv__GetNodesInRadius_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_rtabmap_msgs__srv__GetNodesInRadius_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_rtabmap_msgs__srv__GetNodesInRadius_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rtabmap_msgs__srv__GetNodesInRadius_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
bool cdr_serialize_key_rtabmap_msgs__srv__GetNodesInRadius_Event(
  const rtabmap_msgs__srv__GetNodesInRadius_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_rtabmap_msgs__srv__GetNodesInRadius_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_rtabmap_msgs__srv__GetNodesInRadius_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t get_serialized_size_key_rtabmap_msgs__srv__GetNodesInRadius_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetNodesInRadius_Event__ros_msg_type * ros_message = static_cast<const _GetNodesInRadius_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_rtabmap_msgs__srv__GetNodesInRadius_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_rtabmap_msgs__srv__GetNodesInRadius_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t max_serialized_size_key_rtabmap_msgs__srv__GetNodesInRadius_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_rtabmap_msgs__srv__GetNodesInRadius_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_rtabmap_msgs__srv__GetNodesInRadius_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rtabmap_msgs__srv__GetNodesInRadius_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _GetNodesInRadius_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const rtabmap_msgs__srv__GetNodesInRadius_Event * ros_message = static_cast<const rtabmap_msgs__srv__GetNodesInRadius_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_rtabmap_msgs__srv__GetNodesInRadius_Event(ros_message, cdr);
}

static bool _GetNodesInRadius_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  rtabmap_msgs__srv__GetNodesInRadius_Event * ros_message = static_cast<rtabmap_msgs__srv__GetNodesInRadius_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_rtabmap_msgs__srv__GetNodesInRadius_Event(cdr, ros_message);
}

static uint32_t _GetNodesInRadius_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rtabmap_msgs__srv__GetNodesInRadius_Event(
      untyped_ros_message, 0));
}

static size_t _GetNodesInRadius_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rtabmap_msgs__srv__GetNodesInRadius_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetNodesInRadius_Event = {
  "rtabmap_msgs::srv",
  "GetNodesInRadius_Event",
  _GetNodesInRadius_Event__cdr_serialize,
  _GetNodesInRadius_Event__cdr_deserialize,
  _GetNodesInRadius_Event__get_serialized_size,
  _GetNodesInRadius_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _GetNodesInRadius_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetNodesInRadius_Event,
  get_message_typesupport_handle_function,
  &rtabmap_msgs__srv__GetNodesInRadius_Event__get_type_hash,
  &rtabmap_msgs__srv__GetNodesInRadius_Event__get_type_description,
  &rtabmap_msgs__srv__GetNodesInRadius_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, srv, GetNodesInRadius_Event)() {
  return &_GetNodesInRadius_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rtabmap_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rtabmap_msgs/srv/get_nodes_in_radius.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetNodesInRadius__callbacks = {
  "rtabmap_msgs::srv",
  "GetNodesInRadius",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, srv, GetNodesInRadius_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, srv, GetNodesInRadius_Response)(),
};

static rosidl_service_type_support_t GetNodesInRadius__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetNodesInRadius__callbacks,
  get_service_typesupport_handle_function,
  &_GetNodesInRadius_Request__type_support,
  &_GetNodesInRadius_Response__type_support,
  &_GetNodesInRadius_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rtabmap_msgs,
    srv,
    GetNodesInRadius
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rtabmap_msgs,
    srv,
    GetNodesInRadius
  ),
  &rtabmap_msgs__srv__GetNodesInRadius__get_type_hash,
  &rtabmap_msgs__srv__GetNodesInRadius__get_type_description,
  &rtabmap_msgs__srv__GetNodesInRadius__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, srv, GetNodesInRadius)() {
  return &GetNodesInRadius__handle;
}

#if defined(__cplusplus)
}
#endif
