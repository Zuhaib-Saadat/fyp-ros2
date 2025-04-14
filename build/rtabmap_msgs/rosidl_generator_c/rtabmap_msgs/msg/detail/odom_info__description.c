// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rtabmap_msgs:msg/OdomInfo.idl
// generated code does not contain a copyright notice

#include "rtabmap_msgs/msg/detail/odom_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
const rosidl_type_hash_t *
rtabmap_msgs__msg__OdomInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5f, 0x23, 0x3a, 0x6a, 0xef, 0x15, 0xf0, 0xa5,
      0x50, 0xba, 0xde, 0x5f, 0xe9, 0x40, 0x7f, 0x04,
      0x85, 0x19, 0x41, 0x8b, 0x27, 0xe7, 0x26, 0x59,
      0x20, 0x18, 0x18, 0x82, 0xae, 0x4c, 0xf8, 0xb2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "sensor_msgs/msg/detail/point_field__functions.h"
#include "rtabmap_msgs/msg/detail/point3f__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"
#include "rtabmap_msgs/msg/detail/key_point__functions.h"
#include "geometry_msgs/msg/detail/vector3__functions.h"
#include "rtabmap_msgs/msg/detail/point2f__functions.h"
#include "geometry_msgs/msg/detail/transform__functions.h"
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"
#include "rtabmap_msgs/msg/detail/camera_model__functions.h"
#include "sensor_msgs/msg/detail/camera_info__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "rtabmap_msgs/msg/detail/camera_models__functions.h"
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
static const rosidl_type_hash_t rtabmap_msgs__msg__CameraModel__EXPECTED_HASH = {1, {
    0xdf, 0x92, 0x13, 0x4e, 0xe7, 0x0d, 0xd3, 0x46,
    0x55, 0x9e, 0xca, 0xc5, 0xb9, 0x69, 0x85, 0x1f,
    0xb0, 0x55, 0xb4, 0x19, 0xc2, 0xf4, 0x9c, 0x50,
    0x1d, 0x15, 0x87, 0xad, 0x4c, 0xd2, 0x22, 0xe5,
  }};
