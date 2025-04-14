// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rtabmap_msgs:msg/Point3f.idl
// generated code does not contain a copyright notice

#include "rtabmap_msgs/msg/detail/point3f__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
const rosidl_type_hash_t *
rtabmap_msgs__msg__Point3f__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xda, 0x67, 0x38, 0x07, 0x41, 0x2d, 0x86, 0xa7,
      0x3b, 0x31, 0xfc, 0xb0, 0xec, 0x31, 0xf2, 0x2b,
      0x70, 0xad, 0xa9, 0xae, 0x96, 0xaf, 0x68, 0x2d,
      0xa1, 0xa2, 0x76, 0x57, 0xce, 0x99, 0x76, 0xb3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rtabmap_msgs__msg__Point3f__TYPE_NAME[] = "rtabmap_msgs/msg/Point3f";

// Define type names, field names, and default values
static char rtabmap_msgs__msg__Point3f__FIELD_NAME__x[] = "x";
static char rtabmap_msgs__msg__Point3f__FIELD_NAME__y[] = "y";
static char rtabmap_msgs__msg__Point3f__FIELD_NAME__z[] = "z";

static rosidl_runtime_c__type_description__Field rtabmap_msgs__msg__Point3f__FIELDS[] = {
  {
    {rtabmap_msgs__msg__Point3f__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Point3f__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Point3f__FIELD_NAME__z, 1, 1},
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
rtabmap_msgs__msg__Point3f__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rtabmap_msgs__msg__Point3f__TYPE_NAME, 24, 24},
      {rtabmap_msgs__msg__Point3f__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#class cv::Point3f\n"
  "#{\n"
  "#    float x;\n"
  "#    float y;\n"
  "#    float z;\n"
  "#}\n"
  "\n"
  "float32 x\n"
  "float32 y\n"
  "float32 z";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rtabmap_msgs__msg__Point3f__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rtabmap_msgs__msg__Point3f__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 97, 97},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rtabmap_msgs__msg__Point3f__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rtabmap_msgs__msg__Point3f__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
