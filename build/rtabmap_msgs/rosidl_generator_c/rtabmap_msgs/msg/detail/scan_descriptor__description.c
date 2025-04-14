// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rtabmap_msgs:msg/ScanDescriptor.idl
// generated code does not contain a copyright notice

#include "rtabmap_msgs/msg/detail/scan_descriptor__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
const rosidl_type_hash_t *
rtabmap_msgs__msg__ScanDescriptor__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x63, 0x1f, 0xc1, 0x03, 0x7c, 0x18, 0x28, 0x43,
      0x53, 0xad, 0xd8, 0x7d, 0x7a, 0xda, 0x9d, 0xa6,
      0xc6, 0xa0, 0xee, 0xf2, 0x99, 0x26, 0x53, 0x36,
      0x5d, 0xfc, 0xea, 0xb2, 0x89, 0x3e, 0xce, 0xf6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "sensor_msgs/msg/detail/point_field__functions.h"
#include "rtabmap_msgs/msg/detail/global_descriptor__functions.h"
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"
#include "sensor_msgs/msg/detail/laser_scan__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t rtabmap_msgs__msg__GlobalDescriptor__EXPECTED_HASH = {1, {
    0x45, 0x15, 0xe4, 0x5b, 0xd0, 0x40, 0xb6, 0xa5,
    0x93, 0xa5, 0x2f, 0x84, 0x9c, 0xd2, 0x74, 0x60,
    0x1d, 0x85, 0x98, 0x34, 0x94, 0xd9, 0x51, 0xff,
    0xed, 0x67, 0x78, 0x53, 0xda, 0x5b, 0x9d, 0x81,
  }};
static const rosidl_type_hash_t sensor_msgs__msg__LaserScan__EXPECTED_HASH = {1, {
    0x64, 0xc1, 0x91, 0x39, 0x80, 0x13, 0xaf, 0x96,
    0x50, 0x9d, 0x51, 0x8d, 0xac, 0x71, 0xd5, 0x16,
    0x4f, 0x93, 0x82, 0x55, 0x3f, 0xce, 0x5c, 0x1f,
    0x8c, 0xca, 0x5b, 0xe7, 0x92, 0x4b, 0xd8, 0x28,
  }};
static const rosidl_type_hash_t sensor_msgs__msg__PointCloud2__EXPECTED_HASH = {1, {
    0x91, 0x98, 0xca, 0xbf, 0x7d, 0xa3, 0x79, 0x6a,
    0xe6, 0xfe, 0x19, 0xc4, 0xcb, 0x3b, 0xdd, 0x35,
    0x25, 0x49, 0x29, 0x88, 0xc7, 0x05, 0x22, 0x62,
    0x8a, 0xf5, 0xda, 0xa1, 0x24, 0xba, 0xe2, 0xb5,
  }};
static const rosidl_type_hash_t sensor_msgs__msg__PointField__EXPECTED_HASH = {1, {
    0x5c, 0x6a, 0x47, 0x50, 0x72, 0x8c, 0x2b, 0xcf,
    0xbb, 0xf7, 0x03, 0x72, 0x25, 0xb2, 0x0b, 0x02,
    0xd4, 0x42, 0x96, 0x34, 0x73, 0x21, 0x46, 0xb7,
    0x42, 0xde, 0xe1, 0x72, 0x66, 0x37, 0xef, 0x01,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char rtabmap_msgs__msg__ScanDescriptor__TYPE_NAME[] = "rtabmap_msgs/msg/ScanDescriptor";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rtabmap_msgs__msg__GlobalDescriptor__TYPE_NAME[] = "rtabmap_msgs/msg/GlobalDescriptor";
static char sensor_msgs__msg__LaserScan__TYPE_NAME[] = "sensor_msgs/msg/LaserScan";
static char sensor_msgs__msg__PointCloud2__TYPE_NAME[] = "sensor_msgs/msg/PointCloud2";
static char sensor_msgs__msg__PointField__TYPE_NAME[] = "sensor_msgs/msg/PointField";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char rtabmap_msgs__msg__ScanDescriptor__FIELD_NAME__header[] = "header";
static char rtabmap_msgs__msg__ScanDescriptor__FIELD_NAME__scan[] = "scan";
static char rtabmap_msgs__msg__ScanDescriptor__FIELD_NAME__scan_cloud[] = "scan_cloud";
static char rtabmap_msgs__msg__ScanDescriptor__FIELD_NAME__global_descriptor[] = "global_descriptor";

static rosidl_runtime_c__type_description__Field rtabmap_msgs__msg__ScanDescriptor__FIELDS[] = {
  {
    {rtabmap_msgs__msg__ScanDescriptor__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__ScanDescriptor__FIELD_NAME__scan, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_msgs__msg__LaserScan__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__ScanDescriptor__FIELD_NAME__scan_cloud, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_msgs__msg__PointCloud2__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__ScanDescriptor__FIELD_NAME__global_descriptor, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rtabmap_msgs__msg__GlobalDescriptor__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rtabmap_msgs__msg__ScanDescriptor__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__GlobalDescriptor__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__LaserScan__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__PointCloud2__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__PointField__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rtabmap_msgs__msg__ScanDescriptor__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rtabmap_msgs__msg__ScanDescriptor__TYPE_NAME, 31, 31},
      {rtabmap_msgs__msg__ScanDescriptor__FIELDS, 4, 4},
    },
    {rtabmap_msgs__msg__ScanDescriptor__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rtabmap_msgs__msg__GlobalDescriptor__EXPECTED_HASH, rtabmap_msgs__msg__GlobalDescriptor__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rtabmap_msgs__msg__GlobalDescriptor__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__LaserScan__EXPECTED_HASH, sensor_msgs__msg__LaserScan__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = sensor_msgs__msg__LaserScan__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__PointCloud2__EXPECTED_HASH, sensor_msgs__msg__PointCloud2__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = sensor_msgs__msg__PointCloud2__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__PointField__EXPECTED_HASH, sensor_msgs__msg__PointField__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = sensor_msgs__msg__PointField__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "std_msgs/Header header\n"
  "\n"
  "# scan or scan_cloud is set\n"
  "sensor_msgs/LaserScan scan\n"
  "sensor_msgs/PointCloud2 scan_cloud\n"
  "\n"
  "GlobalDescriptor global_descriptor";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rtabmap_msgs__msg__ScanDescriptor__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rtabmap_msgs__msg__ScanDescriptor__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 150, 150},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rtabmap_msgs__msg__ScanDescriptor__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rtabmap_msgs__msg__ScanDescriptor__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rtabmap_msgs__msg__GlobalDescriptor__get_individual_type_description_source(NULL);
    sources[3] = *sensor_msgs__msg__LaserScan__get_individual_type_description_source(NULL);
    sources[4] = *sensor_msgs__msg__PointCloud2__get_individual_type_description_source(NULL);
    sources[5] = *sensor_msgs__msg__PointField__get_individual_type_description_source(NULL);
    sources[6] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