static const rosidl_type_hash_t rtabmap_msgs__msg__CameraModels__EXPECTED_HASH = {1, {
    0x47, 0x50, 0x18, 0x48, 0x0b, 0x6d, 0x71, 0xe5,
    0xca, 0x6e, 0x67, 0xb5, 0x93, 0x98, 0x93, 0x94,
    0x2f, 0x6a, 0x5d, 0x9f, 0xad, 0xd2, 0x61, 0x10,
    0x07, 0x1a, 0xbf, 0x9a, 0x78, 0x1c, 0x22, 0xa7,
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

static char rtabmap_msgs__msg__OdomInfo__TYPE_NAME[] = "rtabmap_msgs/msg/OdomInfo";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char geometry_msgs__msg__Transform__TYPE_NAME[] = "geometry_msgs/msg/Transform";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char rtabmap_msgs__msg__CameraModel__TYPE_NAME[] = "rtabmap_msgs/msg/CameraModel";
static char rtabmap_msgs__msg__CameraModels__TYPE_NAME[] = "rtabmap_msgs/msg/CameraModels";
static char rtabmap_msgs__msg__KeyPoint__TYPE_NAME[] = "rtabmap_msgs/msg/KeyPoint";
static char rtabmap_msgs__msg__Point2f__TYPE_NAME[] = "rtabmap_msgs/msg/Point2f";
static char rtabmap_msgs__msg__Point3f__TYPE_NAME[] = "rtabmap_msgs/msg/Point3f";
static char sensor_msgs__msg__CameraInfo__TYPE_NAME[] = "sensor_msgs/msg/CameraInfo";
static char sensor_msgs__msg__PointCloud2__TYPE_NAME[] = "sensor_msgs/msg/PointCloud2";
static char sensor_msgs__msg__PointField__TYPE_NAME[] = "sensor_msgs/msg/PointField";
static char sensor_msgs__msg__RegionOfInterest__TYPE_NAME[] = "sensor_msgs/msg/RegionOfInterest";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__header[] = "header";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__lost[] = "lost";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__matches[] = "matches";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__inliers[] = "inliers";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__icp_inliers_ratio[] = "icp_inliers_ratio";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__icp_rotation[] = "icp_rotation";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__icp_translation[] = "icp_translation";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__icp_structural_complexity[] = "icp_structural_complexity";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__icp_structural_distribution[] = "icp_structural_distribution";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__icp_correspondences[] = "icp_correspondences";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__covariance[] = "covariance";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__features[] = "features";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__local_map_size[] = "local_map_size";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__local_scan_map_size[] = "local_scan_map_size";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__local_key_frames[] = "local_key_frames";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__local_bundle_outliers[] = "local_bundle_outliers";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__local_bundle_constraints[] = "local_bundle_constraints";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__local_bundle_time[] = "local_bundle_time";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__key_frame_added[] = "key_frame_added";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__time_estimation[] = "time_estimation";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__time_particle_filtering[] = "time_particle_filtering";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__stamp[] = "stamp";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__interval[] = "interval";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__distance_travelled[] = "distance_travelled";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__memory_usage[] = "memory_usage";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__gravity_roll_error[] = "gravity_roll_error";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__gravity_pitch_error[] = "gravity_pitch_error";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__local_bundle_ids[] = "local_bundle_ids";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__local_bundle_models[] = "local_bundle_models";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__local_bundle_poses[] = "local_bundle_poses";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__transform[] = "transform";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__transform_filtered[] = "transform_filtered";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__transform_ground_truth[] = "transform_ground_truth";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__guess[] = "guess";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__type[] = "type";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__words_keys[] = "words_keys";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__words_values[] = "words_values";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__word_matches[] = "word_matches";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__word_inliers[] = "word_inliers";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__local_map_keys[] = "local_map_keys";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__local_map_values[] = "local_map_values";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__local_scan_map[] = "local_scan_map";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__ref_corners[] = "ref_corners";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__new_corners[] = "new_corners";
static char rtabmap_msgs__msg__OdomInfo__FIELD_NAME__corner_inliers[] = "corner_inliers";

static rosidl_runtime_c__type_description__Field rtabmap_msgs__msg__OdomInfo__FIELDS[] = {
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__lost, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__matches, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__inliers, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__icp_inliers_ratio, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__icp_rotation, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__icp_translation, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__icp_structural_complexity, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__icp_structural_distribution, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__icp_correspondences, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__covariance, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      36,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__features, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__local_map_size, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__local_scan_map_size, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__local_key_frames, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__local_bundle_outliers, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__local_bundle_constraints, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__local_bundle_time, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__key_frame_added, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__time_estimation, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__time_particle_filtering, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__interval, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__distance_travelled, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__memory_usage, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__gravity_roll_error, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__gravity_pitch_error, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__local_bundle_ids, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__local_bundle_models, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rtabmap_msgs__msg__CameraModels__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__local_bundle_poses, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__transform, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Transform__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__transform_filtered, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Transform__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__transform_ground_truth, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Transform__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__guess, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Transform__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__words_keys, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__words_values, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rtabmap_msgs__msg__KeyPoint__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__word_matches, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__word_inliers, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__local_map_keys, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__local_map_values, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rtabmap_msgs__msg__Point3f__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__local_scan_map, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_msgs__msg__PointCloud2__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__ref_corners, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rtabmap_msgs__msg__Point2f__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__new_corners, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rtabmap_msgs__msg__Point2f__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__OdomInfo__FIELD_NAME__corner_inliers, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rtabmap_msgs__msg__OdomInfo__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {rtabmap_msgs__msg__CameraModel__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__CameraModels__TYPE_NAME, 29, 29},
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
rtabmap_msgs__msg__OdomInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rtabmap_msgs__msg__OdomInfo__TYPE_NAME, 25, 25},
      {rtabmap_msgs__msg__OdomInfo__FIELDS, 45, 45},
    },
    {rtabmap_msgs__msg__OdomInfo__REFERENCED_TYPE_DESCRIPTIONS, 16, 16},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Transform__EXPECTED_HASH, geometry_msgs__msg__Transform__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Transform__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rtabmap_msgs__msg__CameraModel__EXPECTED_HASH, rtabmap_msgs__msg__CameraModel__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = rtabmap_msgs__msg__CameraModel__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rtabmap_msgs__msg__CameraModels__EXPECTED_HASH, rtabmap_msgs__msg__CameraModels__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = rtabmap_msgs__msg__CameraModels__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rtabmap_msgs__msg__KeyPoint__EXPECTED_HASH, rtabmap_msgs__msg__KeyPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = rtabmap_msgs__msg__KeyPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rtabmap_msgs__msg__Point2f__EXPECTED_HASH, rtabmap_msgs__msg__Point2f__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = rtabmap_msgs__msg__Point2f__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rtabmap_msgs__msg__Point3f__EXPECTED_HASH, rtabmap_msgs__msg__Point3f__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = rtabmap_msgs__msg__Point3f__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__CameraInfo__EXPECTED_HASH, sensor_msgs__msg__CameraInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = sensor_msgs__msg__CameraInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__PointCloud2__EXPECTED_HASH, sensor_msgs__msg__PointCloud2__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[12].fields = sensor_msgs__msg__PointCloud2__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__PointField__EXPECTED_HASH, sensor_msgs__msg__PointField__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[13].fields = sensor_msgs__msg__PointField__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__RegionOfInterest__EXPECTED_HASH, sensor_msgs__msg__RegionOfInterest__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[14].fields = sensor_msgs__msg__RegionOfInterest__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[15].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "std_msgs/Header header\n"
  "\n"
  "bool lost\n"
  "int32 matches\n"
  "int32 inliers\n"
  "float32 icp_inliers_ratio\n"
  "float32 icp_rotation\n"
  "float32 icp_translation\n"
  "float32 icp_structural_complexity\n"
  "float32 icp_structural_distribution\n"
  "int32 icp_correspondences\n"
  "float64[36] covariance\n"
  "int32 features\n"
  "int32 local_map_size\n"
  "int32 local_scan_map_size\n"
  "int32 local_key_frames\n"
  "int32 local_bundle_outliers\n"
  "int32 local_bundle_constraints\n"
  "float32 local_bundle_time\n"
  "bool key_frame_added\n"
  "float32 time_estimation\n"
  "float32 time_particle_filtering\n"
  "float32 stamp\n"
  "float32 interval\n"
  "float32 distance_travelled\n"
  "int32 memory_usage # MB\n"
  "\n"
  "float32 gravity_roll_error\n"
  "float32 gravity_pitch_error\n"
  "\n"
  "# Local bundle camera ids\n"
  "int32[] local_bundle_ids\n"
  "\n"
  "# Local bundle camera models\n"
  "CameraModels[] local_bundle_models\n"
  "\n"
  "# Local bundle camera poses\n"
  "geometry_msgs/Pose[] local_bundle_poses\n"
  "\n"
  "geometry_msgs/Transform transform\n"
  "geometry_msgs/Transform transform_filtered\n"
  "geometry_msgs/Transform transform_ground_truth\n"
  "geometry_msgs/Transform guess\n"
  "\n"
  "# 0=F2M, 1=F2F\n"
  "int32 type\n"
  "\n"
  "# F2M odometry\n"
  "#   std::multimap<int, cv::KeyPoint> words;\n"
  "#   std::vector<int> wordMatches;\n"
  "#   std::vector<int> wordInliers;\n"
  "int32[] words_keys\n"
  "KeyPoint[] words_values\n"
  "int32[] word_matches\n"
  "int32[] word_inliers\n"
  "int32[] local_map_keys\n"
  "Point3f[] local_map_values\n"
  "\n"
  "# local scan map data\n"
  "sensor_msgs/PointCloud2 local_scan_map\n"
  "\n"
  "# F2F odometry\n"
  "#   std::vector<cv::Point2f> ref_corners;\n"
  "#   std::vector<cv::Point2f> new_corners;\n"
  "#   std::vector<int> corner_inliers;\n"
  "Point2f[] ref_corners\n"
  "Point2f[] new_corners\n"
  "int32[] corner_inliers\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rtabmap_msgs__msg__OdomInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rtabmap_msgs__msg__OdomInfo__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1536, 1536},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rtabmap_msgs__msg__OdomInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[17];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 17, 17};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rtabmap_msgs__msg__OdomInfo__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Transform__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[7] = *rtabmap_msgs__msg__CameraModel__get_individual_type_description_source(NULL);
    sources[8] = *rtabmap_msgs__msg__CameraModels__get_individual_type_description_source(NULL);
    sources[9] = *rtabmap_msgs__msg__KeyPoint__get_individual_type_description_source(NULL);
    sources[10] = *rtabmap_msgs__msg__Point2f__get_individual_type_description_source(NULL);
    sources[11] = *rtabmap_msgs__msg__Point3f__get_individual_type_description_source(NULL);
    sources[12] = *sensor_msgs__msg__CameraInfo__get_individual_type_description_source(NULL);
    sources[13] = *sensor_msgs__msg__PointCloud2__get_individual_type_description_source(NULL);
    sources[14] = *sensor_msgs__msg__PointField__get_individual_type_description_source(NULL);
    sources[15] = *sensor_msgs__msg__RegionOfInterest__get_individual_type_description_source(NULL);
    sources[16] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
