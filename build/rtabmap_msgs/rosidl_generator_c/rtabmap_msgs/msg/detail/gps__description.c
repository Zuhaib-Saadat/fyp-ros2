// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rtabmap_msgs:msg/GPS.idl
// generated code does not contain a copyright notice

#include "rtabmap_msgs/msg/detail/gps__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
const rosidl_type_hash_t *
rtabmap_msgs__msg__GPS__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xec, 0x02, 0x37, 0xd7, 0x94, 0x66, 0xe3, 0xe7,
      0x4a, 0x76, 0xc0, 0x71, 0x8a, 0xd6, 0x62, 0x39,
      0xd2, 0xd9, 0xc2, 0x50, 0xb8, 0xc8, 0x13, 0x76,
      0x5a, 0x5d, 0x9f, 0xd5, 0x4b, 0xde, 0x51, 0x2d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rtabmap_msgs__msg__GPS__TYPE_NAME[] = "rtabmap_msgs/msg/GPS";

// Define type names, field names, and default values
static char rtabmap_msgs__msg__GPS__FIELD_NAME__stamp[] = "stamp";
static char rtabmap_msgs__msg__GPS__FIELD_NAME__longitude[] = "longitude";
static char rtabmap_msgs__msg__GPS__FIELD_NAME__latitude[] = "latitude";
static char rtabmap_msgs__msg__GPS__FIELD_NAME__altitude[] = "altitude";
static char rtabmap_msgs__msg__GPS__FIELD_NAME__error[] = "error";
static char rtabmap_msgs__msg__GPS__FIELD_NAME__bearing[] = "bearing";

static rosidl_runtime_c__type_description__Field rtabmap_msgs__msg__GPS__FIELDS[] = {
  {
    {rtabmap_msgs__msg__GPS__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__GPS__FIELD_NAME__longitude, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__GPS__FIELD_NAME__latitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__GPS__FIELD_NAME__altitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__GPS__FIELD_NAME__error, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__GPS__FIELD_NAME__bearing, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rtabmap_msgs__msg__GPS__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rtabmap_msgs__msg__GPS__TYPE_NAME, 20, 20},
      {rtabmap_msgs__msg__GPS__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "float64 stamp      # in seconds\n"
  "float64 longitude  # DD format\n"
  "float64 latitude   # DD format\n"
  "float64 altitude   # in meters\n"
  "float64 error      # in meters\n"
  "float64 bearing    # North 0->360 deg";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rtabmap_msgs__msg__GPS__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rtabmap_msgs__msg__GPS__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 194, 194},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rtabmap_msgs__msg__GPS__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rtabmap_msgs__msg__GPS__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
