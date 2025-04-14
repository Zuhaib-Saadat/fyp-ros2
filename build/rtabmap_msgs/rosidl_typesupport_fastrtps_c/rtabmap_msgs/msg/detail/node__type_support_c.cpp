// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rtabmap_msgs:msg/Node.idl
// generated code does not contain a copyright notice
#include "rtabmap_msgs/msg/detail/node__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rtabmap_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rtabmap_msgs/msg/detail/node__struct.h"
#include "rtabmap_msgs/msg/detail/node__functions.h"
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

#include "geometry_msgs/msg/detail/pose__functions.h"  // pose
#include "rosidl_runtime_c/primitives_sequence.h"  // word_descriptors, word_id_keys, word_id_values
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // word_descriptors, word_id_keys, word_id_values
#include "rosidl_runtime_c/string.h"  // label
#include "rosidl_runtime_c/string_functions.h"  // label
#include "rtabmap_msgs/msg/detail/key_point__functions.h"  // word_kpts
#include "rtabmap_msgs/msg/detail/point3f__functions.h"  // word_pts
#include "rtabmap_msgs/msg/detail/sensor_data__functions.h"  // data

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

bool cdr_serialize_rtabmap_msgs__msg__KeyPoint(
  const rtabmap_msgs__msg__KeyPoint * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_rtabmap_msgs__msg__KeyPoint(
  eprosima::fastcdr::Cdr & cdr,
  rtabmap_msgs__msg__KeyPoint * ros_message);

size_t get_serialized_size_rtabmap_msgs__msg__KeyPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rtabmap_msgs__msg__KeyPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_rtabmap_msgs__msg__KeyPoint(
  const rtabmap_msgs__msg__KeyPoint * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_rtabmap_msgs__msg__KeyPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_rtabmap_msgs__msg__KeyPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, KeyPoint)();

bool cdr_serialize_rtabmap_msgs__msg__Point3f(
  const rtabmap_msgs__msg__Point3f * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_rtabmap_msgs__msg__Point3f(
  eprosima::fastcdr::Cdr & cdr,
  rtabmap_msgs__msg__Point3f * ros_message);

size_t get_serialized_size_rtabmap_msgs__msg__Point3f(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rtabmap_msgs__msg__Point3f(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_rtabmap_msgs__msg__Point3f(
  const rtabmap_msgs__msg__Point3f * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_rtabmap_msgs__msg__Point3f(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_rtabmap_msgs__msg__Point3f(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, Point3f)();

bool cdr_serialize_rtabmap_msgs__msg__SensorData(
  const rtabmap_msgs__msg__SensorData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_rtabmap_msgs__msg__SensorData(
  eprosima::fastcdr::Cdr & cdr,
  rtabmap_msgs__msg__SensorData * ros_message);

size_t get_serialized_size_rtabmap_msgs__msg__SensorData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rtabmap_msgs__msg__SensorData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_rtabmap_msgs__msg__SensorData(
  const rtabmap_msgs__msg__SensorData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_rtabmap_msgs__msg__SensorData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_rtabmap_msgs__msg__SensorData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, SensorData)();


using _Node__ros_msg_type = rtabmap_msgs__msg__Node;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
bool cdr_serialize_rtabmap_msgs__msg__Node(
  const rtabmap_msgs__msg__Node * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: map_id
  {
    cdr << ros_message->map_id;
  }

  // Field name: weight
  {
    cdr << ros_message->weight;
  }

  // Field name: stamp
  {
    cdr << ros_message->stamp;
  }

  // Field name: label
  {
    const rosidl_runtime_c__String * str = &ros_message->label;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: pose
  {
    cdr_serialize_geometry_msgs__msg__Pose(
      &ros_message->pose, cdr);
  }

  // Field name: word_id_keys
  {
    size_t size = ros_message->word_id_keys.size;
    auto array_ptr = ros_message->word_id_keys.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: word_id_values
  {
    size_t size = ros_message->word_id_values.size;
    auto array_ptr = ros_message->word_id_values.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: word_kpts
  {
    size_t size = ros_message->word_kpts.size;
    auto array_ptr = ros_message->word_kpts.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_rtabmap_msgs__msg__KeyPoint(
        &array_ptr[i], cdr);
    }
  }

  // Field name: word_pts
  {
    size_t size = ros_message->word_pts.size;
    auto array_ptr = ros_message->word_pts.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_rtabmap_msgs__msg__Point3f(
        &array_ptr[i], cdr);
    }
  }

  // Field name: word_descriptors
  {
    size_t size = ros_message->word_descriptors.size;
    auto array_ptr = ros_message->word_descriptors.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: data
  {
    cdr_serialize_rtabmap_msgs__msg__SensorData(
      &ros_message->data, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
bool cdr_deserialize_rtabmap_msgs__msg__Node(
  eprosima::fastcdr::Cdr & cdr,
  rtabmap_msgs__msg__Node * ros_message)
{
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: map_id
  {
    cdr >> ros_message->map_id;
  }

  // Field name: weight
  {
    cdr >> ros_message->weight;
  }

  // Field name: stamp
  {
    cdr >> ros_message->stamp;
  }

  // Field name: label
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->label.data) {
      rosidl_runtime_c__String__init(&ros_message->label);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->label,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'label'\n");
      return false;
    }
  }

  // Field name: pose
  {
    cdr_deserialize_geometry_msgs__msg__Pose(cdr, &ros_message->pose);
  }

  // Field name: word_id_keys
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->word_id_keys.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->word_id_keys);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->word_id_keys, size)) {
      fprintf(stderr, "failed to create array for field 'word_id_keys'");
      return false;
    }
    auto array_ptr = ros_message->word_id_keys.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: word_id_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->word_id_values.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->word_id_values);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->word_id_values, size)) {
      fprintf(stderr, "failed to create array for field 'word_id_values'");
      return false;
    }
    auto array_ptr = ros_message->word_id_values.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: word_kpts
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->word_kpts.data) {
      rtabmap_msgs__msg__KeyPoint__Sequence__fini(&ros_message->word_kpts);
    }
    if (!rtabmap_msgs__msg__KeyPoint__Sequence__init(&ros_message->word_kpts, size)) {
      fprintf(stderr, "failed to create array for field 'word_kpts'");
      return false;
    }
    auto array_ptr = ros_message->word_kpts.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_rtabmap_msgs__msg__KeyPoint(cdr, &array_ptr[i]);
    }
  }

  // Field name: word_pts
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->word_pts.data) {
      rtabmap_msgs__msg__Point3f__Sequence__fini(&ros_message->word_pts);
    }
    if (!rtabmap_msgs__msg__Point3f__Sequence__init(&ros_message->word_pts, size)) {
      fprintf(stderr, "failed to create array for field 'word_pts'");
      return false;
    }
    auto array_ptr = ros_message->word_pts.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_rtabmap_msgs__msg__Point3f(cdr, &array_ptr[i]);
    }
  }

  // Field name: word_descriptors
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->word_descriptors.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->word_descriptors);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->word_descriptors, size)) {
      fprintf(stderr, "failed to create array for field 'word_descriptors'");
      return false;
    }
    auto array_ptr = ros_message->word_descriptors.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: data
  {
    cdr_deserialize_rtabmap_msgs__msg__SensorData(cdr, &ros_message->data);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t get_serialized_size_rtabmap_msgs__msg__Node(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Node__ros_msg_type * ros_message = static_cast<const _Node__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: map_id
  {
    size_t item_size = sizeof(ros_message->map_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: weight
  {
    size_t item_size = sizeof(ros_message->weight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: stamp
  {
    size_t item_size = sizeof(ros_message->stamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: label
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->label.size + 1);

  // Field name: pose
  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->pose), current_alignment);

  // Field name: word_id_keys
  {
    size_t array_size = ros_message->word_id_keys.size;
    auto array_ptr = ros_message->word_id_keys.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: word_id_values
  {
    size_t array_size = ros_message->word_id_values.size;
    auto array_ptr = ros_message->word_id_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: word_kpts
  {
    size_t array_size = ros_message->word_kpts.size;
    auto array_ptr = ros_message->word_kpts.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rtabmap_msgs__msg__KeyPoint(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: word_pts
  {
    size_t array_size = ros_message->word_pts.size;
    auto array_ptr = ros_message->word_pts.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rtabmap_msgs__msg__Point3f(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: word_descriptors
  {
    size_t array_size = ros_message->word_descriptors.size;
    auto array_ptr = ros_message->word_descriptors.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data
  current_alignment += get_serialized_size_rtabmap_msgs__msg__SensorData(
    &(ros_message->data), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t max_serialized_size_rtabmap_msgs__msg__Node(
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

  // Field name: id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: map_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: weight
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: stamp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: label
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: pose
  {
    size_t array_size = 1;
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

  // Field name: word_id_keys
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

  // Field name: word_id_values
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

  // Field name: word_kpts
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
        max_serialized_size_rtabmap_msgs__msg__KeyPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: word_pts
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
        max_serialized_size_rtabmap_msgs__msg__Point3f(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: word_descriptors
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: data
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_rtabmap_msgs__msg__SensorData(
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
    using DataType = rtabmap_msgs__msg__Node;
    is_plain =
      (
      offsetof(DataType, data) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
bool cdr_serialize_key_rtabmap_msgs__msg__Node(
  const rtabmap_msgs__msg__Node * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: map_id
  {
    cdr << ros_message->map_id;
  }

  // Field name: weight
  {
    cdr << ros_message->weight;
  }

  // Field name: stamp
  {
    cdr << ros_message->stamp;
  }

  // Field name: label
  {
    const rosidl_runtime_c__String * str = &ros_message->label;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: pose
  {
    cdr_serialize_key_geometry_msgs__msg__Pose(
      &ros_message->pose, cdr);
  }

  // Field name: word_id_keys
  {
    size_t size = ros_message->word_id_keys.size;
    auto array_ptr = ros_message->word_id_keys.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: word_id_values
  {
    size_t size = ros_message->word_id_values.size;
    auto array_ptr = ros_message->word_id_values.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: word_kpts
  {
    size_t size = ros_message->word_kpts.size;
    auto array_ptr = ros_message->word_kpts.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_rtabmap_msgs__msg__KeyPoint(
        &array_ptr[i], cdr);
    }
  }

  // Field name: word_pts
  {
    size_t size = ros_message->word_pts.size;
    auto array_ptr = ros_message->word_pts.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_rtabmap_msgs__msg__Point3f(
        &array_ptr[i], cdr);
    }
  }

  // Field name: word_descriptors
  {
    size_t size = ros_message->word_descriptors.size;
    auto array_ptr = ros_message->word_descriptors.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: data
  {
    cdr_serialize_key_rtabmap_msgs__msg__SensorData(
      &ros_message->data, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t get_serialized_size_key_rtabmap_msgs__msg__Node(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Node__ros_msg_type * ros_message = static_cast<const _Node__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: map_id
  {
    size_t item_size = sizeof(ros_message->map_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: weight
  {
    size_t item_size = sizeof(ros_message->weight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: stamp
  {
    size_t item_size = sizeof(ros_message->stamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: label
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->label.size + 1);

  // Field name: pose
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Pose(
    &(ros_message->pose), current_alignment);

  // Field name: word_id_keys
  {
    size_t array_size = ros_message->word_id_keys.size;
    auto array_ptr = ros_message->word_id_keys.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: word_id_values
  {
    size_t array_size = ros_message->word_id_values.size;
    auto array_ptr = ros_message->word_id_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: word_kpts
  {
    size_t array_size = ros_message->word_kpts.size;
    auto array_ptr = ros_message->word_kpts.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_rtabmap_msgs__msg__KeyPoint(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: word_pts
  {
    size_t array_size = ros_message->word_pts.size;
    auto array_ptr = ros_message->word_pts.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_rtabmap_msgs__msg__Point3f(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: word_descriptors
  {
    size_t array_size = ros_message->word_descriptors.size;
    auto array_ptr = ros_message->word_descriptors.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data
  current_alignment += get_serialized_size_key_rtabmap_msgs__msg__SensorData(
    &(ros_message->data), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t max_serialized_size_key_rtabmap_msgs__msg__Node(
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
  // Field name: id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: map_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: weight
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: stamp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: label
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: pose
  {
    size_t array_size = 1;
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

  // Field name: word_id_keys
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

  // Field name: word_id_values
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

  // Field name: word_kpts
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
        max_serialized_size_key_rtabmap_msgs__msg__KeyPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: word_pts
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
        max_serialized_size_key_rtabmap_msgs__msg__Point3f(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: word_descriptors
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: data
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_rtabmap_msgs__msg__SensorData(
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
    using DataType = rtabmap_msgs__msg__Node;
    is_plain =
      (
      offsetof(DataType, data) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Node__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const rtabmap_msgs__msg__Node * ros_message = static_cast<const rtabmap_msgs__msg__Node *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_rtabmap_msgs__msg__Node(ros_message, cdr);
}

static bool _Node__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  rtabmap_msgs__msg__Node * ros_message = static_cast<rtabmap_msgs__msg__Node *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_rtabmap_msgs__msg__Node(cdr, ros_message);
}

static uint32_t _Node__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rtabmap_msgs__msg__Node(
      untyped_ros_message, 0));
}

static size_t _Node__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rtabmap_msgs__msg__Node(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Node = {
  "rtabmap_msgs::msg",
  "Node",
  _Node__cdr_serialize,
  _Node__cdr_deserialize,
  _Node__get_serialized_size,
  _Node__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Node__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Node,
  get_message_typesupport_handle_function,
  &rtabmap_msgs__msg__Node__get_type_hash,
  &rtabmap_msgs__msg__Node__get_type_description,
  &rtabmap_msgs__msg__Node__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, Node)() {
  return &_Node__type_support;
}

#if defined(__cplusplus)
}
#endif
