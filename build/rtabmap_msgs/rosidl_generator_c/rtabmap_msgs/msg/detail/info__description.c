// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rtabmap_msgs:msg/Info.idl
// generated code does not contain a copyright notice

#include "rtabmap_msgs/msg/detail/info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
const rosidl_type_hash_t *
rtabmap_msgs__msg__Info__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2b, 0xaf, 0x89, 0x4b, 0x8c, 0x68, 0xd2, 0x2b,
      0xb7, 0x24, 0x15, 0x0c, 0x65, 0xa6, 0xec, 0x73,
      0x78, 0x5d, 0x1f, 0x85, 0xcd, 0x49, 0xa2, 0xa3,
      0x98, 0xf9, 0x70, 0x58, 0xa4, 0x48, 0xc0, 0x77,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rtabmap_msgs/msg/detail/map_graph__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "geometry_msgs/msg/detail/vector3__functions.h"
#include "geometry_msgs/msg/detail/transform__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "rtabmap_msgs/msg/detail/link__functions.h"
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
static const rosidl_type_hash_t rtabmap_msgs__msg__Link__EXPECTED_HASH = {1, {
    0x76, 0x43, 0x01, 0xc2, 0xd5, 0xf3, 0x04, 0x5b,
    0x5f, 0x97, 0x42, 0x0b, 0xd6, 0x46, 0x29, 0x32,
    0x1e, 0xce, 0xf7, 0x24, 0xa6, 0x01, 0x0e, 0x3d,
    0xfe, 0x5f, 0x5c, 0x3d, 0x4c, 0xe7, 0xac, 0x0a,
  }};
