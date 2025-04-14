// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rtabmap_msgs:msg/RGBDImage.idl
// generated code does not contain a copyright notice

#include "rtabmap_msgs/msg/detail/rgbd_image__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
const rosidl_type_hash_t *
rtabmap_msgs__msg__RGBDImage__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x96, 0x8d, 0x5f, 0xe5, 0x89, 0x9d, 0xd0, 0x67,
      0x67, 0x06, 0x3f, 0xfe, 0x39, 0xdb, 0x48, 0xa9,
      0x66, 0x1c, 0x87, 0xd7, 0x56, 0xab, 0xaa, 0x84,
      0x48, 0xdd, 0x6b, 0xe8, 0x59, 0x90, 0x5d, 0x43,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "sensor_msgs/msg/detail/image__functions.h"
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"
#include "rtabmap_msgs/msg/detail/key_point__functions.h"
#include "rtabmap_msgs/msg/detail/global_descriptor__functions.h"
#include "rtabmap_msgs/msg/detail/point2f__functions.h"
#include "sensor_msgs/msg/detail/compressed_image__functions.h"
#include "sensor_msgs/msg/detail/camera_info__functions.h"
#include "rtabmap_msgs/msg/detail/point3f__functions.h"
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
static const rosidl_type_hash_t rtabmap_msgs__msg__KeyPoint__EXPECTED_HASH = {1, {
    0x97, 0x70, 0x32, 0x8c, 0x00, 0xf9, 0xee, 0xea,
    0xcc, 0x3a, 0x2c, 0x48, 0x9d, 0xed, 0xbe, 0xb2,
    0x09, 0x7d, 0xea, 0xc3, 0x25, 0x44, 0x63, 0x55,
    0x05, 0x7f, 0x7a, 0x89, 0x3e, 0x15, 0x53, 0x55,
  }};
static const rosidl_type_hash_t rtabmap_msgs__msg__Point2f__EXPECTED_HASH = {1, {
    0x79, 0xc4, 0xe1, 0xce, 0x0c, 0x6f, 0x5a, 0xb6,
    0xcc, 0xe1, 0x5d, 0xe0, 0xce, 0xa2, 0x22, 0xa3,
    0x32, 0xf1, 0x2d, 0x2f, 0x96, 0x18, 0xe4, 0xc0,
    0x1d, 0x2a, 0xa8, 0xdf, 0xe9, 0xa0, 0x16, 0x34,
  }};
static const rosidl_type_hash_t rtabmap_msgs__msg__Point3f__EXPECTED_HASH = {1, {
    0xda, 0x67, 0x38, 0x07, 0x41, 0x2d, 0x86, 0xa7,
    0x3b, 0x31, 0xfc, 0xb0, 0xec, 0x31, 0xf2, 0x2b,
    0x70, 0xad, 0xa9, 0xae, 0x96, 0xaf, 0x68, 0x2d,
    0xa1, 0xa2, 0x76, 0x57, 0xce, 0x99, 0x76, 0xb3,
  }};
static const rosidl_type_hash_t sensor_msgs__msg__CameraInfo__EXPECTED_HASH = {1, {
    0xb3, 0xdf, 0xd6, 0x8f, 0xf4, 0x6c, 0x9d, 0x56,
    0xc8, 0x0f, 0xd3, 0xbd, 0x4e, 0xd2, 0x2c, 0x7a,
    0x4d, 0xdc, 0xe8, 0xc8, 0x34, 0x8f, 0x2f, 0x59,
    0xc2, 0x99, 0xe7, 0x31, 0x18, 0xe7, 0xe2, 0x75,
  }};
static const rosidl_type_hash_t sensor_msgs__msg__CompressedImage__EXPECTED_HASH = {1, {
    0x15, 0x64, 0x07, 0x71, 0x53, 0x15, 0x71, 0x18,
    0x5e, 0x2e, 0xfc, 0x8a, 0x10, 0x0b, 0xaf, 0x92,
    0x39, 0x61, 0xa4, 0xd1, 0x5d, 0x55, 0x69, 0x65,
    0x2e, 0x6c, 0xb6, 0x69, 0x1e, 0x8e, 0x37, 0x1a,
  }};
