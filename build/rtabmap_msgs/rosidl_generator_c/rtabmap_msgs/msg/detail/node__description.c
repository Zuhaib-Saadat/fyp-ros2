// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rtabmap_msgs:msg/Node.idl
// generated code does not contain a copyright notice

#include "rtabmap_msgs/msg/detail/node__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
const rosidl_type_hash_t *
rtabmap_msgs__msg__Node__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x47, 0xbe, 0x2d, 0x62, 0x48, 0x6c, 0x12, 0x92,
      0xc7, 0x70, 0x63, 0x75, 0x9b, 0xc7, 0xbb, 0xb5,
      0x24, 0xd6, 0x9c, 0x9f, 0x2e, 0xa2, 0x4c, 0xfe,
      0x3c, 0xf4, 0x69, 0x30, 0xe4, 0x0f, 0x7a, 0x36,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "sensor_msgs/msg/detail/point_field__functions.h"
#include "sensor_msgs/msg/detail/image__functions.h"
#include "rtabmap_msgs/msg/detail/point2f__functions.h"
#include "geometry_msgs/msg/detail/vector3__functions.h"
#include "geometry_msgs/msg/detail/transform__functions.h"
#include "rtabmap_msgs/msg/detail/gps__functions.h"
#include "sensor_msgs/msg/detail/camera_info__functions.h"
#include "rtabmap_msgs/msg/detail/sensor_data__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "rtabmap_msgs/msg/detail/key_point__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "rtabmap_msgs/msg/detail/env_sensor__functions.h"
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"
#include "sensor_msgs/msg/detail/imu__functions.h"
#include "rtabmap_msgs/msg/detail/point3f__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "geometry_msgs/msg/detail/pose_with_covariance__functions.h"
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"
#include "rtabmap_msgs/msg/detail/global_descriptor__functions.h"
#include "rtabmap_msgs/msg/detail/landmark_detection__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Pose__EXPECTED_HASH = {1, {
    0xd5, 0x01, 0x95, 0x4e, 0x94, 0x76, 0xce, 0xa2,
    0x99, 0x69, 0x84, 0xe8, 0x12, 0x05, 0x4b, 0x68,
    0x02, 0x6a, 0xe0, 0xbf, 0xae, 0x78, 0x9d, 0x9a,
    0x10, 0xb2, 0x3d, 0xaf, 0x35, 0xcc, 0x90, 0xfa,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__PoseWithCovariance__EXPECTED_HASH = {1, {
    0x9a, 0x7c, 0x0f, 0xd2, 0x34, 0xb7, 0xf4, 0x5c,
    0x60, 0x98, 0x74, 0x5e, 0xcc, 0xcd, 0x77, 0x3c,
    0xa1, 0x08, 0x56, 0x70, 0xe6, 0x41, 0x07, 0x13,
    0x53, 0x97, 0xae, 0xe3, 0x1c, 0x02, 0xe1, 0xbb,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Transform__EXPECTED_HASH = {1, {
    0xbe, 0xb8, 0x3f, 0xbe, 0x69, 0x86, 0x36, 0x35,
    0x14, 0x61, 0xf6, 0xf3, 0x5d, 0x1a, 0xbb, 0x20,
    0x01, 0x0c, 0x43, 0xd5, 0x53, 0x74, 0xd8, 0x1b,
    0xd0, 0x41, 0xf1, 0xba, 0x25, 0x81, 0xfd, 0xdc,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
static const rosidl_type_hash_t rtabmap_msgs__msg__EnvSensor__EXPECTED_HASH = {1, {
    0xf6, 0xa1, 0xff, 0x0f, 0x87, 0x7c, 0x38, 0x76,
    0xce, 0xd2, 0x77, 0xed, 0x8c, 0x3c, 0xf3, 0xfa,
    0x65, 0x6b, 0x14, 0x6e, 0x74, 0x74, 0x8c, 0x4d,
    0x7e, 0xca, 0xfb, 0x44, 0xab, 0x85, 0x05, 0x5c,
  }};
static const rosidl_type_hash_t rtabmap_msgs__msg__GPS__EXPECTED_HASH = {1, {
    0xec, 0x02, 0x37, 0xd7, 0x94, 0x66, 0xe3, 0xe7,
    0x4a, 0x76, 0xc0, 0x71, 0x8a, 0xd6, 0x62, 0x39,
    0xd2, 0xd9, 0xc2, 0x50, 0xb8, 0xc8, 0x13, 0x76,
    0x5a, 0x5d, 0x9f, 0xd5, 0x4b, 0xde, 0x51, 0x2d,
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
static const rosidl_type_hash_t rtabmap_msgs__msg__LandmarkDetection__EXPECTED_HASH = {1, {
    0x7d, 0xf5, 0x60, 0xfd, 0x2d, 0xdd, 0xad, 0x2b,
    0x00, 0x4c, 0xa4, 0xb2, 0xc5, 0xf7, 0x13, 0xb7,
    0x46, 0x72, 0x4a, 0x0a, 0x31, 0x2c, 0xe0, 0x4a,
    0xbc, 0x9e, 0xf7, 0x3d, 0x41, 0x90, 0x1c, 0xfa,
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
static const rosidl_type_hash_t rtabmap_msgs__msg__SensorData__EXPECTED_HASH = {1, {
    0xaf, 0x2c, 0xae, 0x41, 0x5c, 0x41, 0x7c, 0x8f,
    0x18, 0x75, 0x0b, 0x6e, 0x55, 0x6d, 0x0a, 0x30,
    0x98, 0x29, 0x6c, 0xd0, 0x9b, 0x28, 0xb0, 0x3c,
    0x57, 0x4b, 0xf4, 0x42, 0xda, 0xcd, 0x7c, 0xdc,
  }};
static const rosidl_type_hash_t sensor_msgs__msg__CameraInfo__EXPECTED_HASH = {1, {
    0xb3, 0xdf, 0xd6, 0x8f, 0xf4, 0x6c, 0x9d, 0x56,
    0xc8, 0x0f, 0xd3, 0xbd, 0x4e, 0xd2, 0x2c, 0x7a,
    0x4d, 0xdc, 0xe8, 0xc8, 0x34, 0x8f, 0x2f, 0x59,
    0xc2, 0x99, 0xe7, 0x31, 0x18, 0xe7, 0xe2, 0x75,
  }};
static const rosidl_type_hash_t sensor_msgs__msg__Image__EXPECTED_HASH = {1, {
    0xd3, 0x1d, 0x41, 0xa9, 0xa4, 0xc4, 0xbc, 0x8e,
    0xae, 0x9b, 0xe7, 0x57, 0xb0, 0xbe, 0xed, 0x30,
    0x65, 0x64, 0xf7, 0x52, 0x6c, 0x88, 0xea, 0x6a,
    0x45, 0x88, 0xfb, 0x95, 0x82, 0x52, 0x7d, 0x47,
  }};
static const rosidl_type_hash_t sensor_msgs__msg__Imu__EXPECTED_HASH = {1, {
    0x7d, 0x9a, 0x00, 0xff, 0x13, 0x10, 0x80, 0x89,
    0x7a, 0x5e, 0xc7, 0xe2, 0x6e, 0x31, 0x59, 0x54,
    0xb8, 0xea, 0xe3, 0x35, 0x3c, 0x3f, 0x99, 0x5c,
    0x55, 0xfa, 0xf7, 0x15, 0x74, 0x00, 0x0b, 0x5b,
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

static char rtabmap_msgs__msg__Node__TYPE_NAME[] = "rtabmap_msgs/msg/Node";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__PoseWithCovariance__TYPE_NAME[] = "geometry_msgs/msg/PoseWithCovariance";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char geometry_msgs__msg__Transform__TYPE_NAME[] = "geometry_msgs/msg/Transform";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char rtabmap_msgs__msg__EnvSensor__TYPE_NAME[] = "rtabmap_msgs/msg/EnvSensor";
static char rtabmap_msgs__msg__GPS__TYPE_NAME[] = "rtabmap_msgs/msg/GPS";
static char rtabmap_msgs__msg__GlobalDescriptor__TYPE_NAME[] = "rtabmap_msgs/msg/GlobalDescriptor";
static char rtabmap_msgs__msg__KeyPoint__TYPE_NAME[] = "rtabmap_msgs/msg/KeyPoint";
static char rtabmap_msgs__msg__LandmarkDetection__TYPE_NAME[] = "rtabmap_msgs/msg/LandmarkDetection";
static char rtabmap_msgs__msg__Point2f__TYPE_NAME[] = "rtabmap_msgs/msg/Point2f";
static char rtabmap_msgs__msg__Point3f__TYPE_NAME[] = "rtabmap_msgs/msg/Point3f";
static char rtabmap_msgs__msg__SensorData__TYPE_NAME[] = "rtabmap_msgs/msg/SensorData";
static char sensor_msgs__msg__CameraInfo__TYPE_NAME[] = "sensor_msgs/msg/CameraInfo";
static char sensor_msgs__msg__Image__TYPE_NAME[] = "sensor_msgs/msg/Image";
static char sensor_msgs__msg__Imu__TYPE_NAME[] = "sensor_msgs/msg/Imu";
static char sensor_msgs__msg__PointCloud2__TYPE_NAME[] = "sensor_msgs/msg/PointCloud2";
static char sensor_msgs__msg__PointField__TYPE_NAME[] = "sensor_msgs/msg/PointField";
static char sensor_msgs__msg__RegionOfInterest__TYPE_NAME[] = "sensor_msgs/msg/RegionOfInterest";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char rtabmap_msgs__msg__Node__FIELD_NAME__id[] = "id";
static char rtabmap_msgs__msg__Node__FIELD_NAME__map_id[] = "map_id";
static char rtabmap_msgs__msg__Node__FIELD_NAME__weight[] = "weight";
static char rtabmap_msgs__msg__Node__FIELD_NAME__stamp[] = "stamp";
static char rtabmap_msgs__msg__Node__FIELD_NAME__label[] = "label";
static char rtabmap_msgs__msg__Node__FIELD_NAME__pose[] = "pose";
static char rtabmap_msgs__msg__Node__FIELD_NAME__word_id_keys[] = "word_id_keys";
static char rtabmap_msgs__msg__Node__FIELD_NAME__word_id_values[] = "word_id_values";
static char rtabmap_msgs__msg__Node__FIELD_NAME__word_kpts[] = "word_kpts";
static char rtabmap_msgs__msg__Node__FIELD_NAME__word_pts[] = "word_pts";
static char rtabmap_msgs__msg__Node__FIELD_NAME__word_descriptors[] = "word_descriptors";
static char rtabmap_msgs__msg__Node__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field rtabmap_msgs__msg__Node__FIELDS[] = {
  {
    {rtabmap_msgs__msg__Node__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Node__FIELD_NAME__map_id, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Node__FIELD_NAME__weight, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Node__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Node__FIELD_NAME__label, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Node__FIELD_NAME__pose, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Node__FIELD_NAME__word_id_keys, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Node__FIELD_NAME__word_id_values, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Node__FIELD_NAME__word_kpts, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rtabmap_msgs__msg__KeyPoint__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Node__FIELD_NAME__word_pts, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rtabmap_msgs__msg__Point3f__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Node__FIELD_NAME__word_descriptors, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Node__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rtabmap_msgs__msg__SensorData__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rtabmap_msgs__msg__Node__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__PoseWithCovariance__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Transform__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__EnvSensor__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__GPS__TYPE_NAME, 20, 20},
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
    {rtabmap_msgs__msg__LandmarkDetection__TYPE_NAME, 34, 34},
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
    {rtabmap_msgs__msg__SensorData__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__CameraInfo__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__Image__TYPE_NAME, 21, 21},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__Imu__TYPE_NAME, 19, 19},
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
    {sensor_msgs__msg__RegionOfInterest__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rtabmap_msgs__msg__Node__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rtabmap_msgs__msg__Node__TYPE_NAME, 21, 21},
      {rtabmap_msgs__msg__Node__FIELDS, 12, 12},
    },
    {rtabmap_msgs__msg__Node__REFERENCED_TYPE_DESCRIPTIONS, 22, 22},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PoseWithCovariance__EXPECTED_HASH, geometry_msgs__msg__PoseWithCovariance__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__PoseWithCovariance__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Transform__EXPECTED_HASH, geometry_msgs__msg__Transform__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Transform__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rtabmap_msgs__msg__EnvSensor__EXPECTED_HASH, rtabmap_msgs__msg__EnvSensor__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = rtabmap_msgs__msg__EnvSensor__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rtabmap_msgs__msg__GPS__EXPECTED_HASH, rtabmap_msgs__msg__GPS__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = rtabmap_msgs__msg__GPS__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rtabmap_msgs__msg__GlobalDescriptor__EXPECTED_HASH, rtabmap_msgs__msg__GlobalDescriptor__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = rtabmap_msgs__msg__GlobalDescriptor__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rtabmap_msgs__msg__KeyPoint__EXPECTED_HASH, rtabmap_msgs__msg__KeyPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = rtabmap_msgs__msg__KeyPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rtabmap_msgs__msg__LandmarkDetection__EXPECTED_HASH, rtabmap_msgs__msg__LandmarkDetection__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = rtabmap_msgs__msg__LandmarkDetection__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rtabmap_msgs__msg__Point2f__EXPECTED_HASH, rtabmap_msgs__msg__Point2f__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[12].fields = rtabmap_msgs__msg__Point2f__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rtabmap_msgs__msg__Point3f__EXPECTED_HASH, rtabmap_msgs__msg__Point3f__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[13].fields = rtabmap_msgs__msg__Point3f__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rtabmap_msgs__msg__SensorData__EXPECTED_HASH, rtabmap_msgs__msg__SensorData__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[14].fields = rtabmap_msgs__msg__SensorData__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__CameraInfo__EXPECTED_HASH, sensor_msgs__msg__CameraInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[15].fields = sensor_msgs__msg__CameraInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__Image__EXPECTED_HASH, sensor_msgs__msg__Image__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[16].fields = sensor_msgs__msg__Image__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__Imu__EXPECTED_HASH, sensor_msgs__msg__Imu__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[17].fields = sensor_msgs__msg__Imu__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__PointCloud2__EXPECTED_HASH, sensor_msgs__msg__PointCloud2__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[18].fields = sensor_msgs__msg__PointCloud2__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__PointField__EXPECTED_HASH, sensor_msgs__msg__PointField__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[19].fields = sensor_msgs__msg__PointField__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__RegionOfInterest__EXPECTED_HASH, sensor_msgs__msg__RegionOfInterest__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[20].fields = sensor_msgs__msg__RegionOfInterest__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[21].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#class rtabmap::Signature\n"
  "\n"
  "int32 id\n"
  "int32 map_id\n"
  "int32 weight\n"
  "float64 stamp\n"
  "string label\n"
  "\n"
  "# Pose from odometry not corrected\n"
  "geometry_msgs/Pose pose\n"
  "\n"
  "# std::multimap<wordId, index>\n"
  "# std::vector<cv::Keypoint>\n"
  "# std::vector<cv::Point3f>\n"
  "int32[] word_id_keys\n"
  "int32[] word_id_values\n"
  "KeyPoint[] word_kpts\n"
  "Point3f[] word_pts\n"
  "# compressed descriptors\n"
  "# use rtabmap::util3d::uncompressData() from \"rtabmap/core/util3d.h\"\n"
  "uint8[] word_descriptors\n"
  "\n"
  "SensorData data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rtabmap_msgs__msg__Node__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rtabmap_msgs__msg__Node__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 456, 456},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rtabmap_msgs__msg__Node__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[23];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 23, 23};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rtabmap_msgs__msg__Node__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__PoseWithCovariance__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Transform__get_individual_type_description_source(NULL);
    sources[7] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[8] = *rtabmap_msgs__msg__EnvSensor__get_individual_type_description_source(NULL);
    sources[9] = *rtabmap_msgs__msg__GPS__get_individual_type_description_source(NULL);
    sources[10] = *rtabmap_msgs__msg__GlobalDescriptor__get_individual_type_description_source(NULL);
    sources[11] = *rtabmap_msgs__msg__KeyPoint__get_individual_type_description_source(NULL);
    sources[12] = *rtabmap_msgs__msg__LandmarkDetection__get_individual_type_description_source(NULL);
    sources[13] = *rtabmap_msgs__msg__Point2f__get_individual_type_description_source(NULL);
    sources[14] = *rtabmap_msgs__msg__Point3f__get_individual_type_description_source(NULL);
    sources[15] = *rtabmap_msgs__msg__SensorData__get_individual_type_description_source(NULL);
    sources[16] = *sensor_msgs__msg__CameraInfo__get_individual_type_description_source(NULL);
    sources[17] = *sensor_msgs__msg__Image__get_individual_type_description_source(NULL);
    sources[18] = *sensor_msgs__msg__Imu__get_individual_type_description_source(NULL);
    sources[19] = *sensor_msgs__msg__PointCloud2__get_individual_type_description_source(NULL);
    sources[20] = *sensor_msgs__msg__PointField__get_individual_type_description_source(NULL);
    sources[21] = *sensor_msgs__msg__RegionOfInterest__get_individual_type_description_source(NULL);
    sources[22] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