static const rosidl_type_hash_t rtabmap_msgs__msg__MapGraph__EXPECTED_HASH = {1, {
    0x25, 0xc8, 0x09, 0x7c, 0xcc, 0x47, 0x2a, 0x21,
    0x34, 0xe5, 0x91, 0x13, 0x10, 0x6a, 0x13, 0x30,
    0x2b, 0x00, 0x25, 0x82, 0x9e, 0xf3, 0x9e, 0x20,
    0x66, 0xe2, 0x07, 0x5f, 0xa8, 0x42, 0x28, 0xc4,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char rtabmap_msgs__msg__Info__TYPE_NAME[] = "rtabmap_msgs/msg/Info";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char geometry_msgs__msg__Transform__TYPE_NAME[] = "geometry_msgs/msg/Transform";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char rtabmap_msgs__msg__Link__TYPE_NAME[] = "rtabmap_msgs/msg/Link";
static char rtabmap_msgs__msg__MapGraph__TYPE_NAME[] = "rtabmap_msgs/msg/MapGraph";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char rtabmap_msgs__msg__Info__FIELD_NAME__header[] = "header";
static char rtabmap_msgs__msg__Info__FIELD_NAME__ref_id[] = "ref_id";
static char rtabmap_msgs__msg__Info__FIELD_NAME__loop_closure_id[] = "loop_closure_id";
static char rtabmap_msgs__msg__Info__FIELD_NAME__proximity_detection_id[] = "proximity_detection_id";
static char rtabmap_msgs__msg__Info__FIELD_NAME__landmark_id[] = "landmark_id";
static char rtabmap_msgs__msg__Info__FIELD_NAME__loop_closure_transform[] = "loop_closure_transform";
static char rtabmap_msgs__msg__Info__FIELD_NAME__wm_state[] = "wm_state";
static char rtabmap_msgs__msg__Info__FIELD_NAME__posterior_keys[] = "posterior_keys";
static char rtabmap_msgs__msg__Info__FIELD_NAME__posterior_values[] = "posterior_values";
static char rtabmap_msgs__msg__Info__FIELD_NAME__likelihood_keys[] = "likelihood_keys";
static char rtabmap_msgs__msg__Info__FIELD_NAME__likelihood_values[] = "likelihood_values";
static char rtabmap_msgs__msg__Info__FIELD_NAME__raw_likelihood_keys[] = "raw_likelihood_keys";
static char rtabmap_msgs__msg__Info__FIELD_NAME__raw_likelihood_values[] = "raw_likelihood_values";
static char rtabmap_msgs__msg__Info__FIELD_NAME__weights_keys[] = "weights_keys";
static char rtabmap_msgs__msg__Info__FIELD_NAME__weights_values[] = "weights_values";
static char rtabmap_msgs__msg__Info__FIELD_NAME__labels_keys[] = "labels_keys";
static char rtabmap_msgs__msg__Info__FIELD_NAME__labels_values[] = "labels_values";
static char rtabmap_msgs__msg__Info__FIELD_NAME__stats_keys[] = "stats_keys";
static char rtabmap_msgs__msg__Info__FIELD_NAME__stats_values[] = "stats_values";
static char rtabmap_msgs__msg__Info__FIELD_NAME__local_path[] = "local_path";
static char rtabmap_msgs__msg__Info__FIELD_NAME__current_goal_id[] = "current_goal_id";
static char rtabmap_msgs__msg__Info__FIELD_NAME__odom_cache[] = "odom_cache";

static rosidl_runtime_c__type_description__Field rtabmap_msgs__msg__Info__FIELDS[] = {
  {
    {rtabmap_msgs__msg__Info__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Info__FIELD_NAME__ref_id, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Info__FIELD_NAME__loop_closure_id, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Info__FIELD_NAME__proximity_detection_id, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Info__FIELD_NAME__landmark_id, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Info__FIELD_NAME__loop_closure_transform, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Transform__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Info__FIELD_NAME__wm_state, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Info__FIELD_NAME__posterior_keys, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Info__FIELD_NAME__posterior_values, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Info__FIELD_NAME__likelihood_keys, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Info__FIELD_NAME__likelihood_values, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Info__FIELD_NAME__raw_likelihood_keys, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Info__FIELD_NAME__raw_likelihood_values, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Info__FIELD_NAME__weights_keys, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Info__FIELD_NAME__weights_values, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Info__FIELD_NAME__labels_keys, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Info__FIELD_NAME__labels_values, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Info__FIELD_NAME__stats_keys, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Info__FIELD_NAME__stats_values, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Info__FIELD_NAME__local_path, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Info__FIELD_NAME__current_goal_id, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__Info__FIELD_NAME__odom_cache, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rtabmap_msgs__msg__MapGraph__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rtabmap_msgs__msg__Info__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {rtabmap_msgs__msg__Link__TYPE_NAME, 21, 21},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__msg__MapGraph__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rtabmap_msgs__msg__Info__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rtabmap_msgs__msg__Info__TYPE_NAME, 21, 21},
      {rtabmap_msgs__msg__Info__FIELDS, 22, 22},
    },
    {rtabmap_msgs__msg__Info__REFERENCED_TYPE_DESCRIPTIONS, 9, 9},
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
    assert(0 == memcmp(&rtabmap_msgs__msg__Link__EXPECTED_HASH, rtabmap_msgs__msg__Link__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = rtabmap_msgs__msg__Link__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rtabmap_msgs__msg__MapGraph__EXPECTED_HASH, rtabmap_msgs__msg__MapGraph__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = rtabmap_msgs__msg__MapGraph__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "########################################\n"
  "# RTAB-Map info with statistics \n"
  "########################################\n"
  "\n"
  "std_msgs/Header header\n"
  "\n"
  "int32 ref_id\n"
  "int32 loop_closure_id\n"
  "int32 proximity_detection_id\n"
  "int32 landmark_id\n"
  "\n"
  "geometry_msgs/Transform loop_closure_transform\n"
  "\n"
  "####\n"
  "# For statistics...\n"
  "####\n"
  "# State (node IDs) of the current Working Memory (including STM)\n"
  "int32[] wm_state\n"
  "\n"
  "# std::map<int, float> posterior;\n"
  "int32[] posterior_keys\n"
  "float32[] posterior_values\n"
  "\n"
  "# std::map<int, float> likelihood;\n"
  "int32[] likelihood_keys\n"
  "float32[] likelihood_values\n"
  "\n"
  "# std::map<int, float> raw_likelihood;\n"
  "int32[] raw_likelihood_keys\n"
  "float32[] raw_likelihood_values\n"
  "\n"
  "# std::map<int, int> weights;\n"
  "int32[] weights_keys\n"
  "int32[] weights_values\n"
  "\n"
  "# std::map<int, std::string> labels;\n"
  "int32[] labels_keys\n"
  "string[] labels_values\n"
  "\n"
  "# std::map<std::string, float> stats\n"
  "string[] stats_keys\n"
  "float32[] stats_values\n"
  "\n"
  "# std::vector<int> local_path\n"
  "int32[] local_path\n"
  "int32 current_goal_id\n"
  "\n"
  "# std::vector<int> odomCache\n"
  "MapGraph odom_cache";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rtabmap_msgs__msg__Info__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rtabmap_msgs__msg__Info__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1016, 1016},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rtabmap_msgs__msg__Info__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[10];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 10, 10};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rtabmap_msgs__msg__Info__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Transform__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[7] = *rtabmap_msgs__msg__Link__get_individual_type_description_source(NULL);
    sources[8] = *rtabmap_msgs__msg__MapGraph__get_individual_type_description_source(NULL);
    sources[9] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
