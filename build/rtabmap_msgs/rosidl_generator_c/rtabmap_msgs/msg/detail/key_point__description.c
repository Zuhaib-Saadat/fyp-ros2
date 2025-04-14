// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rtabmap_msgs:msg/KeyPoint.idl
// generated code does not contain a copyright notice

#include "rtabmap_msgs/msg/detail/key_point__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
const rosidl_type_hash_t *
rtabmap_msgs__msg__KeyPoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x97, 0x70, 0x32, 0x8c, 0x00, 0xf9, 0xee, 0xea,
      0xcc, 0x3a, 0x2c, 0x48, 0x9d, 0xed, 0xbe, 0xb2,
      0x09, 0x7d, 0xea, 0xc3, 0x25, 0x44, 0x63, 0x55,
      0x05, 0x7f, 0x7a, 0x89, 0x3e, 0x15, 0x53, 0x55,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rtabmap_msgs/msg/detail/point2f__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rtabmap_msgs__msg__Point2f__EXPECTED_HASH = {1, {
    0x79, 0xc4, 0xe1, 0xce, 0x0c, 0x6f, 0x5a, 0xb6,
    0xcc, 0xe1, 0x5d, 0xe0, 0xce, 0xa2, 0x22, 0xa3,
    0x32, 0xf1, 0x2d, 0x2f, 0x96, 0x18, 0xe4, 0xc0,
    0x1d, 0x2a, 0xa8, 0xdf, 0xe9, 0xa0, 0x16, 0x34,
  }};
#endif

static char rtabmap_msgs__msg__KeyPoint__TYPE_NAME[] = "rtabmap_msgs/msg/KeyPoint";
static char rtabmap_msgs__msg__Point2f__TYPE_NAME[] = "rtabmap_msgs/msg/Point2f";

// Define type names, field names, and default values
static char rtabmap_msgs__msg__KeyPoint__FIELD_NAME__pt[] = "pt";
static char rtabmap_msgs__msg__KeyPoint__FIELD_NAME__size[] = "size";
static char rtabmap_msgs__msg__KeyPoint__FIELD_NAME__angle[] = "angle";
static char rtabmap_msgs__msg__KeyPoint__FIELD_NAME__response[] = "response";
static char rtabmap_msgs__msg__KeyPoint__FIELD_NAME__octave[] = "octave";
static char rtabmap_msgs__msg__KeyPoint__FIELD_NAME__class_id[] = "class_id";

static rosidl_runtime_c__type_description__Field rtabmap_msgs__msg__KeyPoint__FIELDS[] = {
  {
    {rtabmap_msgs__msg__KeyPoint__FIELD_NAME__pt, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rtabmap_msgs__msg__Point2f__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__KeyPoint__FIELD_NAME__size, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__KeyPoint__FIELD_NAME__angle, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__KeyPoint__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__KeyPoint__FIELD_NAME__octave, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__KeyPoint__FIELD_NAME__class_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rtabmap_msgs__msg__KeyPoint__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rtabmap_msgs__msg__Point2f__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rtabmap_msgs__msg__KeyPoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rtabmap_msgs__msg__KeyPoint__TYPE_NAME, 25, 25},
      {rtabmap_msgs__msg__KeyPoint__FIELDS, 6, 6},
    },
    {rtabmap_msgs__msg__KeyPoint__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&rtabmap_msgs__msg__Point2f__EXPECTED_HASH, rtabmap_msgs__msg__Point2f__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rtabmap_msgs__msg__Point2f__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#class cv::KeyPoint\n"
  "#{\n"
  "#    Point2f pt;\n"
  "#    float size;\n"
  "#    float angle;\n"
  "#    float response;\n"
  "#    int octave;\n"
  "#    int class_id;\n"
  "#}\n"
  "\n"
  "Point2f pt\n"
  "float32 size\n"
  "float32 angle\n"
  "float32 response\n"
  "int32 octave\n"
  "int32 class_id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rtabmap_msgs__msg__KeyPoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rtabmap_msgs__msg__KeyPoint__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 218, 218},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rtabmap_msgs__msg__KeyPoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rtabmap_msgs__msg__KeyPoint__get_individual_type_description_source(NULL),
    sources[1] = *rtabmap_msgs__msg__Point2f__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
