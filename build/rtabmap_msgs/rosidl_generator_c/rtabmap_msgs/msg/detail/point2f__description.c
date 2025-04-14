// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rtabmap_msgs:msg/Point2f.idl
// generated code does not contain a copyright notice

#include "rtabmap_msgs/msg/detail/point2f__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
const rosidl_type_hash_t *
rtabmap_msgs__msg__Point2f__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x79, 0xc4, 0xe1, 0xce, 0x0c, 0x6f, 0x5a, 0xb6,
      0xcc, 0xe1, 0x5d, 0xe0, 0xce, 0xa2, 0x22, 0xa3,
      0x32, 0xf1, 0x2d, 0x2f, 0x96, 0x18, 0xe4, 0xc0,
      0x1d, 0x2a, 0xa8, 0xdf, 0xe9, 0xa0, 0x16, 0x34,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rtabmap_msgs__msg__Point2f__TYPE_NAME[] = "rtabmap_msgs/msg/Point2f";

// Define type names, field names, and default values
static char rtabmap_msgs__msg__Point2f__FIELD_NAME__x[] = "x";
static char rtabmap_msgs__msg__Point2f__FIELD_NAME__y[] = "y";

static rosidl_runtime_c__type_description__Field rtabmap_msgs__msg__Point2f__FIELDS[] = {
  {
    {rtabmap_msgs__msg__Point2f__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Point2f__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rtabmap_msgs__msg__Point2f__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rtabmap_msgs__msg__Point2f__TYPE_NAME, 24, 24},
      {rtabmap_msgs__msg__Point2f__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#class cv::Point2f\n"
  "#{\n"
  "#    float x;\n"
  "#    float y;\n"
  "#}\n"
  "\n"
  "float32 x\n"
  "float32 y";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rtabmap_msgs__msg__Point2f__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rtabmap_msgs__msg__Point2f__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 73, 73},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rtabmap_msgs__msg__Point2f__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rtabmap_msgs__msg__Point2f__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
