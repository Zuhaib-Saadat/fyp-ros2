// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rtabmap_msgs:msg/SensorData.idl
// generated code does not contain a copyright notice
#include "rtabmap_msgs/msg/detail/sensor_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rtabmap_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rtabmap_msgs/msg/detail/sensor_data__struct.h"
#include "rtabmap_msgs/msg/detail/sensor_data__functions.h"
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

#include "geometry_msgs/msg/detail/pose__functions.h"  // ground_truth_pose
#include "geometry_msgs/msg/detail/transform__functions.h"  // imu_local_transform, laser_scan_local_transform, local_transform
#include "rosidl_runtime_c/primitives_sequence.h"  // descriptors, grid_empty_cells, grid_ground, grid_obstacles, laser_scan_compressed, left_compressed, right_compressed, user_data
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // descriptors, grid_empty_cells, grid_ground, grid_obstacles, laser_scan_compressed, left_compressed, right_compressed, user_data
#include "rtabmap_msgs/msg/detail/env_sensor__functions.h"  // env_sensors
#include "rtabmap_msgs/msg/detail/global_descriptor__functions.h"  // global_descriptors
#include "rtabmap_msgs/msg/detail/gps__functions.h"  // gps
#include "rtabmap_msgs/msg/detail/key_point__functions.h"  // key_points
#include "rtabmap_msgs/msg/detail/landmark_detection__functions.h"  // landmarks
#include "rtabmap_msgs/msg/detail/point3f__functions.h"  // grid_view_point, points
#include "sensor_msgs/msg/detail/camera_info__functions.h"  // left_camera_info, right_camera_info
#include "sensor_msgs/msg/detail/image__functions.h"  // left, right
#include "sensor_msgs/msg/detail/imu__functions.h"  // imu
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"  // laser_scan
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

