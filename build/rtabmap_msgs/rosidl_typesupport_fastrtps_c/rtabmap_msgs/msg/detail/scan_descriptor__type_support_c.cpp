// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rtabmap_msgs:msg/ScanDescriptor.idl
// generated code does not contain a copyright notice
#include "rtabmap_msgs/msg/detail/scan_descriptor__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rtabmap_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rtabmap_msgs/msg/detail/scan_descriptor__struct.h"
#include "rtabmap_msgs/msg/detail/scan_descriptor__functions.h"
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

#include "rtabmap_msgs/msg/detail/global_descriptor__functions.h"  // global_descriptor
#include "sensor_msgs/msg/detail/laser_scan__functions.h"  // scan
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"  // scan_cloud
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

bool cdr_serialize_rtabmap_msgs__msg__GlobalDescriptor(
  const rtabmap_msgs__msg__GlobalDescriptor * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_rtabmap_msgs__msg__GlobalDescriptor(
  eprosima::fastcdr::Cdr & cdr,
  rtabmap_msgs__msg__GlobalDescriptor * ros_message);

size_t get_serialized_size_rtabmap_msgs__msg__GlobalDescriptor(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rtabmap_msgs__msg__GlobalDescriptor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_rtabmap_msgs__msg__GlobalDescriptor(
  const rtabmap_msgs__msg__GlobalDescriptor * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_rtabmap_msgs__msg__GlobalDescriptor(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_rtabmap_msgs__msg__GlobalDescriptor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, GlobalDescriptor)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
bool cdr_serialize_sensor_msgs__msg__LaserScan(
  const sensor_msgs__msg__LaserScan * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
bool cdr_deserialize_sensor_msgs__msg__LaserScan(
  eprosima::fastcdr::Cdr & cdr,
  sensor_msgs__msg__LaserScan * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t get_serialized_size_sensor_msgs__msg__LaserScan(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t max_serialized_size_sensor_msgs__msg__LaserScan(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
bool cdr_serialize_key_sensor_msgs__msg__LaserScan(
  const sensor_msgs__msg__LaserScan * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t get_serialized_size_key_sensor_msgs__msg__LaserScan(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t max_serialized_size_key_sensor_msgs__msg__LaserScan(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, LaserScan)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
bool cdr_serialize_sensor_msgs__msg__PointCloud2(
  const sensor_msgs__msg__PointCloud2 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
bool cdr_deserialize_sensor_msgs__msg__PointCloud2(
  eprosima::fastcdr::Cdr & cdr,
  sensor_msgs__msg__PointCloud2 * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t get_serialized_size_sensor_msgs__msg__PointCloud2(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t max_serialized_size_sensor_msgs__msg__PointCloud2(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
bool cdr_serialize_key_sensor_msgs__msg__PointCloud2(
  const sensor_msgs__msg__PointCloud2 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t get_serialized_size_key_sensor_msgs__msg__PointCloud2(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t max_serialized_size_key_sensor_msgs__msg__PointCloud2(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _ScanDescriptor__ros_msg_type = rtabmap_msgs__msg__ScanDescriptor;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
bool cdr_serialize_rtabmap_msgs__msg__ScanDescriptor(
  const rtabmap_msgs__msg__ScanDescriptor * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: scan
  {
    cdr_serialize_sensor_msgs__msg__LaserScan(
      &ros_message->scan, cdr);
  }

  // Field name: scan_cloud
  {
    cdr_serialize_sensor_msgs__msg__PointCloud2(
      &ros_message->scan_cloud, cdr);
  }

  // Field name: global_descriptor
  {
    cdr_serialize_rtabmap_msgs__msg__GlobalDescriptor(
      &ros_message->global_descriptor, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
bool cdr_deserialize_rtabmap_msgs__msg__ScanDescriptor(
  eprosima::fastcdr::Cdr & cdr,
  rtabmap_msgs__msg__ScanDescriptor * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: scan
  {
    cdr_deserialize_sensor_msgs__msg__LaserScan(cdr, &ros_message->scan);
  }

  // Field name: scan_cloud
  {
    cdr_deserialize_sensor_msgs__msg__PointCloud2(cdr, &ros_message->scan_cloud);
  }

  // Field name: global_descriptor
  {
    cdr_deserialize_rtabmap_msgs__msg__GlobalDescriptor(cdr, &ros_message->global_descriptor);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t get_serialized_size_rtabmap_msgs__msg__ScanDescriptor(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ScanDescriptor__ros_msg_type * ros_message = static_cast<const _ScanDescriptor__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: scan
  current_alignment += get_serialized_size_sensor_msgs__msg__LaserScan(
    &(ros_message->scan), current_alignment);

  // Field name: scan_cloud
  current_alignment += get_serialized_size_sensor_msgs__msg__PointCloud2(
    &(ros_message->scan_cloud), current_alignment);

  // Field name: global_descriptor
  current_alignment += get_serialized_size_rtabmap_msgs__msg__GlobalDescriptor(
    &(ros_message->global_descriptor), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t max_serialized_size_rtabmap_msgs__msg__ScanDescriptor(
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

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: scan
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__LaserScan(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: scan_cloud
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__PointCloud2(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: global_descriptor
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_rtabmap_msgs__msg__GlobalDescriptor(
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
    using DataType = rtabmap_msgs__msg__ScanDescriptor;
    is_plain =
      (
      offsetof(DataType, global_descriptor) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
bool cdr_serialize_key_rtabmap_msgs__msg__ScanDescriptor(
  const rtabmap_msgs__msg__ScanDescriptor * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: scan
  {
    cdr_serialize_key_sensor_msgs__msg__LaserScan(
      &ros_message->scan, cdr);
  }

  // Field name: scan_cloud
  {
    cdr_serialize_key_sensor_msgs__msg__PointCloud2(
      &ros_message->scan_cloud, cdr);
  }

  // Field name: global_descriptor
  {
    cdr_serialize_key_rtabmap_msgs__msg__GlobalDescriptor(
      &ros_message->global_descriptor, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t get_serialized_size_key_rtabmap_msgs__msg__ScanDescriptor(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ScanDescriptor__ros_msg_type * ros_message = static_cast<const _ScanDescriptor__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: scan
  current_alignment += get_serialized_size_key_sensor_msgs__msg__LaserScan(
    &(ros_message->scan), current_alignment);

  // Field name: scan_cloud
  current_alignment += get_serialized_size_key_sensor_msgs__msg__PointCloud2(
    &(ros_message->scan_cloud), current_alignment);

  // Field name: global_descriptor
  current_alignment += get_serialized_size_key_rtabmap_msgs__msg__GlobalDescriptor(
    &(ros_message->global_descriptor), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t max_serialized_size_key_rtabmap_msgs__msg__ScanDescriptor(
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
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: scan
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_sensor_msgs__msg__LaserScan(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: scan_cloud
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_sensor_msgs__msg__PointCloud2(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: global_descriptor
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_rtabmap_msgs__msg__GlobalDescriptor(
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
    using DataType = rtabmap_msgs__msg__ScanDescriptor;
    is_plain =
      (
      offsetof(DataType, global_descriptor) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ScanDescriptor__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const rtabmap_msgs__msg__ScanDescriptor * ros_message = static_cast<const rtabmap_msgs__msg__ScanDescriptor *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_rtabmap_msgs__msg__ScanDescriptor(ros_message, cdr);
}

static bool _ScanDescriptor__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  rtabmap_msgs__msg__ScanDescriptor * ros_message = static_cast<rtabmap_msgs__msg__ScanDescriptor *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_rtabmap_msgs__msg__ScanDescriptor(cdr, ros_message);
}

static uint32_t _ScanDescriptor__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rtabmap_msgs__msg__ScanDescriptor(
      untyped_ros_message, 0));
}

static size_t _ScanDescriptor__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rtabmap_msgs__msg__ScanDescriptor(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ScanDescriptor = {
  "rtabmap_msgs::msg",
  "ScanDescriptor",
  _ScanDescriptor__cdr_serialize,
  _ScanDescriptor__cdr_deserialize,
  _ScanDescriptor__get_serialized_size,
  _ScanDescriptor__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ScanDescriptor__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ScanDescriptor,
  get_message_typesupport_handle_function,
  &rtabmap_msgs__msg__ScanDescriptor__get_type_hash,
  &rtabmap_msgs__msg__ScanDescriptor__get_type_description,
  &rtabmap_msgs__msg__ScanDescriptor__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, ScanDescriptor)() {
  return &_ScanDescriptor__type_support;
}

#if defined(__cplusplus)
}
#endif
