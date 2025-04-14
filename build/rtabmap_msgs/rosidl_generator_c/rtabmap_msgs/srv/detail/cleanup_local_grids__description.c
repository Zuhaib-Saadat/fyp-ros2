// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rtabmap_msgs:srv/CleanupLocalGrids.idl
// generated code does not contain a copyright notice

#include "rtabmap_msgs/srv/detail/cleanup_local_grids__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
const rosidl_type_hash_t *
rtabmap_msgs__srv__CleanupLocalGrids__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa8, 0x09, 0xed, 0xc2, 0x59, 0x24, 0x51, 0xe0,
      0x94, 0x83, 0x0b, 0x0e, 0x49, 0x5b, 0xb9, 0x1d,
      0x6f, 0xb8, 0x1d, 0x9e, 0xbf, 0xb3, 0x30, 0xac,
      0x2c, 0x41, 0x82, 0x25, 0xf5, 0xd7, 0x1c, 0x2b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
const rosidl_type_hash_t *
rtabmap_msgs__srv__CleanupLocalGrids_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe7, 0x07, 0x30, 0x3a, 0x2e, 0xdf, 0xa9, 0xd6,
      0xf1, 0x2c, 0xf7, 0xbd, 0x46, 0x90, 0xa5, 0x0b,
      0x4c, 0x07, 0xac, 0xa1, 0x9c, 0xd3, 0x2b, 0xf8,
      0xd7, 0x9e, 0xb6, 0x09, 0xc6, 0x33, 0x33, 0x30,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
const rosidl_type_hash_t *
rtabmap_msgs__srv__CleanupLocalGrids_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbd, 0x00, 0xc3, 0x2c, 0x5e, 0x41, 0x53, 0x34,
      0xb6, 0xfb, 0x88, 0x3c, 0xcd, 0x9e, 0x0c, 0x84,
      0x5b, 0x83, 0xc8, 0x1a, 0x2e, 0xcd, 0xb2, 0x8c,
      0xd3, 0x27, 0xcf, 0xb1, 0x40, 0xc5, 0xcf, 0x6a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
const rosidl_type_hash_t *
rtabmap_msgs__srv__CleanupLocalGrids_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc4, 0xb9, 0xb9, 0xa1, 0x11, 0xda, 0x15, 0x4e,
      0xb6, 0x63, 0x80, 0xfb, 0x45, 0x19, 0xde, 0x71,
      0x0f, 0x96, 0x1a, 0xa2, 0x7e, 0xe1, 0x6d, 0x95,
      0x23, 0x67, 0xb2, 0x0a, 0x79, 0xde, 0x7a, 0x08,
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