static const rosidl_type_hash_t sensor_msgs__msg__Image__EXPECTED_HASH = {1, {
    0xd3, 0x1d, 0x41, 0xa9, 0xa4, 0xc4, 0xbc, 0x8e,
    0xae, 0x9b, 0xe7, 0x57, 0xb0, 0xbe, 0xed, 0x30,
    0x65, 0x64, 0xf7, 0x52, 0x6c, 0x88, 0xea, 0x6a,
    0x45, 0x88, 0xfb, 0x95, 0x82, 0x52, 0x7d, 0x47,
  }};
static const rosidl_type_hash_t sensor_msgs__msg__RegionOfInterest__EXPECTED_HASH = {1, {
    0xad, 0x16, 0xbc, 0xba, 0x5f, 0x91, 0x31, 0xdc,
    0xdb, 0xa6, 0xfb, 0xde, 0xd1, 0x9f, 0x72, 0x6f,
    0x54, 0x40, 0xe3, 0xc5, 0x13, 0xb4, 0xfb, 0x58,
    0x6d, 0xd3, 0x02, 0x7e, 0xee, 0xd8, 0xab, 0xb1,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char rtabmap_msgs__msg__RGBDImage__TYPE_NAME[] = "rtabmap_msgs/msg/RGBDImage";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rtabmap_msgs__msg__GlobalDescriptor__TYPE_NAME[] = "rtabmap_msgs/msg/GlobalDescriptor";
static char rtabmap_msgs__msg__KeyPoint__TYPE_NAME[] = "rtabmap_msgs/msg/KeyPoint";
static char rtabmap_msgs__msg__Point2f__TYPE_NAME[] = "rtabmap_msgs/msg/Point2f";
static char rtabmap_msgs__msg__Point3f__TYPE_NAME[] = "rtabmap_msgs/msg/Point3f";
static char sensor_msgs__msg__CameraInfo__TYPE_NAME[] = "sensor_msgs/msg/CameraInfo";
static char sensor_msgs__msg__CompressedImage__TYPE_NAME[] = "sensor_msgs/msg/CompressedImage";
static char sensor_msgs__msg__Image__TYPE_NAME[] = "sensor_msgs/msg/Image";
static char sensor_msgs__msg__RegionOfInterest__TYPE_NAME[] = "sensor_msgs/msg/RegionOfInterest";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char rtabmap_msgs__msg__RGBDImage__FIELD_NAME__header[] = "header";
static char rtabmap_msgs__msg__RGBDImage__FIELD_NAME__rgb_camera_info[] = "rgb_camera_info";
static char rtabmap_msgs__msg__RGBDImage__FIELD_NAME__depth_camera_info[] = "depth_camera_info";
static char rtabmap_msgs__msg__RGBDImage__FIELD_NAME__rgb[] = "rgb";
static char rtabmap_msgs__msg__RGBDImage__FIELD_NAME__depth[] = "depth";
static char rtabmap_msgs__msg__RGBDImage__FIELD_NAME__rgb_compressed[] = "rgb_compressed";
static char rtabmap_msgs__msg__RGBDImage__FIELD_NAME__depth_compressed[] = "depth_compressed";
static char rtabmap_msgs__msg__RGBDImage__FIELD_NAME__key_points[] = "key_points";
static char rtabmap_msgs__msg__RGBDImage__FIELD_NAME__points[] = "points";
static char rtabmap_msgs__msg__RGBDImage__FIELD_NAME__descriptors[] = "descriptors";
static char rtabmap_msgs__msg__RGBDImage__FIELD_NAME__global_descriptor[] = "global_descriptor";

static rosidl_runtime_c__type_description__Field rtabmap_msgs__msg__RGBDImage__FIELDS[] = {
  {
    {rtabmap_msgs__msg__RGBDImage__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__RGBDImage__FIELD_NAME__rgb_camera_info, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_msgs__msg__CameraInfo__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__RGBDImage__FIELD_NAME__depth_camera_info, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_msgs__msg__CameraInfo__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__RGBDImage__FIELD_NAME__rgb, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_msgs__msg__Image__TYPE_NAME, 21, 21},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__RGBDImage__FIELD_NAME__depth, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_msgs__msg__Image__TYPE_NAME, 21, 21},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__RGBDImage__FIELD_NAME__rgb_compressed, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_msgs__msg__CompressedImage__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__RGBDImage__FIELD_NAME__depth_compressed, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_msgs__msg__CompressedImage__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__RGBDImage__FIELD_NAME__key_points, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rtabmap_msgs__msg__KeyPoint__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__RGBDImage__FIELD_NAME__points, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rtabmap_msgs__msg__Point3f__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__RGBDImage__FIELD_NAME__descriptors, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__RGBDImage__FIELD_NAME__global_descriptor, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rtabmap_msgs__msg__GlobalDescriptor__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rtabmap_msgs__msg__RGBDImage__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__GlobalDescriptor__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__KeyPoint__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Point2f__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Point3f__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__CameraInfo__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__CompressedImage__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__Image__TYPE_NAME, 21, 21},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__RegionOfInterest__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rtabmap_msgs__msg__RGBDImage__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rtabmap_msgs__msg__RGBDImage__TYPE_NAME, 26, 26},
      {rtabmap_msgs__msg__RGBDImage__FIELDS, 11, 11},
    },
    {rtabmap_msgs__msg__RGBDImage__REFERENCED_TYPE_DESCRIPTIONS, 10, 10},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rtabmap_msgs__msg__GlobalDescriptor__EXPECTED_HASH, rtabmap_msgs__msg__GlobalDescriptor__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rtabmap_msgs__msg__GlobalDescriptor__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rtabmap_msgs__msg__KeyPoint__EXPECTED_HASH, rtabmap_msgs__msg__KeyPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rtabmap_msgs__msg__KeyPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rtabmap_msgs__msg__Point2f__EXPECTED_HASH, rtabmap_msgs__msg__Point2f__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = rtabmap_msgs__msg__Point2f__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rtabmap_msgs__msg__Point3f__EXPECTED_HASH, rtabmap_msgs__msg__Point3f__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = rtabmap_msgs__msg__Point3f__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__CameraInfo__EXPECTED_HASH, sensor_msgs__msg__CameraInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = sensor_msgs__msg__CameraInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__CompressedImage__EXPECTED_HASH, sensor_msgs__msg__CompressedImage__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = sensor_msgs__msg__CompressedImage__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__Image__EXPECTED_HASH, sensor_msgs__msg__Image__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = sensor_msgs__msg__Image__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__RegionOfInterest__EXPECTED_HASH, sensor_msgs__msg__RegionOfInterest__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = sensor_msgs__msg__RegionOfInterest__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "std_msgs/Header header\n"
  "\n"
  "# For stereo, rgb corresponds to left camera, and depth the right camera.\n"
  "\n"
  "# camera info\n"
  "sensor_msgs/CameraInfo rgb_camera_info\n"
  "sensor_msgs/CameraInfo depth_camera_info\n"
  "\n"
  "# Raw\n"
  "sensor_msgs/Image rgb\n"
  "sensor_msgs/Image depth\n"
  "\n"
  "# Compressed\n"
  "sensor_msgs/CompressedImage rgb_compressed\n"
  "sensor_msgs/CompressedImage depth_compressed\n"
  "\n"
  "# Local features\n"
  "KeyPoint[] key_points\n"
  "Point3f[] points\n"
  "# compressed descriptors\n"
  "# use rtabmap::util3d::uncompressData() from \"rtabmap/core/util3d.h\"\n"
  "uint8[] descriptors\n"
  "\n"
  "GlobalDescriptor global_descriptor";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rtabmap_msgs__msg__RGBDImage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rtabmap_msgs__msg__RGBDImage__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 556, 556},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rtabmap_msgs__msg__RGBDImage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[11];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 11, 11};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rtabmap_msgs__msg__RGBDImage__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rtabmap_msgs__msg__GlobalDescriptor__get_individual_type_description_source(NULL);
    sources[3] = *rtabmap_msgs__msg__KeyPoint__get_individual_type_description_source(NULL);
    sources[4] = *rtabmap_msgs__msg__Point2f__get_individual_type_description_source(NULL);
    sources[5] = *rtabmap_msgs__msg__Point3f__get_individual_type_description_source(NULL);
    sources[6] = *sensor_msgs__msg__CameraInfo__get_individual_type_description_source(NULL);
    sources[7] = *sensor_msgs__msg__CompressedImage__get_individual_type_description_source(NULL);
    sources[8] = *sensor_msgs__msg__Image__get_individual_type_description_source(NULL);
    sources[9] = *sensor_msgs__msg__RegionOfInterest__get_individual_type_description_source(NULL);
    sources[10] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
