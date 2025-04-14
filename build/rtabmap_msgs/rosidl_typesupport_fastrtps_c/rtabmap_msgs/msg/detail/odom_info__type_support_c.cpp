// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rtabmap_msgs:msg/OdomInfo.idl
// generated code does not contain a copyright notice
#include "rtabmap_msgs/msg/detail/odom_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rtabmap_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rtabmap_msgs/msg/detail/odom_info__struct.h"
#include "rtabmap_msgs/msg/detail/odom_info__functions.h"
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

#include "geometry_msgs/msg/detail/pose__functions.h"  // local_bundle_poses
#include "geometry_msgs/msg/detail/transform__functions.h"  // guess, transform, transform_filtered, transform_ground_truth
#include "rosidl_runtime_c/primitives_sequence.h"  // corner_inliers, local_bundle_ids, local_map_keys, word_inliers, word_matches, words_keys
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // corner_inliers, local_bundle_ids, local_map_keys, word_inliers, word_matches, words_keys
#include "rtabmap_msgs/msg/detail/camera_models__functions.h"  // local_bundle_models
#include "rtabmap_msgs/msg/detail/key_point__functions.h"  // words_values
#include "rtabmap_msgs/msg/detail/point2f__functions.h"  // new_corners, ref_corners
#include "rtabmap_msgs/msg/detail/point3f__functions.h"  // local_map_values
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"  // local_scan_map
#include "std_msgs/msg/detail/header__functions.h"  // header

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

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
bool cdr_serialize_geometry_msgs__msg__Transform(
  const geometry_msgs__msg__Transform * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
bool cdr_deserialize_geometry_msgs__msg__Transform(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Transform * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t get_serialized_size_geometry_msgs__msg__Transform(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t max_serialized_size_geometry_msgs__msg__Transform(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
bool cdr_serialize_key_geometry_msgs__msg__Transform(
  const geometry_msgs__msg__Transform * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Transform(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Transform(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Transform)();

bool cdr_serialize_rtabmap_msgs__msg__CameraModels(
  const rtabmap_msgs__msg__CameraModels * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_rtabmap_msgs__msg__CameraModels(
  eprosima::fastcdr::Cdr & cdr,
  rtabmap_msgs__msg__CameraModels * ros_message);

size_t get_serialized_size_rtabmap_msgs__msg__CameraModels(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rtabmap_msgs__msg__CameraModels(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_rtabmap_msgs__msg__CameraModels(
  const rtabmap_msgs__msg__CameraModels * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_rtabmap_msgs__msg__CameraModels(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_rtabmap_msgs__msg__CameraModels(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, CameraModels)();

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

bool cdr_serialize_rtabmap_msgs__msg__Point2f(
  const rtabmap_msgs__msg__Point2f * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_rtabmap_msgs__msg__Point2f(
  eprosima::fastcdr::Cdr & cdr,
  rtabmap_msgs__msg__Point2f * ros_message);

size_t get_serialized_size_rtabmap_msgs__msg__Point2f(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rtabmap_msgs__msg__Point2f(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_rtabmap_msgs__msg__Point2f(
  const rtabmap_msgs__msg__Point2f * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_rtabmap_msgs__msg__Point2f(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_rtabmap_msgs__msg__Point2f(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, Point2f)();

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


using _OdomInfo__ros_msg_type = rtabmap_msgs__msg__OdomInfo;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
bool cdr_serialize_rtabmap_msgs__msg__OdomInfo(
  const rtabmap_msgs__msg__OdomInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: lost
  {
    cdr << (ros_message->lost ? true : false);
  }

  // Field name: matches
  {
    cdr << ros_message->matches;
  }

  // Field name: inliers
  {
    cdr << ros_message->inliers;
  }

  // Field name: icp_inliers_ratio
  {
    cdr << ros_message->icp_inliers_ratio;
  }

  // Field name: icp_rotation
  {
    cdr << ros_message->icp_rotation;
  }

  // Field name: icp_translation
  {
    cdr << ros_message->icp_translation;
  }

  // Field name: icp_structural_complexity
  {
    cdr << ros_message->icp_structural_complexity;
  }

  // Field name: icp_structural_distribution
  {
    cdr << ros_message->icp_structural_distribution;
  }

  // Field name: icp_correspondences
  {
    cdr << ros_message->icp_correspondences;
  }

  // Field name: covariance
  {
    size_t size = 36;
    auto array_ptr = ros_message->covariance;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: features
  {
    cdr << ros_message->features;
  }

  // Field name: local_map_size
  {
    cdr << ros_message->local_map_size;
  }

  // Field name: local_scan_map_size
  {
    cdr << ros_message->local_scan_map_size;
  }

  // Field name: local_key_frames
  {
    cdr << ros_message->local_key_frames;
  }

  // Field name: local_bundle_outliers
  {
    cdr << ros_message->local_bundle_outliers;
  }

  // Field name: local_bundle_constraints
  {
    cdr << ros_message->local_bundle_constraints;
  }

  // Field name: local_bundle_time
  {
    cdr << ros_message->local_bundle_time;
  }

  // Field name: key_frame_added
  {
    cdr << (ros_message->key_frame_added ? true : false);
  }

  // Field name: time_estimation
  {
    cdr << ros_message->time_estimation;
  }

  // Field name: time_particle_filtering
  {
    cdr << ros_message->time_particle_filtering;
  }

  // Field name: stamp
  {
    cdr << ros_message->stamp;
  }

  // Field name: interval
  {
    cdr << ros_message->interval;
  }

  // Field name: distance_travelled
  {
    cdr << ros_message->distance_travelled;
  }

  // Field name: memory_usage
  {
    cdr << ros_message->memory_usage;
  }

  // Field name: gravity_roll_error
  {
    cdr << ros_message->gravity_roll_error;
  }

  // Field name: gravity_pitch_error
  {
    cdr << ros_message->gravity_pitch_error;
  }

  // Field name: local_bundle_ids
  {
    size_t size = ros_message->local_bundle_ids.size;
    auto array_ptr = ros_message->local_bundle_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: local_bundle_models
  {
    size_t size = ros_message->local_bundle_models.size;
    auto array_ptr = ros_message->local_bundle_models.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_rtabmap_msgs__msg__CameraModels(
        &array_ptr[i], cdr);
    }
  }

  // Field name: local_bundle_poses
  {
    size_t size = ros_message->local_bundle_poses.size;
    auto array_ptr = ros_message->local_bundle_poses.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_geometry_msgs__msg__Pose(
        &array_ptr[i], cdr);
    }
  }

  // Field name: transform
  {
    cdr_serialize_geometry_msgs__msg__Transform(
      &ros_message->transform, cdr);
  }

  // Field name: transform_filtered
  {
    cdr_serialize_geometry_msgs__msg__Transform(
      &ros_message->transform_filtered, cdr);
  }

  // Field name: transform_ground_truth
  {
    cdr_serialize_geometry_msgs__msg__Transform(
      &ros_message->transform_ground_truth, cdr);
  }

  // Field name: guess
  {
    cdr_serialize_geometry_msgs__msg__Transform(
      &ros_message->guess, cdr);
  }

  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: words_keys
  {
    size_t size = ros_message->words_keys.size;
    auto array_ptr = ros_message->words_keys.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: words_values
  {
    size_t size = ros_message->words_values.size;
    auto array_ptr = ros_message->words_values.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_rtabmap_msgs__msg__KeyPoint(
        &array_ptr[i], cdr);
    }
  }

  // Field name: word_matches
  {
    size_t size = ros_message->word_matches.size;
    auto array_ptr = ros_message->word_matches.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: word_inliers
  {
    size_t size = ros_message->word_inliers.size;
    auto array_ptr = ros_message->word_inliers.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: local_map_keys
  {
    size_t size = ros_message->local_map_keys.size;
    auto array_ptr = ros_message->local_map_keys.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: local_map_values
  {
    size_t size = ros_message->local_map_values.size;
    auto array_ptr = ros_message->local_map_values.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_rtabmap_msgs__msg__Point3f(
        &array_ptr[i], cdr);
    }
  }

  // Field name: local_scan_map
  {
    cdr_serialize_sensor_msgs__msg__PointCloud2(
      &ros_message->local_scan_map, cdr);
  }

  // Field name: ref_corners
  {
    size_t size = ros_message->ref_corners.size;
    auto array_ptr = ros_message->ref_corners.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_rtabmap_msgs__msg__Point2f(
        &array_ptr[i], cdr);
    }
  }

  // Field name: new_corners
  {
    size_t size = ros_message->new_corners.size;
    auto array_ptr = ros_message->new_corners.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_rtabmap_msgs__msg__Point2f(
        &array_ptr[i], cdr);
    }
  }

  // Field name: corner_inliers
  {
    size_t size = ros_message->corner_inliers.size;
    auto array_ptr = ros_message->corner_inliers.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
bool cdr_deserialize_rtabmap_msgs__msg__OdomInfo(
  eprosima::fastcdr::Cdr & cdr,
  rtabmap_msgs__msg__OdomInfo * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->lost = tmp ? true : false;
  }

  // Field name: matches
  {
    cdr >> ros_message->matches;
  }

  // Field name: inliers
  {
    cdr >> ros_message->inliers;
  }

  // Field name: icp_inliers_ratio
  {
    cdr >> ros_message->icp_inliers_ratio;
  }

  // Field name: icp_rotation
  {
    cdr >> ros_message->icp_rotation;
  }

  // Field name: icp_translation
  {
    cdr >> ros_message->icp_translation;
  }

  // Field name: icp_structural_complexity
  {
    cdr >> ros_message->icp_structural_complexity;
  }

  // Field name: icp_structural_distribution
  {
    cdr >> ros_message->icp_structural_distribution;
  }

  // Field name: icp_correspondences
  {
    cdr >> ros_message->icp_correspondences;
  }

  // Field name: covariance
  {
    size_t size = 36;
    auto array_ptr = ros_message->covariance;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: features
  {
    cdr >> ros_message->features;
  }

  // Field name: local_map_size
  {
    cdr >> ros_message->local_map_size;
  }

  // Field name: local_scan_map_size
  {
    cdr >> ros_message->local_scan_map_size;
  }

  // Field name: local_key_frames
  {
    cdr >> ros_message->local_key_frames;
  }

  // Field name: local_bundle_outliers
  {
    cdr >> ros_message->local_bundle_outliers;
  }

  // Field name: local_bundle_constraints
  {
    cdr >> ros_message->local_bundle_constraints;
  }

  // Field name: local_bundle_time
  {
    cdr >> ros_message->local_bundle_time;
  }

  // Field name: key_frame_added
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->key_frame_added = tmp ? true : false;
  }

  // Field name: time_estimation
  {
    cdr >> ros_message->time_estimation;
  }

  // Field name: time_particle_filtering
  {
    cdr >> ros_message->time_particle_filtering;
  }

  // Field name: stamp
  {
    cdr >> ros_message->stamp;
  }

  // Field name: interval
  {
    cdr >> ros_message->interval;
  }

  // Field name: distance_travelled
  {
    cdr >> ros_message->distance_travelled;
  }

  // Field name: memory_usage
  {
    cdr >> ros_message->memory_usage;
  }

  // Field name: gravity_roll_error
  {
    cdr >> ros_message->gravity_roll_error;
  }

  // Field name: gravity_pitch_error
  {
    cdr >> ros_message->gravity_pitch_error;
  }

  // Field name: local_bundle_ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->local_bundle_ids.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->local_bundle_ids);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->local_bundle_ids, size)) {
      fprintf(stderr, "failed to create array for field 'local_bundle_ids'");
      return false;
    }
    auto array_ptr = ros_message->local_bundle_ids.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: local_bundle_models
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->local_bundle_models.data) {
      rtabmap_msgs__msg__CameraModels__Sequence__fini(&ros_message->local_bundle_models);
    }
    if (!rtabmap_msgs__msg__CameraModels__Sequence__init(&ros_message->local_bundle_models, size)) {
      fprintf(stderr, "failed to create array for field 'local_bundle_models'");
      return false;
    }
    auto array_ptr = ros_message->local_bundle_models.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_rtabmap_msgs__msg__CameraModels(cdr, &array_ptr[i]);
    }
  }

  // Field name: local_bundle_poses
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->local_bundle_poses.data) {
      geometry_msgs__msg__Pose__Sequence__fini(&ros_message->local_bundle_poses);
    }
    if (!geometry_msgs__msg__Pose__Sequence__init(&ros_message->local_bundle_poses, size)) {
      fprintf(stderr, "failed to create array for field 'local_bundle_poses'");
      return false;
    }
    auto array_ptr = ros_message->local_bundle_poses.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_geometry_msgs__msg__Pose(cdr, &array_ptr[i]);
    }
  }

  // Field name: transform
  {
    cdr_deserialize_geometry_msgs__msg__Transform(cdr, &ros_message->transform);
  }

  // Field name: transform_filtered
  {
    cdr_deserialize_geometry_msgs__msg__Transform(cdr, &ros_message->transform_filtered);
  }

  // Field name: transform_ground_truth
  {
    cdr_deserialize_geometry_msgs__msg__Transform(cdr, &ros_message->transform_ground_truth);
  }

  // Field name: guess
  {
    cdr_deserialize_geometry_msgs__msg__Transform(cdr, &ros_message->guess);
  }

  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: words_keys
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->words_keys.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->words_keys);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->words_keys, size)) {
      fprintf(stderr, "failed to create array for field 'words_keys'");
      return false;
    }
    auto array_ptr = ros_message->words_keys.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: words_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->words_values.data) {
      rtabmap_msgs__msg__KeyPoint__Sequence__fini(&ros_message->words_values);
    }
    if (!rtabmap_msgs__msg__KeyPoint__Sequence__init(&ros_message->words_values, size)) {
      fprintf(stderr, "failed to create array for field 'words_values'");
      return false;
    }
    auto array_ptr = ros_message->words_values.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_rtabmap_msgs__msg__KeyPoint(cdr, &array_ptr[i]);
    }
  }

  // Field name: word_matches
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->word_matches.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->word_matches);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->word_matches, size)) {
      fprintf(stderr, "failed to create array for field 'word_matches'");
      return false;
    }
    auto array_ptr = ros_message->word_matches.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: word_inliers
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->word_inliers.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->word_inliers);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->word_inliers, size)) {
      fprintf(stderr, "failed to create array for field 'word_inliers'");
      return false;
    }
    auto array_ptr = ros_message->word_inliers.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: local_map_keys
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->local_map_keys.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->local_map_keys);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->local_map_keys, size)) {
      fprintf(stderr, "failed to create array for field 'local_map_keys'");
      return false;
    }
    auto array_ptr = ros_message->local_map_keys.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: local_map_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->local_map_values.data) {
      rtabmap_msgs__msg__Point3f__Sequence__fini(&ros_message->local_map_values);
    }
    if (!rtabmap_msgs__msg__Point3f__Sequence__init(&ros_message->local_map_values, size)) {
      fprintf(stderr, "failed to create array for field 'local_map_values'");
      return false;
    }
    auto array_ptr = ros_message->local_map_values.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_rtabmap_msgs__msg__Point3f(cdr, &array_ptr[i]);
    }
  }

  // Field name: local_scan_map
  {
    cdr_deserialize_sensor_msgs__msg__PointCloud2(cdr, &ros_message->local_scan_map);
  }

  // Field name: ref_corners
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ref_corners.data) {
      rtabmap_msgs__msg__Point2f__Sequence__fini(&ros_message->ref_corners);
    }
    if (!rtabmap_msgs__msg__Point2f__Sequence__init(&ros_message->ref_corners, size)) {
      fprintf(stderr, "failed to create array for field 'ref_corners'");
      return false;
    }
    auto array_ptr = ros_message->ref_corners.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_rtabmap_msgs__msg__Point2f(cdr, &array_ptr[i]);
    }
  }

  // Field name: new_corners
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->new_corners.data) {
      rtabmap_msgs__msg__Point2f__Sequence__fini(&ros_message->new_corners);
    }
    if (!rtabmap_msgs__msg__Point2f__Sequence__init(&ros_message->new_corners, size)) {
      fprintf(stderr, "failed to create array for field 'new_corners'");
      return false;
    }
    auto array_ptr = ros_message->new_corners.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_rtabmap_msgs__msg__Point2f(cdr, &array_ptr[i]);
    }
  }

  // Field name: corner_inliers
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->corner_inliers.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->corner_inliers);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->corner_inliers, size)) {
      fprintf(stderr, "failed to create array for field 'corner_inliers'");
      return false;
    }
    auto array_ptr = ros_message->corner_inliers.data;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t get_serialized_size_rtabmap_msgs__msg__OdomInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OdomInfo__ros_msg_type * ros_message = static_cast<const _OdomInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: lost
  {
    size_t item_size = sizeof(ros_message->lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: matches
  {
    size_t item_size = sizeof(ros_message->matches);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: inliers
  {
    size_t item_size = sizeof(ros_message->inliers);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: icp_inliers_ratio
  {
    size_t item_size = sizeof(ros_message->icp_inliers_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: icp_rotation
  {
    size_t item_size = sizeof(ros_message->icp_rotation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: icp_translation
  {
    size_t item_size = sizeof(ros_message->icp_translation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: icp_structural_complexity
  {
    size_t item_size = sizeof(ros_message->icp_structural_complexity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: icp_structural_distribution
  {
    size_t item_size = sizeof(ros_message->icp_structural_distribution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: icp_correspondences
  {
    size_t item_size = sizeof(ros_message->icp_correspondences);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: covariance
  {
    size_t array_size = 36;
    auto array_ptr = ros_message->covariance;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: features
  {
    size_t item_size = sizeof(ros_message->features);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: local_map_size
  {
    size_t item_size = sizeof(ros_message->local_map_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: local_scan_map_size
  {
    size_t item_size = sizeof(ros_message->local_scan_map_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: local_key_frames
  {
    size_t item_size = sizeof(ros_message->local_key_frames);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: local_bundle_outliers
  {
    size_t item_size = sizeof(ros_message->local_bundle_outliers);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: local_bundle_constraints
  {
    size_t item_size = sizeof(ros_message->local_bundle_constraints);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: local_bundle_time
  {
    size_t item_size = sizeof(ros_message->local_bundle_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: key_frame_added
  {
    size_t item_size = sizeof(ros_message->key_frame_added);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: time_estimation
  {
    size_t item_size = sizeof(ros_message->time_estimation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: time_particle_filtering
  {
    size_t item_size = sizeof(ros_message->time_particle_filtering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: stamp
  {
    size_t item_size = sizeof(ros_message->stamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: interval
  {
    size_t item_size = sizeof(ros_message->interval);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: distance_travelled
  {
    size_t item_size = sizeof(ros_message->distance_travelled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: memory_usage
  {
    size_t item_size = sizeof(ros_message->memory_usage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gravity_roll_error
  {
    size_t item_size = sizeof(ros_message->gravity_roll_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gravity_pitch_error
  {
    size_t item_size = sizeof(ros_message->gravity_pitch_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: local_bundle_ids
  {
    size_t array_size = ros_message->local_bundle_ids.size;
    auto array_ptr = ros_message->local_bundle_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: local_bundle_models
  {
    size_t array_size = ros_message->local_bundle_models.size;
    auto array_ptr = ros_message->local_bundle_models.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rtabmap_msgs__msg__CameraModels(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: local_bundle_poses
  {
    size_t array_size = ros_message->local_bundle_poses.size;
    auto array_ptr = ros_message->local_bundle_poses.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: transform
  current_alignment += get_serialized_size_geometry_msgs__msg__Transform(
    &(ros_message->transform), current_alignment);

  // Field name: transform_filtered
  current_alignment += get_serialized_size_geometry_msgs__msg__Transform(
    &(ros_message->transform_filtered), current_alignment);

  // Field name: transform_ground_truth
  current_alignment += get_serialized_size_geometry_msgs__msg__Transform(
    &(ros_message->transform_ground_truth), current_alignment);

  // Field name: guess
  current_alignment += get_serialized_size_geometry_msgs__msg__Transform(
    &(ros_message->guess), current_alignment);

  // Field name: type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: words_keys
  {
    size_t array_size = ros_message->words_keys.size;
    auto array_ptr = ros_message->words_keys.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: words_values
  {
    size_t array_size = ros_message->words_values.size;
    auto array_ptr = ros_message->words_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rtabmap_msgs__msg__KeyPoint(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: word_matches
  {
    size_t array_size = ros_message->word_matches.size;
    auto array_ptr = ros_message->word_matches.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: word_inliers
  {
    size_t array_size = ros_message->word_inliers.size;
    auto array_ptr = ros_message->word_inliers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: local_map_keys
  {
    size_t array_size = ros_message->local_map_keys.size;
    auto array_ptr = ros_message->local_map_keys.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: local_map_values
  {
    size_t array_size = ros_message->local_map_values.size;
    auto array_ptr = ros_message->local_map_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rtabmap_msgs__msg__Point3f(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: local_scan_map
  current_alignment += get_serialized_size_sensor_msgs__msg__PointCloud2(
    &(ros_message->local_scan_map), current_alignment);

  // Field name: ref_corners
  {
    size_t array_size = ros_message->ref_corners.size;
    auto array_ptr = ros_message->ref_corners.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rtabmap_msgs__msg__Point2f(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: new_corners
  {
    size_t array_size = ros_message->new_corners.size;
    auto array_ptr = ros_message->new_corners.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rtabmap_msgs__msg__Point2f(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: corner_inliers
  {
    size_t array_size = ros_message->corner_inliers.size;
    auto array_ptr = ros_message->corner_inliers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t max_serialized_size_rtabmap_msgs__msg__OdomInfo(
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

  // Field name: lost
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: matches
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: inliers
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: icp_inliers_ratio
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: icp_rotation
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: icp_translation
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: icp_structural_complexity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: icp_structural_distribution
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: icp_correspondences
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: covariance
  {
    size_t array_size = 36;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: features
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: local_map_size
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: local_scan_map_size
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: local_key_frames
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: local_bundle_outliers
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: local_bundle_constraints
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: local_bundle_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: key_frame_added
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: time_estimation
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: time_particle_filtering
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: stamp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: interval
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: distance_travelled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: memory_usage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: gravity_roll_error
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: gravity_pitch_error
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: local_bundle_ids
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

  // Field name: local_bundle_models
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
        max_serialized_size_rtabmap_msgs__msg__CameraModels(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: local_bundle_poses
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
        max_serialized_size_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: transform
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Transform(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: transform_filtered
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Transform(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: transform_ground_truth
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Transform(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: guess
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Transform(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: words_keys
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

  // Field name: words_values
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

  // Field name: word_matches
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

  // Field name: word_inliers
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

  // Field name: local_map_keys
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

  // Field name: local_map_values
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

  // Field name: local_scan_map
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

  // Field name: ref_corners
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
        max_serialized_size_rtabmap_msgs__msg__Point2f(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: new_corners
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
        max_serialized_size_rtabmap_msgs__msg__Point2f(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: corner_inliers
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


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rtabmap_msgs__msg__OdomInfo;
    is_plain =
      (
      offsetof(DataType, corner_inliers) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
bool cdr_serialize_key_rtabmap_msgs__msg__OdomInfo(
  const rtabmap_msgs__msg__OdomInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: lost
  {
    cdr << (ros_message->lost ? true : false);
  }

  // Field name: matches
  {
    cdr << ros_message->matches;
  }

  // Field name: inliers
  {
    cdr << ros_message->inliers;
  }

  // Field name: icp_inliers_ratio
  {
    cdr << ros_message->icp_inliers_ratio;
  }

  // Field name: icp_rotation
  {
    cdr << ros_message->icp_rotation;
  }

  // Field name: icp_translation
  {
    cdr << ros_message->icp_translation;
  }

  // Field name: icp_structural_complexity
  {
    cdr << ros_message->icp_structural_complexity;
  }

  // Field name: icp_structural_distribution
  {
    cdr << ros_message->icp_structural_distribution;
  }

  // Field name: icp_correspondences
  {
    cdr << ros_message->icp_correspondences;
  }

  // Field name: covariance
  {
    size_t size = 36;
    auto array_ptr = ros_message->covariance;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: features
  {
    cdr << ros_message->features;
  }

  // Field name: local_map_size
  {
    cdr << ros_message->local_map_size;
  }

  // Field name: local_scan_map_size
  {
    cdr << ros_message->local_scan_map_size;
  }

  // Field name: local_key_frames
  {
    cdr << ros_message->local_key_frames;
  }

  // Field name: local_bundle_outliers
  {
    cdr << ros_message->local_bundle_outliers;
  }

  // Field name: local_bundle_constraints
  {
    cdr << ros_message->local_bundle_constraints;
  }

  // Field name: local_bundle_time
  {
    cdr << ros_message->local_bundle_time;
  }

  // Field name: key_frame_added
  {
    cdr << (ros_message->key_frame_added ? true : false);
  }

  // Field name: time_estimation
  {
    cdr << ros_message->time_estimation;
  }

  // Field name: time_particle_filtering
  {
    cdr << ros_message->time_particle_filtering;
  }

  // Field name: stamp
  {
    cdr << ros_message->stamp;
  }

  // Field name: interval
  {
    cdr << ros_message->interval;
  }

  // Field name: distance_travelled
  {
    cdr << ros_message->distance_travelled;
  }

  // Field name: memory_usage
  {
    cdr << ros_message->memory_usage;
  }

  // Field name: gravity_roll_error
  {
    cdr << ros_message->gravity_roll_error;
  }

  // Field name: gravity_pitch_error
  {
    cdr << ros_message->gravity_pitch_error;
  }

  // Field name: local_bundle_ids
  {
    size_t size = ros_message->local_bundle_ids.size;
    auto array_ptr = ros_message->local_bundle_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: local_bundle_models
  {
    size_t size = ros_message->local_bundle_models.size;
    auto array_ptr = ros_message->local_bundle_models.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_rtabmap_msgs__msg__CameraModels(
        &array_ptr[i], cdr);
    }
  }

  // Field name: local_bundle_poses
  {
    size_t size = ros_message->local_bundle_poses.size;
    auto array_ptr = ros_message->local_bundle_poses.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_geometry_msgs__msg__Pose(
        &array_ptr[i], cdr);
    }
  }

  // Field name: transform
  {
    cdr_serialize_key_geometry_msgs__msg__Transform(
      &ros_message->transform, cdr);
  }

  // Field name: transform_filtered
  {
    cdr_serialize_key_geometry_msgs__msg__Transform(
      &ros_message->transform_filtered, cdr);
  }

  // Field name: transform_ground_truth
  {
    cdr_serialize_key_geometry_msgs__msg__Transform(
      &ros_message->transform_ground_truth, cdr);
  }

  // Field name: guess
  {
    cdr_serialize_key_geometry_msgs__msg__Transform(
      &ros_message->guess, cdr);
  }

  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: words_keys
  {
    size_t size = ros_message->words_keys.size;
    auto array_ptr = ros_message->words_keys.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: words_values
  {
    size_t size = ros_message->words_values.size;
    auto array_ptr = ros_message->words_values.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_rtabmap_msgs__msg__KeyPoint(
        &array_ptr[i], cdr);
    }
  }

  // Field name: word_matches
  {
    size_t size = ros_message->word_matches.size;
    auto array_ptr = ros_message->word_matches.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: word_inliers
  {
    size_t size = ros_message->word_inliers.size;
    auto array_ptr = ros_message->word_inliers.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: local_map_keys
  {
    size_t size = ros_message->local_map_keys.size;
    auto array_ptr = ros_message->local_map_keys.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: local_map_values
  {
    size_t size = ros_message->local_map_values.size;
    auto array_ptr = ros_message->local_map_values.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_rtabmap_msgs__msg__Point3f(
        &array_ptr[i], cdr);
    }
  }

  // Field name: local_scan_map
  {
    cdr_serialize_key_sensor_msgs__msg__PointCloud2(
      &ros_message->local_scan_map, cdr);
  }

  // Field name: ref_corners
  {
    size_t size = ros_message->ref_corners.size;
    auto array_ptr = ros_message->ref_corners.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_rtabmap_msgs__msg__Point2f(
        &array_ptr[i], cdr);
    }
  }

  // Field name: new_corners
  {
    size_t size = ros_message->new_corners.size;
    auto array_ptr = ros_message->new_corners.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_rtabmap_msgs__msg__Point2f(
        &array_ptr[i], cdr);
    }
  }

  // Field name: corner_inliers
  {
    size_t size = ros_message->corner_inliers.size;
    auto array_ptr = ros_message->corner_inliers.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t get_serialized_size_key_rtabmap_msgs__msg__OdomInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OdomInfo__ros_msg_type * ros_message = static_cast<const _OdomInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: lost
  {
    size_t item_size = sizeof(ros_message->lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: matches
  {
    size_t item_size = sizeof(ros_message->matches);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: inliers
  {
    size_t item_size = sizeof(ros_message->inliers);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: icp_inliers_ratio
  {
    size_t item_size = sizeof(ros_message->icp_inliers_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: icp_rotation
  {
    size_t item_size = sizeof(ros_message->icp_rotation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: icp_translation
  {
    size_t item_size = sizeof(ros_message->icp_translation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: icp_structural_complexity
  {
    size_t item_size = sizeof(ros_message->icp_structural_complexity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: icp_structural_distribution
  {
    size_t item_size = sizeof(ros_message->icp_structural_distribution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: icp_correspondences
  {
    size_t item_size = sizeof(ros_message->icp_correspondences);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: covariance
  {
    size_t array_size = 36;
    auto array_ptr = ros_message->covariance;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: features
  {
    size_t item_size = sizeof(ros_message->features);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: local_map_size
  {
    size_t item_size = sizeof(ros_message->local_map_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: local_scan_map_size
  {
    size_t item_size = sizeof(ros_message->local_scan_map_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: local_key_frames
  {
    size_t item_size = sizeof(ros_message->local_key_frames);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: local_bundle_outliers
  {
    size_t item_size = sizeof(ros_message->local_bundle_outliers);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: local_bundle_constraints
  {
    size_t item_size = sizeof(ros_message->local_bundle_constraints);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: local_bundle_time
  {
    size_t item_size = sizeof(ros_message->local_bundle_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: key_frame_added
  {
    size_t item_size = sizeof(ros_message->key_frame_added);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: time_estimation
  {
    size_t item_size = sizeof(ros_message->time_estimation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: time_particle_filtering
  {
    size_t item_size = sizeof(ros_message->time_particle_filtering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: stamp
  {
    size_t item_size = sizeof(ros_message->stamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: interval
  {
    size_t item_size = sizeof(ros_message->interval);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: distance_travelled
  {
    size_t item_size = sizeof(ros_message->distance_travelled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: memory_usage
  {
    size_t item_size = sizeof(ros_message->memory_usage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gravity_roll_error
  {
    size_t item_size = sizeof(ros_message->gravity_roll_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gravity_pitch_error
  {
    size_t item_size = sizeof(ros_message->gravity_pitch_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: local_bundle_ids
  {
    size_t array_size = ros_message->local_bundle_ids.size;
    auto array_ptr = ros_message->local_bundle_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: local_bundle_models
  {
    size_t array_size = ros_message->local_bundle_models.size;
    auto array_ptr = ros_message->local_bundle_models.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_rtabmap_msgs__msg__CameraModels(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: local_bundle_poses
  {
    size_t array_size = ros_message->local_bundle_poses.size;
    auto array_ptr = ros_message->local_bundle_poses.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_geometry_msgs__msg__Pose(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: transform
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Transform(
    &(ros_message->transform), current_alignment);

  // Field name: transform_filtered
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Transform(
    &(ros_message->transform_filtered), current_alignment);

  // Field name: transform_ground_truth
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Transform(
    &(ros_message->transform_ground_truth), current_alignment);

  // Field name: guess
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Transform(
    &(ros_message->guess), current_alignment);

  // Field name: type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: words_keys
  {
    size_t array_size = ros_message->words_keys.size;
    auto array_ptr = ros_message->words_keys.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: words_values
  {
    size_t array_size = ros_message->words_values.size;
    auto array_ptr = ros_message->words_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_rtabmap_msgs__msg__KeyPoint(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: word_matches
  {
    size_t array_size = ros_message->word_matches.size;
    auto array_ptr = ros_message->word_matches.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: word_inliers
  {
    size_t array_size = ros_message->word_inliers.size;
    auto array_ptr = ros_message->word_inliers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: local_map_keys
  {
    size_t array_size = ros_message->local_map_keys.size;
    auto array_ptr = ros_message->local_map_keys.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: local_map_values
  {
    size_t array_size = ros_message->local_map_values.size;
    auto array_ptr = ros_message->local_map_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_rtabmap_msgs__msg__Point3f(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: local_scan_map
  current_alignment += get_serialized_size_key_sensor_msgs__msg__PointCloud2(
    &(ros_message->local_scan_map), current_alignment);

  // Field name: ref_corners
  {
    size_t array_size = ros_message->ref_corners.size;
    auto array_ptr = ros_message->ref_corners.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_rtabmap_msgs__msg__Point2f(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: new_corners
  {
    size_t array_size = ros_message->new_corners.size;
    auto array_ptr = ros_message->new_corners.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_rtabmap_msgs__msg__Point2f(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: corner_inliers
  {
    size_t array_size = ros_message->corner_inliers.size;
    auto array_ptr = ros_message->corner_inliers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t max_serialized_size_key_rtabmap_msgs__msg__OdomInfo(
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

  // Field name: lost
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: matches
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: inliers
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: icp_inliers_ratio
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: icp_rotation
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: icp_translation
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: icp_structural_complexity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: icp_structural_distribution
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: icp_correspondences
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: covariance
  {
    size_t array_size = 36;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: features
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: local_map_size
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: local_scan_map_size
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: local_key_frames
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: local_bundle_outliers
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: local_bundle_constraints
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: local_bundle_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: key_frame_added
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: time_estimation
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: time_particle_filtering
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: stamp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: interval
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: distance_travelled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: memory_usage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: gravity_roll_error
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: gravity_pitch_error
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: local_bundle_ids
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

  // Field name: local_bundle_models
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
        max_serialized_size_key_rtabmap_msgs__msg__CameraModels(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: local_bundle_poses
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
        max_serialized_size_key_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: transform
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Transform(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: transform_filtered
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Transform(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: transform_ground_truth
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Transform(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: guess
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Transform(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: words_keys
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

  // Field name: words_values
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

  // Field name: word_matches
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

  // Field name: word_inliers
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

  // Field name: local_map_keys
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

  // Field name: local_map_values
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

  // Field name: local_scan_map
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

  // Field name: ref_corners
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
        max_serialized_size_key_rtabmap_msgs__msg__Point2f(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: new_corners
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
        max_serialized_size_key_rtabmap_msgs__msg__Point2f(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: corner_inliers
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rtabmap_msgs__msg__OdomInfo;
    is_plain =
      (
      offsetof(DataType, corner_inliers) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _OdomInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const rtabmap_msgs__msg__OdomInfo * ros_message = static_cast<const rtabmap_msgs__msg__OdomInfo *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_rtabmap_msgs__msg__OdomInfo(ros_message, cdr);
}

static bool _OdomInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  rtabmap_msgs__msg__OdomInfo * ros_message = static_cast<rtabmap_msgs__msg__OdomInfo *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_rtabmap_msgs__msg__OdomInfo(cdr, ros_message);
}

static uint32_t _OdomInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rtabmap_msgs__msg__OdomInfo(
      untyped_ros_message, 0));
}

static size_t _OdomInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rtabmap_msgs__msg__OdomInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_OdomInfo = {
  "rtabmap_msgs::msg",
  "OdomInfo",
  _OdomInfo__cdr_serialize,
  _OdomInfo__cdr_deserialize,
  _OdomInfo__get_serialized_size,
  _OdomInfo__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _OdomInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OdomInfo,
  get_message_typesupport_handle_function,
  &rtabmap_msgs__msg__OdomInfo__get_type_hash,
  &rtabmap_msgs__msg__OdomInfo__get_type_description,
  &rtabmap_msgs__msg__OdomInfo__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, OdomInfo)() {
  return &_OdomInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