bool cdr_serialize_rtabmap_msgs__msg__EnvSensor(
  const rtabmap_msgs__msg__EnvSensor * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_rtabmap_msgs__msg__EnvSensor(
  eprosima::fastcdr::Cdr & cdr,
  rtabmap_msgs__msg__EnvSensor * ros_message);

size_t get_serialized_size_rtabmap_msgs__msg__EnvSensor(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rtabmap_msgs__msg__EnvSensor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_rtabmap_msgs__msg__EnvSensor(
  const rtabmap_msgs__msg__EnvSensor * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_rtabmap_msgs__msg__EnvSensor(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_rtabmap_msgs__msg__EnvSensor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, EnvSensor)();

bool cdr_serialize_rtabmap_msgs__msg__GPS(
  const rtabmap_msgs__msg__GPS * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_rtabmap_msgs__msg__GPS(
  eprosima::fastcdr::Cdr & cdr,
  rtabmap_msgs__msg__GPS * ros_message);

size_t get_serialized_size_rtabmap_msgs__msg__GPS(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rtabmap_msgs__msg__GPS(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_rtabmap_msgs__msg__GPS(
  const rtabmap_msgs__msg__GPS * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_rtabmap_msgs__msg__GPS(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_rtabmap_msgs__msg__GPS(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, GPS)();

bool cdr_serialize_rtabmap_msgs__msg__GlobalDescriptor(
  const rtabmap_msgs__msg__GlobalDescriptor * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_rtabmap_msgs__msg__GlobalDescriptor(
  eprosima::fastcdr::Cdr & cdr,
  rtabmap_msgs__msg__GlobalDescriptor * ros_message);

size_t get_serialized_size_rtabmap_msgs__msg__GlobalDescriptor(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rtabmap_msgs__msg__GlobalDescriptor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_rtabmap_msgs__msg__GlobalDescriptor(
  const rtabmap_msgs__msg__GlobalDescriptor * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_rtabmap_msgs__msg__GlobalDescriptor(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_rtabmap_msgs__msg__GlobalDescriptor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, GlobalDescriptor)();

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

bool cdr_serialize_rtabmap_msgs__msg__LandmarkDetection(
  const rtabmap_msgs__msg__LandmarkDetection * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_rtabmap_msgs__msg__LandmarkDetection(
  eprosima::fastcdr::Cdr & cdr,
  rtabmap_msgs__msg__LandmarkDetection * ros_message);

size_t get_serialized_size_rtabmap_msgs__msg__LandmarkDetection(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rtabmap_msgs__msg__LandmarkDetection(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_rtabmap_msgs__msg__LandmarkDetection(
  const rtabmap_msgs__msg__LandmarkDetection * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_rtabmap_msgs__msg__LandmarkDetection(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_rtabmap_msgs__msg__LandmarkDetection(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, LandmarkDetection)();

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
bool cdr_serialize_sensor_msgs__msg__CameraInfo(
  const sensor_msgs__msg__CameraInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
bool cdr_deserialize_sensor_msgs__msg__CameraInfo(
  eprosima::fastcdr::Cdr & cdr,
  sensor_msgs__msg__CameraInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t get_serialized_size_sensor_msgs__msg__CameraInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t max_serialized_size_sensor_msgs__msg__CameraInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
bool cdr_serialize_key_sensor_msgs__msg__CameraInfo(
  const sensor_msgs__msg__CameraInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t get_serialized_size_key_sensor_msgs__msg__CameraInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t max_serialized_size_key_sensor_msgs__msg__CameraInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, CameraInfo)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
bool cdr_serialize_sensor_msgs__msg__Image(
  const sensor_msgs__msg__Image * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
bool cdr_deserialize_sensor_msgs__msg__Image(
  eprosima::fastcdr::Cdr & cdr,
  sensor_msgs__msg__Image * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t get_serialized_size_sensor_msgs__msg__Image(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t max_serialized_size_sensor_msgs__msg__Image(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
bool cdr_serialize_key_sensor_msgs__msg__Image(
  const sensor_msgs__msg__Image * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t get_serialized_size_key_sensor_msgs__msg__Image(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t max_serialized_size_key_sensor_msgs__msg__Image(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
bool cdr_serialize_sensor_msgs__msg__Imu(
  const sensor_msgs__msg__Imu * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
bool cdr_deserialize_sensor_msgs__msg__Imu(
  eprosima::fastcdr::Cdr & cdr,
  sensor_msgs__msg__Imu * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t get_serialized_size_sensor_msgs__msg__Imu(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t max_serialized_size_sensor_msgs__msg__Imu(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
bool cdr_serialize_key_sensor_msgs__msg__Imu(
  const sensor_msgs__msg__Imu * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t get_serialized_size_key_sensor_msgs__msg__Imu(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t max_serialized_size_key_sensor_msgs__msg__Imu(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Imu)();

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


using _SensorData__ros_msg_type = rtabmap_msgs__msg__SensorData;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
bool cdr_serialize_rtabmap_msgs__msg__SensorData(
  const rtabmap_msgs__msg__SensorData * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: left
  {
    cdr_serialize_sensor_msgs__msg__Image(
      &ros_message->left, cdr);
  }

  // Field name: right
  {
    cdr_serialize_sensor_msgs__msg__Image(
      &ros_message->right, cdr);
  }

  // Field name: left_compressed
  {
    size_t size = ros_message->left_compressed.size;
    auto array_ptr = ros_message->left_compressed.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: right_compressed
  {
    size_t size = ros_message->right_compressed.size;
    auto array_ptr = ros_message->right_compressed.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: left_camera_info
  {
    size_t size = ros_message->left_camera_info.size;
    auto array_ptr = ros_message->left_camera_info.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_sensor_msgs__msg__CameraInfo(
        &array_ptr[i], cdr);
    }
  }

  // Field name: right_camera_info
  {
    size_t size = ros_message->right_camera_info.size;
    auto array_ptr = ros_message->right_camera_info.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_sensor_msgs__msg__CameraInfo(
        &array_ptr[i], cdr);
    }
  }

  // Field name: local_transform
  {
    size_t size = ros_message->local_transform.size;
    auto array_ptr = ros_message->local_transform.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_geometry_msgs__msg__Transform(
        &array_ptr[i], cdr);
    }
  }

  // Field name: laser_scan
  {
    cdr_serialize_sensor_msgs__msg__PointCloud2(
      &ros_message->laser_scan, cdr);
  }

  // Field name: laser_scan_compressed
  {
    size_t size = ros_message->laser_scan_compressed.size;
    auto array_ptr = ros_message->laser_scan_compressed.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: laser_scan_max_pts
  {
    cdr << ros_message->laser_scan_max_pts;
  }

  // Field name: laser_scan_max_range
  {
    cdr << ros_message->laser_scan_max_range;
  }

  // Field name: laser_scan_format
  {
    cdr << ros_message->laser_scan_format;
  }

  // Field name: laser_scan_local_transform
  {
    cdr_serialize_geometry_msgs__msg__Transform(
      &ros_message->laser_scan_local_transform, cdr);
  }

  // Field name: user_data
  {
    size_t size = ros_message->user_data.size;
    auto array_ptr = ros_message->user_data.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: grid_ground
  {
    size_t size = ros_message->grid_ground.size;
    auto array_ptr = ros_message->grid_ground.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: grid_obstacles
  {
    size_t size = ros_message->grid_obstacles.size;
    auto array_ptr = ros_message->grid_obstacles.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: grid_empty_cells
  {
    size_t size = ros_message->grid_empty_cells.size;
    auto array_ptr = ros_message->grid_empty_cells.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: grid_cell_size
  {
    cdr << ros_message->grid_cell_size;
  }

  // Field name: grid_view_point
  {
    cdr_serialize_rtabmap_msgs__msg__Point3f(
      &ros_message->grid_view_point, cdr);
  }

  // Field name: key_points
  {
    size_t size = ros_message->key_points.size;
    auto array_ptr = ros_message->key_points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_rtabmap_msgs__msg__KeyPoint(
        &array_ptr[i], cdr);
    }
  }

  // Field name: points
  {
    size_t size = ros_message->points.size;
    auto array_ptr = ros_message->points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_rtabmap_msgs__msg__Point3f(
        &array_ptr[i], cdr);
    }
  }

  // Field name: descriptors
  {
    size_t size = ros_message->descriptors.size;
    auto array_ptr = ros_message->descriptors.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: global_descriptors
  {
    size_t size = ros_message->global_descriptors.size;
    auto array_ptr = ros_message->global_descriptors.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_rtabmap_msgs__msg__GlobalDescriptor(
        &array_ptr[i], cdr);
    }
  }

  // Field name: env_sensors
  {
    size_t size = ros_message->env_sensors.size;
    auto array_ptr = ros_message->env_sensors.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_rtabmap_msgs__msg__EnvSensor(
        &array_ptr[i], cdr);
    }
  }

  // Field name: imu
  {
    cdr_serialize_sensor_msgs__msg__Imu(
      &ros_message->imu, cdr);
  }

  // Field name: imu_local_transform
  {
    cdr_serialize_geometry_msgs__msg__Transform(
      &ros_message->imu_local_transform, cdr);
  }

  // Field name: landmarks
  {
    size_t size = ros_message->landmarks.size;
    auto array_ptr = ros_message->landmarks.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_rtabmap_msgs__msg__LandmarkDetection(
        &array_ptr[i], cdr);
    }
  }

  // Field name: ground_truth_pose
  {
    cdr_serialize_geometry_msgs__msg__Pose(
      &ros_message->ground_truth_pose, cdr);
  }

  // Field name: gps
  {
    cdr_serialize_rtabmap_msgs__msg__GPS(
      &ros_message->gps, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
bool cdr_deserialize_rtabmap_msgs__msg__SensorData(
  eprosima::fastcdr::Cdr & cdr,
  rtabmap_msgs__msg__SensorData * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: left
  {
    cdr_deserialize_sensor_msgs__msg__Image(cdr, &ros_message->left);
  }

  // Field name: right
  {
    cdr_deserialize_sensor_msgs__msg__Image(cdr, &ros_message->right);
  }

  // Field name: left_compressed
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->left_compressed.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->left_compressed);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->left_compressed, size)) {
      fprintf(stderr, "failed to create array for field 'left_compressed'");
      return false;
    }
    auto array_ptr = ros_message->left_compressed.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: right_compressed
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->right_compressed.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->right_compressed);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->right_compressed, size)) {
      fprintf(stderr, "failed to create array for field 'right_compressed'");
      return false;
    }
    auto array_ptr = ros_message->right_compressed.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: left_camera_info
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->left_camera_info.data) {
      sensor_msgs__msg__CameraInfo__Sequence__fini(&ros_message->left_camera_info);
    }
    if (!sensor_msgs__msg__CameraInfo__Sequence__init(&ros_message->left_camera_info, size)) {
      fprintf(stderr, "failed to create array for field 'left_camera_info'");
      return false;
    }
    auto array_ptr = ros_message->left_camera_info.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_sensor_msgs__msg__CameraInfo(cdr, &array_ptr[i]);
    }
  }

  // Field name: right_camera_info
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->right_camera_info.data) {
      sensor_msgs__msg__CameraInfo__Sequence__fini(&ros_message->right_camera_info);
    }
    if (!sensor_msgs__msg__CameraInfo__Sequence__init(&ros_message->right_camera_info, size)) {
      fprintf(stderr, "failed to create array for field 'right_camera_info'");
      return false;
    }
    auto array_ptr = ros_message->right_camera_info.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_sensor_msgs__msg__CameraInfo(cdr, &array_ptr[i]);
    }
  }

  // Field name: local_transform
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->local_transform.data) {
      geometry_msgs__msg__Transform__Sequence__fini(&ros_message->local_transform);
    }
    if (!geometry_msgs__msg__Transform__Sequence__init(&ros_message->local_transform, size)) {
      fprintf(stderr, "failed to create array for field 'local_transform'");
      return false;
    }
    auto array_ptr = ros_message->local_transform.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_geometry_msgs__msg__Transform(cdr, &array_ptr[i]);
    }
  }

  // Field name: laser_scan
  {
    cdr_deserialize_sensor_msgs__msg__PointCloud2(cdr, &ros_message->laser_scan);
  }

  // Field name: laser_scan_compressed
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->laser_scan_compressed.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->laser_scan_compressed);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->laser_scan_compressed, size)) {
      fprintf(stderr, "failed to create array for field 'laser_scan_compressed'");
      return false;
    }
    auto array_ptr = ros_message->laser_scan_compressed.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: laser_scan_max_pts
  {
    cdr >> ros_message->laser_scan_max_pts;
  }

  // Field name: laser_scan_max_range
  {
    cdr >> ros_message->laser_scan_max_range;
  }

  // Field name: laser_scan_format
  {
    cdr >> ros_message->laser_scan_format;
  }

  // Field name: laser_scan_local_transform
  {
    cdr_deserialize_geometry_msgs__msg__Transform(cdr, &ros_message->laser_scan_local_transform);
  }

  // Field name: user_data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->user_data.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->user_data);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->user_data, size)) {
      fprintf(stderr, "failed to create array for field 'user_data'");
      return false;
    }
    auto array_ptr = ros_message->user_data.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: grid_ground
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->grid_ground.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->grid_ground);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->grid_ground, size)) {
      fprintf(stderr, "failed to create array for field 'grid_ground'");
      return false;
    }
    auto array_ptr = ros_message->grid_ground.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: grid_obstacles
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->grid_obstacles.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->grid_obstacles);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->grid_obstacles, size)) {
      fprintf(stderr, "failed to create array for field 'grid_obstacles'");
      return false;
    }
    auto array_ptr = ros_message->grid_obstacles.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: grid_empty_cells
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->grid_empty_cells.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->grid_empty_cells);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->grid_empty_cells, size)) {
      fprintf(stderr, "failed to create array for field 'grid_empty_cells'");
      return false;
    }
    auto array_ptr = ros_message->grid_empty_cells.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: grid_cell_size
  {
    cdr >> ros_message->grid_cell_size;
  }

  // Field name: grid_view_point
  {
    cdr_deserialize_rtabmap_msgs__msg__Point3f(cdr, &ros_message->grid_view_point);
  }

  // Field name: key_points
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->key_points.data) {
      rtabmap_msgs__msg__KeyPoint__Sequence__fini(&ros_message->key_points);
    }
    if (!rtabmap_msgs__msg__KeyPoint__Sequence__init(&ros_message->key_points, size)) {
      fprintf(stderr, "failed to create array for field 'key_points'");
      return false;
    }
    auto array_ptr = ros_message->key_points.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_rtabmap_msgs__msg__KeyPoint(cdr, &array_ptr[i]);
    }
  }

  // Field name: points
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->points.data) {
      rtabmap_msgs__msg__Point3f__Sequence__fini(&ros_message->points);
    }
    if (!rtabmap_msgs__msg__Point3f__Sequence__init(&ros_message->points, size)) {
      fprintf(stderr, "failed to create array for field 'points'");
      return false;
    }
    auto array_ptr = ros_message->points.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_rtabmap_msgs__msg__Point3f(cdr, &array_ptr[i]);
    }
  }

  // Field name: descriptors
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->descriptors.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->descriptors);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->descriptors, size)) {
      fprintf(stderr, "failed to create array for field 'descriptors'");
      return false;
    }
    auto array_ptr = ros_message->descriptors.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: global_descriptors
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->global_descriptors.data) {
      rtabmap_msgs__msg__GlobalDescriptor__Sequence__fini(&ros_message->global_descriptors);
    }
    if (!rtabmap_msgs__msg__GlobalDescriptor__Sequence__init(&ros_message->global_descriptors, size)) {
      fprintf(stderr, "failed to create array for field 'global_descriptors'");
      return false;
    }
    auto array_ptr = ros_message->global_descriptors.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_rtabmap_msgs__msg__GlobalDescriptor(cdr, &array_ptr[i]);
    }
  }

  // Field name: env_sensors
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->env_sensors.data) {
      rtabmap_msgs__msg__EnvSensor__Sequence__fini(&ros_message->env_sensors);
    }
    if (!rtabmap_msgs__msg__EnvSensor__Sequence__init(&ros_message->env_sensors, size)) {
      fprintf(stderr, "failed to create array for field 'env_sensors'");
      return false;
    }
    auto array_ptr = ros_message->env_sensors.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_rtabmap_msgs__msg__EnvSensor(cdr, &array_ptr[i]);
    }
  }

  // Field name: imu
  {
    cdr_deserialize_sensor_msgs__msg__Imu(cdr, &ros_message->imu);
  }

  // Field name: imu_local_transform
  {
    cdr_deserialize_geometry_msgs__msg__Transform(cdr, &ros_message->imu_local_transform);
  }

  // Field name: landmarks
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->landmarks.data) {
      rtabmap_msgs__msg__LandmarkDetection__Sequence__fini(&ros_message->landmarks);
    }
    if (!rtabmap_msgs__msg__LandmarkDetection__Sequence__init(&ros_message->landmarks, size)) {
      fprintf(stderr, "failed to create array for field 'landmarks'");
      return false;
    }
    auto array_ptr = ros_message->landmarks.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_rtabmap_msgs__msg__LandmarkDetection(cdr, &array_ptr[i]);
    }
  }

  // Field name: ground_truth_pose
  {
    cdr_deserialize_geometry_msgs__msg__Pose(cdr, &ros_message->ground_truth_pose);
  }

  // Field name: gps
  {
    cdr_deserialize_rtabmap_msgs__msg__GPS(cdr, &ros_message->gps);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t get_serialized_size_rtabmap_msgs__msg__SensorData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SensorData__ros_msg_type * ros_message = static_cast<const _SensorData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: left
  current_alignment += get_serialized_size_sensor_msgs__msg__Image(
    &(ros_message->left), current_alignment);

  // Field name: right
  current_alignment += get_serialized_size_sensor_msgs__msg__Image(
    &(ros_message->right), current_alignment);

  // Field name: left_compressed
  {
    size_t array_size = ros_message->left_compressed.size;
    auto array_ptr = ros_message->left_compressed.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: right_compressed
  {
    size_t array_size = ros_message->right_compressed.size;
    auto array_ptr = ros_message->right_compressed.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: left_camera_info
  {
    size_t array_size = ros_message->left_camera_info.size;
    auto array_ptr = ros_message->left_camera_info.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_sensor_msgs__msg__CameraInfo(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: right_camera_info
  {
    size_t array_size = ros_message->right_camera_info.size;
    auto array_ptr = ros_message->right_camera_info.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_sensor_msgs__msg__CameraInfo(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: local_transform
  {
    size_t array_size = ros_message->local_transform.size;
    auto array_ptr = ros_message->local_transform.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Transform(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: laser_scan
  current_alignment += get_serialized_size_sensor_msgs__msg__PointCloud2(
    &(ros_message->laser_scan), current_alignment);

  // Field name: laser_scan_compressed
  {
    size_t array_size = ros_message->laser_scan_compressed.size;
    auto array_ptr = ros_message->laser_scan_compressed.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: laser_scan_max_pts
  {
    size_t item_size = sizeof(ros_message->laser_scan_max_pts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: laser_scan_max_range
  {
    size_t item_size = sizeof(ros_message->laser_scan_max_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: laser_scan_format
  {
    size_t item_size = sizeof(ros_message->laser_scan_format);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: laser_scan_local_transform
  current_alignment += get_serialized_size_geometry_msgs__msg__Transform(
    &(ros_message->laser_scan_local_transform), current_alignment);

  // Field name: user_data
  {
    size_t array_size = ros_message->user_data.size;
    auto array_ptr = ros_message->user_data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: grid_ground
  {
    size_t array_size = ros_message->grid_ground.size;
    auto array_ptr = ros_message->grid_ground.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: grid_obstacles
  {
    size_t array_size = ros_message->grid_obstacles.size;
    auto array_ptr = ros_message->grid_obstacles.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: grid_empty_cells
  {
    size_t array_size = ros_message->grid_empty_cells.size;
    auto array_ptr = ros_message->grid_empty_cells.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: grid_cell_size
  {
    size_t item_size = sizeof(ros_message->grid_cell_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: grid_view_point
  current_alignment += get_serialized_size_rtabmap_msgs__msg__Point3f(
    &(ros_message->grid_view_point), current_alignment);

  // Field name: key_points
  {
    size_t array_size = ros_message->key_points.size;
    auto array_ptr = ros_message->key_points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rtabmap_msgs__msg__KeyPoint(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: points
  {
    size_t array_size = ros_message->points.size;
    auto array_ptr = ros_message->points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rtabmap_msgs__msg__Point3f(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: descriptors
  {
    size_t array_size = ros_message->descriptors.size;
    auto array_ptr = ros_message->descriptors.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: global_descriptors
  {
    size_t array_size = ros_message->global_descriptors.size;
    auto array_ptr = ros_message->global_descriptors.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rtabmap_msgs__msg__GlobalDescriptor(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: env_sensors
  {
    size_t array_size = ros_message->env_sensors.size;
    auto array_ptr = ros_message->env_sensors.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rtabmap_msgs__msg__EnvSensor(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: imu
  current_alignment += get_serialized_size_sensor_msgs__msg__Imu(
    &(ros_message->imu), current_alignment);

  // Field name: imu_local_transform
  current_alignment += get_serialized_size_geometry_msgs__msg__Transform(
    &(ros_message->imu_local_transform), current_alignment);

  // Field name: landmarks
  {
    size_t array_size = ros_message->landmarks.size;
    auto array_ptr = ros_message->landmarks.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rtabmap_msgs__msg__LandmarkDetection(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: ground_truth_pose
  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->ground_truth_pose), current_alignment);

  // Field name: gps
  current_alignment += get_serialized_size_rtabmap_msgs__msg__GPS(
    &(ros_message->gps), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t max_serialized_size_rtabmap_msgs__msg__SensorData(
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

  // Field name: left
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__Image(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: right
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__Image(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: left_compressed
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: right_compressed
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: left_camera_info
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
        max_serialized_size_sensor_msgs__msg__CameraInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: right_camera_info
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
        max_serialized_size_sensor_msgs__msg__CameraInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: local_transform
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
        max_serialized_size_geometry_msgs__msg__Transform(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: laser_scan
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

  // Field name: laser_scan_compressed
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: laser_scan_max_pts
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: laser_scan_max_range
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: laser_scan_format
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: laser_scan_local_transform
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

  // Field name: user_data
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: grid_ground
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: grid_obstacles
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: grid_empty_cells
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: grid_cell_size
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: grid_view_point
  {
    size_t array_size = 1;
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

  // Field name: key_points
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

  // Field name: points
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

  // Field name: descriptors
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: global_descriptors
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
        max_serialized_size_rtabmap_msgs__msg__GlobalDescriptor(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: env_sensors
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
        max_serialized_size_rtabmap_msgs__msg__EnvSensor(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: imu
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__Imu(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: imu_local_transform
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

  // Field name: landmarks
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
        max_serialized_size_rtabmap_msgs__msg__LandmarkDetection(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: ground_truth_pose
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

  // Field name: gps
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_rtabmap_msgs__msg__GPS(
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
    using DataType = rtabmap_msgs__msg__SensorData;
    is_plain =
      (
      offsetof(DataType, gps) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
bool cdr_serialize_key_rtabmap_msgs__msg__SensorData(
  const rtabmap_msgs__msg__SensorData * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: left
  {
    cdr_serialize_key_sensor_msgs__msg__Image(
      &ros_message->left, cdr);
  }

  // Field name: right
  {
    cdr_serialize_key_sensor_msgs__msg__Image(
      &ros_message->right, cdr);
  }

  // Field name: left_compressed
  {
    size_t size = ros_message->left_compressed.size;
    auto array_ptr = ros_message->left_compressed.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: right_compressed
  {
    size_t size = ros_message->right_compressed.size;
    auto array_ptr = ros_message->right_compressed.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: left_camera_info
  {
    size_t size = ros_message->left_camera_info.size;
    auto array_ptr = ros_message->left_camera_info.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_sensor_msgs__msg__CameraInfo(
        &array_ptr[i], cdr);
    }
  }

  // Field name: right_camera_info
  {
    size_t size = ros_message->right_camera_info.size;
    auto array_ptr = ros_message->right_camera_info.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_sensor_msgs__msg__CameraInfo(
        &array_ptr[i], cdr);
    }
  }

  // Field name: local_transform
  {
    size_t size = ros_message->local_transform.size;
    auto array_ptr = ros_message->local_transform.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_geometry_msgs__msg__Transform(
        &array_ptr[i], cdr);
    }
  }

  // Field name: laser_scan
  {
    cdr_serialize_key_sensor_msgs__msg__PointCloud2(
      &ros_message->laser_scan, cdr);
  }

  // Field name: laser_scan_compressed
  {
    size_t size = ros_message->laser_scan_compressed.size;
    auto array_ptr = ros_message->laser_scan_compressed.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: laser_scan_max_pts
  {
    cdr << ros_message->laser_scan_max_pts;
  }

  // Field name: laser_scan_max_range
  {
    cdr << ros_message->laser_scan_max_range;
  }

  // Field name: laser_scan_format
  {
    cdr << ros_message->laser_scan_format;
  }

  // Field name: laser_scan_local_transform
  {
    cdr_serialize_key_geometry_msgs__msg__Transform(
      &ros_message->laser_scan_local_transform, cdr);
  }

  // Field name: user_data
  {
    size_t size = ros_message->user_data.size;
    auto array_ptr = ros_message->user_data.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: grid_ground
  {
    size_t size = ros_message->grid_ground.size;
    auto array_ptr = ros_message->grid_ground.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: grid_obstacles
  {
    size_t size = ros_message->grid_obstacles.size;
    auto array_ptr = ros_message->grid_obstacles.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: grid_empty_cells
  {
    size_t size = ros_message->grid_empty_cells.size;
    auto array_ptr = ros_message->grid_empty_cells.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: grid_cell_size
  {
    cdr << ros_message->grid_cell_size;
  }

  // Field name: grid_view_point
  {
    cdr_serialize_key_rtabmap_msgs__msg__Point3f(
      &ros_message->grid_view_point, cdr);
  }

  // Field name: key_points
  {
    size_t size = ros_message->key_points.size;
    auto array_ptr = ros_message->key_points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_rtabmap_msgs__msg__KeyPoint(
        &array_ptr[i], cdr);
    }
  }

  // Field name: points
  {
    size_t size = ros_message->points.size;
    auto array_ptr = ros_message->points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_rtabmap_msgs__msg__Point3f(
        &array_ptr[i], cdr);
    }
  }

  // Field name: descriptors
  {
    size_t size = ros_message->descriptors.size;
    auto array_ptr = ros_message->descriptors.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: global_descriptors
  {
    size_t size = ros_message->global_descriptors.size;
    auto array_ptr = ros_message->global_descriptors.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_rtabmap_msgs__msg__GlobalDescriptor(
        &array_ptr[i], cdr);
    }
  }

  // Field name: env_sensors
  {
    size_t size = ros_message->env_sensors.size;
    auto array_ptr = ros_message->env_sensors.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_rtabmap_msgs__msg__EnvSensor(
        &array_ptr[i], cdr);
    }
  }

  // Field name: imu
  {
    cdr_serialize_key_sensor_msgs__msg__Imu(
      &ros_message->imu, cdr);
  }

  // Field name: imu_local_transform
  {
    cdr_serialize_key_geometry_msgs__msg__Transform(
      &ros_message->imu_local_transform, cdr);
  }

  // Field name: landmarks
  {
    size_t size = ros_message->landmarks.size;
    auto array_ptr = ros_message->landmarks.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_rtabmap_msgs__msg__LandmarkDetection(
        &array_ptr[i], cdr);
    }
  }

  // Field name: ground_truth_pose
  {
    cdr_serialize_key_geometry_msgs__msg__Pose(
      &ros_message->ground_truth_pose, cdr);
  }

  // Field name: gps
  {
    cdr_serialize_key_rtabmap_msgs__msg__GPS(
      &ros_message->gps, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t get_serialized_size_key_rtabmap_msgs__msg__SensorData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SensorData__ros_msg_type * ros_message = static_cast<const _SensorData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: left
  current_alignment += get_serialized_size_key_sensor_msgs__msg__Image(
    &(ros_message->left), current_alignment);

  // Field name: right
  current_alignment += get_serialized_size_key_sensor_msgs__msg__Image(
    &(ros_message->right), current_alignment);

  // Field name: left_compressed
  {
    size_t array_size = ros_message->left_compressed.size;
    auto array_ptr = ros_message->left_compressed.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: right_compressed
  {
    size_t array_size = ros_message->right_compressed.size;
    auto array_ptr = ros_message->right_compressed.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: left_camera_info
  {
    size_t array_size = ros_message->left_camera_info.size;
    auto array_ptr = ros_message->left_camera_info.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_sensor_msgs__msg__CameraInfo(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: right_camera_info
  {
    size_t array_size = ros_message->right_camera_info.size;
    auto array_ptr = ros_message->right_camera_info.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_sensor_msgs__msg__CameraInfo(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: local_transform
  {
    size_t array_size = ros_message->local_transform.size;
    auto array_ptr = ros_message->local_transform.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_geometry_msgs__msg__Transform(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: laser_scan
  current_alignment += get_serialized_size_key_sensor_msgs__msg__PointCloud2(
    &(ros_message->laser_scan), current_alignment);

  // Field name: laser_scan_compressed
  {
    size_t array_size = ros_message->laser_scan_compressed.size;
    auto array_ptr = ros_message->laser_scan_compressed.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: laser_scan_max_pts
  {
    size_t item_size = sizeof(ros_message->laser_scan_max_pts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: laser_scan_max_range
  {
    size_t item_size = sizeof(ros_message->laser_scan_max_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: laser_scan_format
  {
    size_t item_size = sizeof(ros_message->laser_scan_format);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: laser_scan_local_transform
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Transform(
    &(ros_message->laser_scan_local_transform), current_alignment);

  // Field name: user_data
  {
    size_t array_size = ros_message->user_data.size;
    auto array_ptr = ros_message->user_data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: grid_ground
  {
    size_t array_size = ros_message->grid_ground.size;
    auto array_ptr = ros_message->grid_ground.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: grid_obstacles
  {
    size_t array_size = ros_message->grid_obstacles.size;
    auto array_ptr = ros_message->grid_obstacles.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: grid_empty_cells
  {
    size_t array_size = ros_message->grid_empty_cells.size;
    auto array_ptr = ros_message->grid_empty_cells.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: grid_cell_size
  {
    size_t item_size = sizeof(ros_message->grid_cell_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: grid_view_point
  current_alignment += get_serialized_size_key_rtabmap_msgs__msg__Point3f(
    &(ros_message->grid_view_point), current_alignment);

  // Field name: key_points
  {
    size_t array_size = ros_message->key_points.size;
    auto array_ptr = ros_message->key_points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_rtabmap_msgs__msg__KeyPoint(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: points
  {
    size_t array_size = ros_message->points.size;
    auto array_ptr = ros_message->points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_rtabmap_msgs__msg__Point3f(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: descriptors
  {
    size_t array_size = ros_message->descriptors.size;
    auto array_ptr = ros_message->descriptors.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: global_descriptors
  {
    size_t array_size = ros_message->global_descriptors.size;
    auto array_ptr = ros_message->global_descriptors.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_rtabmap_msgs__msg__GlobalDescriptor(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: env_sensors
  {
    size_t array_size = ros_message->env_sensors.size;
    auto array_ptr = ros_message->env_sensors.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_rtabmap_msgs__msg__EnvSensor(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: imu
  current_alignment += get_serialized_size_key_sensor_msgs__msg__Imu(
    &(ros_message->imu), current_alignment);

  // Field name: imu_local_transform
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Transform(
    &(ros_message->imu_local_transform), current_alignment);

  // Field name: landmarks
  {
    size_t array_size = ros_message->landmarks.size;
    auto array_ptr = ros_message->landmarks.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_rtabmap_msgs__msg__LandmarkDetection(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: ground_truth_pose
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Pose(
    &(ros_message->ground_truth_pose), current_alignment);

  // Field name: gps
  current_alignment += get_serialized_size_key_rtabmap_msgs__msg__GPS(
    &(ros_message->gps), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t max_serialized_size_key_rtabmap_msgs__msg__SensorData(
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

  // Field name: left
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_sensor_msgs__msg__Image(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: right
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_sensor_msgs__msg__Image(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: left_compressed
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: right_compressed
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: left_camera_info
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
        max_serialized_size_key_sensor_msgs__msg__CameraInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: right_camera_info
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
        max_serialized_size_key_sensor_msgs__msg__CameraInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: local_transform
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
        max_serialized_size_key_geometry_msgs__msg__Transform(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: laser_scan
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

  // Field name: laser_scan_compressed
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: laser_scan_max_pts
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: laser_scan_max_range
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: laser_scan_format
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: laser_scan_local_transform
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

  // Field name: user_data
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: grid_ground
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: grid_obstacles
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: grid_empty_cells
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: grid_cell_size
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: grid_view_point
  {
    size_t array_size = 1;
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

  // Field name: key_points
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

  // Field name: points
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

  // Field name: descriptors
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: global_descriptors
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
        max_serialized_size_key_rtabmap_msgs__msg__GlobalDescriptor(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: env_sensors
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
        max_serialized_size_key_rtabmap_msgs__msg__EnvSensor(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: imu
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_sensor_msgs__msg__Imu(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: imu_local_transform
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

  // Field name: landmarks
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
        max_serialized_size_key_rtabmap_msgs__msg__LandmarkDetection(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: ground_truth_pose
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

  // Field name: gps
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_rtabmap_msgs__msg__GPS(
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
    using DataType = rtabmap_msgs__msg__SensorData;
    is_plain =
      (
      offsetof(DataType, gps) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SensorData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const rtabmap_msgs__msg__SensorData * ros_message = static_cast<const rtabmap_msgs__msg__SensorData *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_rtabmap_msgs__msg__SensorData(ros_message, cdr);
}

static bool _SensorData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  rtabmap_msgs__msg__SensorData * ros_message = static_cast<rtabmap_msgs__msg__SensorData *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_rtabmap_msgs__msg__SensorData(cdr, ros_message);
}

static uint32_t _SensorData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rtabmap_msgs__msg__SensorData(
      untyped_ros_message, 0));
}

static size_t _SensorData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rtabmap_msgs__msg__SensorData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SensorData = {
  "rtabmap_msgs::msg",
  "SensorData",
  _SensorData__cdr_serialize,
  _SensorData__cdr_deserialize,
  _SensorData__get_serialized_size,
  _SensorData__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SensorData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SensorData,
  get_message_typesupport_handle_function,
  &rtabmap_msgs__msg__SensorData__get_type_hash,
  &rtabmap_msgs__msg__SensorData__get_type_description,
  &rtabmap_msgs__msg__SensorData__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, SensorData)() {
  return &_SensorData__type_support;
}

#if defined(__cplusplus)
}
#endif