static char rtabmap_msgs__srv__CleanupLocalGrids__TYPE_NAME[] = "rtabmap_msgs/srv/CleanupLocalGrids";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rtabmap_msgs__srv__CleanupLocalGrids_Event__TYPE_NAME[] = "rtabmap_msgs/srv/CleanupLocalGrids_Event";
static char rtabmap_msgs__srv__CleanupLocalGrids_Request__TYPE_NAME[] = "rtabmap_msgs/srv/CleanupLocalGrids_Request";
static char rtabmap_msgs__srv__CleanupLocalGrids_Response__TYPE_NAME[] = "rtabmap_msgs/srv/CleanupLocalGrids_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char rtabmap_msgs__srv__CleanupLocalGrids__FIELD_NAME__request_message[] = "request_message";
static char rtabmap_msgs__srv__CleanupLocalGrids__FIELD_NAME__response_message[] = "response_message";
static char rtabmap_msgs__srv__CleanupLocalGrids__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field rtabmap_msgs__srv__CleanupLocalGrids__FIELDS[] = {
  {
    {rtabmap_msgs__srv__CleanupLocalGrids__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rtabmap_msgs__srv__CleanupLocalGrids_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__CleanupLocalGrids__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rtabmap_msgs__srv__CleanupLocalGrids_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__CleanupLocalGrids__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rtabmap_msgs__srv__CleanupLocalGrids_Event__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rtabmap_msgs__srv__CleanupLocalGrids__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__CleanupLocalGrids_Event__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__CleanupLocalGrids_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__CleanupLocalGrids_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rtabmap_msgs__srv__CleanupLocalGrids__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rtabmap_msgs__srv__CleanupLocalGrids__TYPE_NAME, 34, 34},
      {rtabmap_msgs__srv__CleanupLocalGrids__FIELDS, 3, 3},
    },
    {rtabmap_msgs__srv__CleanupLocalGrids__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rtabmap_msgs__srv__CleanupLocalGrids_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rtabmap_msgs__srv__CleanupLocalGrids_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = rtabmap_msgs__srv__CleanupLocalGrids_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rtabmap_msgs__srv__CleanupLocalGrids_Request__FIELD_NAME__radius[] = "radius";
static char rtabmap_msgs__srv__CleanupLocalGrids_Request__FIELD_NAME__filter_scans[] = "filter_scans";

static rosidl_runtime_c__type_description__Field rtabmap_msgs__srv__CleanupLocalGrids_Request__FIELDS[] = {
  {
    {rtabmap_msgs__srv__CleanupLocalGrids_Request__FIELD_NAME__radius, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__CleanupLocalGrids_Request__FIELD_NAME__filter_scans, 12, 12},
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
rtabmap_msgs__srv__CleanupLocalGrids_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rtabmap_msgs__srv__CleanupLocalGrids_Request__TYPE_NAME, 42, 42},
      {rtabmap_msgs__srv__CleanupLocalGrids_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rtabmap_msgs__srv__CleanupLocalGrids_Response__FIELD_NAME__modified[] = "modified";

static rosidl_runtime_c__type_description__Field rtabmap_msgs__srv__CleanupLocalGrids_Response__FIELDS[] = {
  {
    {rtabmap_msgs__srv__CleanupLocalGrids_Response__FIELD_NAME__modified, 8, 8},
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
rtabmap_msgs__srv__CleanupLocalGrids_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rtabmap_msgs__srv__CleanupLocalGrids_Response__TYPE_NAME, 43, 43},
      {rtabmap_msgs__srv__CleanupLocalGrids_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rtabmap_msgs__srv__CleanupLocalGrids_Event__FIELD_NAME__info[] = "info";
static char rtabmap_msgs__srv__CleanupLocalGrids_Event__FIELD_NAME__request[] = "request";
static char rtabmap_msgs__srv__CleanupLocalGrids_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field rtabmap_msgs__srv__CleanupLocalGrids_Event__FIELDS[] = {
  {
    {rtabmap_msgs__srv__CleanupLocalGrids_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__CleanupLocalGrids_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rtabmap_msgs__srv__CleanupLocalGrids_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__CleanupLocalGrids_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rtabmap_msgs__srv__CleanupLocalGrids_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rtabmap_msgs__srv__CleanupLocalGrids_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__CleanupLocalGrids_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__CleanupLocalGrids_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rtabmap_msgs__srv__CleanupLocalGrids_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rtabmap_msgs__srv__CleanupLocalGrids_Event__TYPE_NAME, 40, 40},
      {rtabmap_msgs__srv__CleanupLocalGrids_Event__FIELDS, 3, 3},
    },
    {rtabmap_msgs__srv__CleanupLocalGrids_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rtabmap_msgs__srv__CleanupLocalGrids_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rtabmap_msgs__srv__CleanupLocalGrids_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#  Cleanup local grids service\n"
  "# \n"
  "#     Clear empty space from local occupancy grids \n"
  "#     (and laser scans) based on the current optimized global 2d grid map.\n"
  "#     If the map needs to be regenerated in the future (e.g., when\n"
  "#     we re-use the map in SLAM mode), removed obstacles won't reappear.\n"
  "#     Use this with care and only when you know that the map doesn't have errors, \n"
  "#     otherwise some real obstacles/walls may be cleared if there is too much \n"
  "#     drift in the map.\n"
  "#\n"
  "\n"
  "# Radius in cells around empty cell without obstacles to clear underlying obstacles, default 1 cell if not set.\n"
  "int32 radius\n"
  "\n"
  "# Filter also the scans, default false if not set.\n"
  "# The filtered laser scans will be used for localization,\n"
  "# so if dynamic obstacles have been removed, localization won't try to\n"
  "# match them anymore. Filtering the laser scans cannot be reverted, \n"
  "# but grids can (see DatabaseViewer->Edit menu).\n"
  "bool filter_scans\n"
  "\n"
  "---\n"
  "# return the number of grids or scans modified, -1 if there is an error\n"
  "int32 modified";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rtabmap_msgs__srv__CleanupLocalGrids__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rtabmap_msgs__srv__CleanupLocalGrids__TYPE_NAME, 34, 34},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 1024, 1024},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rtabmap_msgs__srv__CleanupLocalGrids_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rtabmap_msgs__srv__CleanupLocalGrids_Request__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rtabmap_msgs__srv__CleanupLocalGrids_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rtabmap_msgs__srv__CleanupLocalGrids_Response__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rtabmap_msgs__srv__CleanupLocalGrids_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rtabmap_msgs__srv__CleanupLocalGrids_Event__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rtabmap_msgs__srv__CleanupLocalGrids__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rtabmap_msgs__srv__CleanupLocalGrids__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rtabmap_msgs__srv__CleanupLocalGrids_Event__get_individual_type_description_source(NULL);
    sources[3] = *rtabmap_msgs__srv__CleanupLocalGrids_Request__get_individual_type_description_source(NULL);
    sources[4] = *rtabmap_msgs__srv__CleanupLocalGrids_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rtabmap_msgs__srv__CleanupLocalGrids_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rtabmap_msgs__srv__CleanupLocalGrids_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rtabmap_msgs__srv__CleanupLocalGrids_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rtabmap_msgs__srv__CleanupLocalGrids_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rtabmap_msgs__srv__CleanupLocalGrids_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rtabmap_msgs__srv__CleanupLocalGrids_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rtabmap_msgs__srv__CleanupLocalGrids_Request__get_individual_type_description_source(NULL);
    sources[3] = *rtabmap_msgs__srv__CleanupLocalGrids_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
