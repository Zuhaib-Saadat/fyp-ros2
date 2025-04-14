// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rtabmap_msgs:srv/GlobalBundleAdjustment.idl
// generated code does not contain a copyright notice

#include "rtabmap_msgs/srv/detail/global_bundle_adjustment__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
const rosidl_type_hash_t *
rtabmap_msgs__srv__GlobalBundleAdjustment__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfb, 0xd7, 0x5c, 0x8a, 0x58, 0x5c, 0x98, 0xd2,
      0xca, 0xf1, 0xbc, 0xee, 0xa2, 0xcc, 0x24, 0x49,
      0x08, 0x99, 0xc5, 0x36, 0xdd, 0x7f, 0xe1, 0xd5,
      0x75, 0x13, 0x4d, 0xe4, 0x53, 0x28, 0x9a, 0x48,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
const rosidl_type_hash_t *
rtabmap_msgs__srv__GlobalBundleAdjustment_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x50, 0xcd, 0xd3, 0xe7, 0x46, 0x81, 0x3a, 0x08,
      0x6f, 0x81, 0xca, 0x33, 0xc7, 0x90, 0x18, 0xc0,
      0xc2, 0x96, 0x77, 0x5f, 0xe3, 0xd5, 0x46, 0x26,
      0x12, 0xa6, 0xa2, 0x3c, 0x72, 0x1f, 0x72, 0x43,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
const rosidl_type_hash_t *
rtabmap_msgs__srv__GlobalBundleAdjustment_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc6, 0x7c, 0xe5, 0xd6, 0xf2, 0x35, 0x96, 0xc0,
      0xb4, 0x58, 0x3a, 0xc3, 0x2d, 0x86, 0x8d, 0x48,
      0x15, 0xf8, 0x8e, 0x8c, 0xf4, 0x4a, 0xf1, 0xc8,
      0x28, 0x1e, 0xba, 0x6e, 0x19, 0xdd, 0x04, 0x16,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
const rosidl_type_hash_t *
rtabmap_msgs__srv__GlobalBundleAdjustment_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x32, 0xc5, 0x59, 0xa7, 0x99, 0x48, 0xe3, 0x82,
      0x6c, 0x7b, 0xb3, 0x92, 0xf7, 0x6c, 0x25, 0xb6,
      0xa2, 0xb5, 0x7b, 0x3e, 0xe4, 0x1a, 0x59, 0xdc,
      0xd0, 0xc2, 0x84, 0x12, 0xfd, 0xa0, 0xa9, 0x53,
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

