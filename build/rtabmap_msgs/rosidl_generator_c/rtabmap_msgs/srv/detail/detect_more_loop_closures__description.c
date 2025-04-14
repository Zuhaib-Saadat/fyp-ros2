// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rtabmap_msgs:srv/DetectMoreLoopClosures.idl
// generated code does not contain a copyright notice

#include "rtabmap_msgs/srv/detail/detect_more_loop_closures__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
const rosidl_type_hash_t *
rtabmap_msgs__srv__DetectMoreLoopClosures__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xee, 0xd5, 0x31, 0xf7, 0x93, 0x27, 0xe0, 0xf4,
      0x87, 0x27, 0xf7, 0xae, 0xb9, 0xae, 0x94, 0xf0,
      0x52, 0xd5, 0x76, 0x47, 0xca, 0xd7, 0x44, 0xfc,
      0x67, 0xd0, 0x02, 0x9a, 0x69, 0xa2, 0x6d, 0x4d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
const rosidl_type_hash_t *
rtabmap_msgs__srv__DetectMoreLoopClosures_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5b, 0x05, 0x0c, 0x03, 0xc3, 0x26, 0xe1, 0xea,
      0xfa, 0x4f, 0xb0, 0x5d, 0x94, 0x1e, 0x75, 0x6e,
      0x12, 0x06, 0xeb, 0xd1, 0x76, 0x3a, 0x29, 0x97,
      0x61, 0xe2, 0xf4, 0x8b, 0x9b, 0xd2, 0x51, 0xb5,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
const rosidl_type_hash_t *
rtabmap_msgs__srv__DetectMoreLoopClosures_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xaf, 0x97, 0x5e, 0xf2, 0x8e, 0x19, 0x9e, 0xce,
      0x13, 0x7a, 0x19, 0xb0, 0x14, 0x45, 0xd5, 0x39,
      0x29, 0x1f, 0x35, 0x58, 0x2b, 0x85, 0xd3, 0x01,
      0x0e, 0x4f, 0x48, 0x72, 0x54, 0x9a, 0xd4, 0x8a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
const rosidl_type_hash_t *
rtabmap_msgs__srv__DetectMoreLoopClosures_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf5, 0x45, 0x07, 0x5c, 0xa8, 0x82, 0xa3, 0xc5,
      0x8e, 0xb8, 0x05, 0x22, 0x44, 0xc0, 0x81, 0xda,
      0xb1, 0xe4, 0xdb, 0xa3, 0x90, 0x1c, 0x7b, 0x69,
      0x36, 0xed, 0x56, 0x72, 0xa1, 0xb0, 0x66, 0xdf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char rtabmap_msgs__srv__DetectMoreLoopClosures__TYPE_NAME[] = "rtabmap_msgs/srv/DetectMoreLoopClosures";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rtabmap_msgs__srv__DetectMoreLoopClosures_Event__TYPE_NAME[] = "rtabmap_msgs/srv/DetectMoreLoopClosures_Event";
static char rtabmap_msgs__srv__DetectMoreLoopClosures_Request__TYPE_NAME[] = "rtabmap_msgs/srv/DetectMoreLoopClosures_Request";
static char rtabmap_msgs__srv__DetectMoreLoopClosures_Response__TYPE_NAME[] = "rtabmap_msgs/srv/DetectMoreLoopClosures_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char rtabmap_msgs__srv__DetectMoreLoopClosures__FIELD_NAME__request_message[] = "request_message";
static char rtabmap_msgs__srv__DetectMoreLoopClosures__FIELD_NAME__response_message[] = "response_message";
static char rtabmap_msgs__srv__DetectMoreLoopClosures__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field rtabmap_msgs__srv__DetectMoreLoopClosures__FIELDS[] = {
  {
    {rtabmap_msgs__srv__DetectMoreLoopClosures__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rtabmap_msgs__srv__DetectMoreLoopClosures_Request__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__DetectMoreLoopClosures__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rtabmap_msgs__srv__DetectMoreLoopClosures_Response__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__DetectMoreLoopClosures__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rtabmap_msgs__srv__DetectMoreLoopClosures_Event__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rtabmap_msgs__srv__DetectMoreLoopClosures__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__DetectMoreLoopClosures_Event__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__DetectMoreLoopClosures_Request__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__DetectMoreLoopClosures_Response__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rtabmap_msgs__srv__DetectMoreLoopClosures__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rtabmap_msgs__srv__DetectMoreLoopClosures__TYPE_NAME, 39, 39},
      {rtabmap_msgs__srv__DetectMoreLoopClosures__FIELDS, 3, 3},
    },
    {rtabmap_msgs__srv__DetectMoreLoopClosures__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rtabmap_msgs__srv__DetectMoreLoopClosures_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rtabmap_msgs__srv__DetectMoreLoopClosures_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = rtabmap_msgs__srv__DetectMoreLoopClosures_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rtabmap_msgs__srv__DetectMoreLoopClosures_Request__FIELD_NAME__cluster_radius_max[] = "cluster_radius_max";
static char rtabmap_msgs__srv__DetectMoreLoopClosures_Request__FIELD_NAME__cluster_radius_min[] = "cluster_radius_min";
static char rtabmap_msgs__srv__DetectMoreLoopClosures_Request__FIELD_NAME__cluster_angle[] = "cluster_angle";
static char rtabmap_msgs__srv__DetectMoreLoopClosures_Request__FIELD_NAME__iterations[] = "iterations";
static char rtabmap_msgs__srv__DetectMoreLoopClosures_Request__FIELD_NAME__intra_only[] = "intra_only";
static char rtabmap_msgs__srv__DetectMoreLoopClosures_Request__FIELD_NAME__inter_only[] = "inter_only";

static rosidl_runtime_c__type_description__Field rtabmap_msgs__srv__DetectMoreLoopClosures_Request__FIELDS[] = {
  {
    {rtabmap_msgs__srv__DetectMoreLoopClosures_Request__FIELD_NAME__cluster_radius_max, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__DetectMoreLoopClosures_Request__FIELD_NAME__cluster_radius_min, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__DetectMoreLoopClosures_Request__FIELD_NAME__cluster_angle, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__DetectMoreLoopClosures_Request__FIELD_NAME__iterations, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__DetectMoreLoopClosures_Request__FIELD_NAME__intra_only, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__DetectMoreLoopClosures_Request__FIELD_NAME__inter_only, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rtabmap_msgs__srv__DetectMoreLoopClosures_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rtabmap_msgs__srv__DetectMoreLoopClosures_Request__TYPE_NAME, 47, 47},
      {rtabmap_msgs__srv__DetectMoreLoopClosures_Request__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rtabmap_msgs__srv__DetectMoreLoopClosures_Response__FIELD_NAME__detected[] = "detected";

static rosidl_runtime_c__type_description__Field rtabmap_msgs__srv__DetectMoreLoopClosures_Response__FIELDS[] = {
  {
    {rtabmap_msgs__srv__DetectMoreLoopClosures_Response__FIELD_NAME__detected, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rtabmap_msgs__srv__DetectMoreLoopClosures_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rtabmap_msgs__srv__DetectMoreLoopClosures_Response__TYPE_NAME, 48, 48},
      {rtabmap_msgs__srv__DetectMoreLoopClosures_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rtabmap_msgs__srv__DetectMoreLoopClosures_Event__FIELD_NAME__info[] = "info";
static char rtabmap_msgs__srv__DetectMoreLoopClosures_Event__FIELD_NAME__request[] = "request";
static char rtabmap_msgs__srv__DetectMoreLoopClosures_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field rtabmap_msgs__srv__DetectMoreLoopClosures_Event__FIELDS[] = {
  {
    {rtabmap_msgs__srv__DetectMoreLoopClosures_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__DetectMoreLoopClosures_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rtabmap_msgs__srv__DetectMoreLoopClosures_Request__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__DetectMoreLoopClosures_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rtabmap_msgs__srv__DetectMoreLoopClosures_Response__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rtabmap_msgs__srv__DetectMoreLoopClosures_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__DetectMoreLoopClosures_Request__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__DetectMoreLoopClosures_Response__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rtabmap_msgs__srv__DetectMoreLoopClosures_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rtabmap_msgs__srv__DetectMoreLoopClosures_Event__TYPE_NAME, 45, 45},
      {rtabmap_msgs__srv__DetectMoreLoopClosures_Event__FIELDS, 3, 3},
    },
    {rtabmap_msgs__srv__DetectMoreLoopClosures_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rtabmap_msgs__srv__DetectMoreLoopClosures_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rtabmap_msgs__srv__DetectMoreLoopClosures_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Detect more loop closures service\n"
  "#\n"
  "#     Based on the current optimized graph, \n"
  "#     this process will try to find more nodes corresponding with each \n"
  "#     other, and thus finding more loop closures to add to graph.\n"
  "# \n"
  "\n"
  "# Cluster radius (m),     default 1 m if not set\n"
  "float32 cluster_radius_max\n"
  "\n"
  "# Cluster radius min (m), default 0 m if not set\n"
  "float32 cluster_radius_min\n"
  "\n"
  "# Cluster angle (deg),    default 0 deg if not set\n"
  "float32 cluster_angle\n"
  "\n"
  "# Iterations,             default 1 if not set\n"
  "int32 iterations\n"
  "\n"
  "# Add only intra session loop closures\n"
  "bool intra_only\n"
  "\n"
  "# Add only inter session loop closures\n"
  "bool inter_only\n"
  "---\n"
  "# return the number of loop closures detected, or -1 if it failed.\n"
  "int32 detected";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rtabmap_msgs__srv__DetectMoreLoopClosures__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rtabmap_msgs__srv__DetectMoreLoopClosures__TYPE_NAME, 39, 39},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 715, 715},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rtabmap_msgs__srv__DetectMoreLoopClosures_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rtabmap_msgs__srv__DetectMoreLoopClosures_Request__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rtabmap_msgs__srv__DetectMoreLoopClosures_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rtabmap_msgs__srv__DetectMoreLoopClosures_Response__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rtabmap_msgs__srv__DetectMoreLoopClosures_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rtabmap_msgs__srv__DetectMoreLoopClosures_Event__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rtabmap_msgs__srv__DetectMoreLoopClosures__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rtabmap_msgs__srv__DetectMoreLoopClosures__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rtabmap_msgs__srv__DetectMoreLoopClosures_Event__get_individual_type_description_source(NULL);
    sources[3] = *rtabmap_msgs__srv__DetectMoreLoopClosures_Request__get_individual_type_description_source(NULL);
    sources[4] = *rtabmap_msgs__srv__DetectMoreLoopClosures_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rtabmap_msgs__srv__DetectMoreLoopClosures_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rtabmap_msgs__srv__DetectMoreLoopClosures_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rtabmap_msgs__srv__DetectMoreLoopClosures_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rtabmap_msgs__srv__DetectMoreLoopClosures_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rtabmap_msgs__srv__DetectMoreLoopClosures_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rtabmap_msgs__srv__DetectMoreLoopClosures_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rtabmap_msgs__srv__DetectMoreLoopClosures_Request__get_individual_type_description_source(NULL);
    sources[3] = *rtabmap_msgs__srv__DetectMoreLoopClosures_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