static char rtabmap_msgs__srv__GlobalBundleAdjustment__TYPE_NAME[] = "rtabmap_msgs/srv/GlobalBundleAdjustment";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rtabmap_msgs__srv__GlobalBundleAdjustment_Event__TYPE_NAME[] = "rtabmap_msgs/srv/GlobalBundleAdjustment_Event";
static char rtabmap_msgs__srv__GlobalBundleAdjustment_Request__TYPE_NAME[] = "rtabmap_msgs/srv/GlobalBundleAdjustment_Request";
static char rtabmap_msgs__srv__GlobalBundleAdjustment_Response__TYPE_NAME[] = "rtabmap_msgs/srv/GlobalBundleAdjustment_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char rtabmap_msgs__srv__GlobalBundleAdjustment__FIELD_NAME__request_message[] = "request_message";
static char rtabmap_msgs__srv__GlobalBundleAdjustment__FIELD_NAME__response_message[] = "response_message";
static char rtabmap_msgs__srv__GlobalBundleAdjustment__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field rtabmap_msgs__srv__GlobalBundleAdjustment__FIELDS[] = {
  {
    {rtabmap_msgs__srv__GlobalBundleAdjustment__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rtabmap_msgs__srv__GlobalBundleAdjustment_Request__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__GlobalBundleAdjustment__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rtabmap_msgs__srv__GlobalBundleAdjustment_Response__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__GlobalBundleAdjustment__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rtabmap_msgs__srv__GlobalBundleAdjustment_Event__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rtabmap_msgs__srv__GlobalBundleAdjustment__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__GlobalBundleAdjustment_Event__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__GlobalBundleAdjustment_Request__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__GlobalBundleAdjustment_Response__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rtabmap_msgs__srv__GlobalBundleAdjustment__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rtabmap_msgs__srv__GlobalBundleAdjustment__TYPE_NAME, 39, 39},
      {rtabmap_msgs__srv__GlobalBundleAdjustment__FIELDS, 3, 3},
    },
    {rtabmap_msgs__srv__GlobalBundleAdjustment__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rtabmap_msgs__srv__GlobalBundleAdjustment_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rtabmap_msgs__srv__GlobalBundleAdjustment_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = rtabmap_msgs__srv__GlobalBundleAdjustment_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rtabmap_msgs__srv__GlobalBundleAdjustment_Request__FIELD_NAME__type[] = "type";
static char rtabmap_msgs__srv__GlobalBundleAdjustment_Request__FIELD_NAME__iterations[] = "iterations";
static char rtabmap_msgs__srv__GlobalBundleAdjustment_Request__FIELD_NAME__pixel_variance[] = "pixel_variance";
static char rtabmap_msgs__srv__GlobalBundleAdjustment_Request__FIELD_NAME__voc_matches[] = "voc_matches";

static rosidl_runtime_c__type_description__Field rtabmap_msgs__srv__GlobalBundleAdjustment_Request__FIELDS[] = {
  {
    {rtabmap_msgs__srv__GlobalBundleAdjustment_Request__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__GlobalBundleAdjustment_Request__FIELD_NAME__iterations, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__GlobalBundleAdjustment_Request__FIELD_NAME__pixel_variance, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__GlobalBundleAdjustment_Request__FIELD_NAME__voc_matches, 11, 11},
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
rtabmap_msgs__srv__GlobalBundleAdjustment_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rtabmap_msgs__srv__GlobalBundleAdjustment_Request__TYPE_NAME, 47, 47},
      {rtabmap_msgs__srv__GlobalBundleAdjustment_Request__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rtabmap_msgs__srv__GlobalBundleAdjustment_Response__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field rtabmap_msgs__srv__GlobalBundleAdjustment_Response__FIELDS[] = {
  {
    {rtabmap_msgs__srv__GlobalBundleAdjustment_Response__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rtabmap_msgs__srv__GlobalBundleAdjustment_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rtabmap_msgs__srv__GlobalBundleAdjustment_Response__TYPE_NAME, 48, 48},
      {rtabmap_msgs__srv__GlobalBundleAdjustment_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rtabmap_msgs__srv__GlobalBundleAdjustment_Event__FIELD_NAME__info[] = "info";
static char rtabmap_msgs__srv__GlobalBundleAdjustment_Event__FIELD_NAME__request[] = "request";
static char rtabmap_msgs__srv__GlobalBundleAdjustment_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field rtabmap_msgs__srv__GlobalBundleAdjustment_Event__FIELDS[] = {
  {
    {rtabmap_msgs__srv__GlobalBundleAdjustment_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__GlobalBundleAdjustment_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rtabmap_msgs__srv__GlobalBundleAdjustment_Request__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__GlobalBundleAdjustment_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rtabmap_msgs__srv__GlobalBundleAdjustment_Response__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rtabmap_msgs__srv__GlobalBundleAdjustment_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__GlobalBundleAdjustment_Request__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__GlobalBundleAdjustment_Response__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rtabmap_msgs__srv__GlobalBundleAdjustment_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rtabmap_msgs__srv__GlobalBundleAdjustment_Event__TYPE_NAME, 45, 45},
      {rtabmap_msgs__srv__GlobalBundleAdjustment_Event__FIELDS, 3, 3},
    },
    {rtabmap_msgs__srv__GlobalBundleAdjustment_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rtabmap_msgs__srv__GlobalBundleAdjustment_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rtabmap_msgs__srv__GlobalBundleAdjustment_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Global Bundle Adjustment service\n"
  "#\n"
  "#       Perform global bundle adjustment. Note that as soon as the map \n"
  "#       is modified again, the graph is re-optimized the standard way (without SBA).\n"
  "#       It then makes only sense to use this after a mapping run (and after a call \n"
  "#       to /rtabmap/pause) when you know that the robot will restart in localization \n"
  "#       mode the next time, or at the beginning of the localization session.\n"
  "#\n"
  "\n"
  "# Optimizer type (0=g2o, 1=CVSBA), default 0\n"
  "int32 type\n"
  "\n"
  "# Iterations,        default 0 (use Optimizer/Iterations already loaded in the node)\n"
  "int32 iterations\n"
  "\n"
  "# Pixel variance,    default 0 (use g2o/PixelVariance already loaded in the node)\n"
  "float32 pixel_variance\n"
  "\n"
  "# Use vocabulary matches, default false (rematch all features between frames)\n"
  "bool voc_matches\n"
  "---\n"
  "# return false if failure";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rtabmap_msgs__srv__GlobalBundleAdjustment__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rtabmap_msgs__srv__GlobalBundleAdjustment__TYPE_NAME, 39, 39},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 835, 835},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rtabmap_msgs__srv__GlobalBundleAdjustment_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rtabmap_msgs__srv__GlobalBundleAdjustment_Request__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rtabmap_msgs__srv__GlobalBundleAdjustment_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rtabmap_msgs__srv__GlobalBundleAdjustment_Response__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rtabmap_msgs__srv__GlobalBundleAdjustment_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rtabmap_msgs__srv__GlobalBundleAdjustment_Event__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rtabmap_msgs__srv__GlobalBundleAdjustment__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rtabmap_msgs__srv__GlobalBundleAdjustment__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rtabmap_msgs__srv__GlobalBundleAdjustment_Event__get_individual_type_description_source(NULL);
    sources[3] = *rtabmap_msgs__srv__GlobalBundleAdjustment_Request__get_individual_type_description_source(NULL);
    sources[4] = *rtabmap_msgs__srv__GlobalBundleAdjustment_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rtabmap_msgs__srv__GlobalBundleAdjustment_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rtabmap_msgs__srv__GlobalBundleAdjustment_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rtabmap_msgs__srv__GlobalBundleAdjustment_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rtabmap_msgs__srv__GlobalBundleAdjustment_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rtabmap_msgs__srv__GlobalBundleAdjustment_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rtabmap_msgs__srv__GlobalBundleAdjustment_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rtabmap_msgs__srv__GlobalBundleAdjustment_Request__get_individual_type_description_source(NULL);
    sources[3] = *rtabmap_msgs__srv__GlobalBundleAdjustment_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
