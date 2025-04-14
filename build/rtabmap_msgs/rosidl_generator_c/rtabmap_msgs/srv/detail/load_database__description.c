// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rtabmap_msgs:srv/LoadDatabase.idl
// generated code does not contain a copyright notice

#include "rtabmap_msgs/srv/detail/load_database__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
const rosidl_type_hash_t *
rtabmap_msgs__srv__LoadDatabase__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe6, 0x5d, 0xbc, 0x4c, 0x9e, 0x5e, 0x9e, 0xc5,
      0x6c, 0xb8, 0x8f, 0x30, 0x52, 0x47, 0x01, 0x66,
      0x00, 0xb1, 0xc2, 0x1f, 0x49, 0x05, 0x58, 0x57,
      0x19, 0xae, 0x5b, 0xb2, 0xd0, 0xaf, 0xd4, 0x7b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
const rosidl_type_hash_t *
rtabmap_msgs__srv__LoadDatabase_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5f, 0xc7, 0xfe, 0x8a, 0xff, 0x79, 0x7c, 0x07,
      0x37, 0xda, 0x22, 0x54, 0x1d, 0x48, 0xd1, 0x64,
      0x16, 0x46, 0xce, 0xe5, 0xe7, 0x9e, 0x9a, 0xe5,
      0xfa, 0x5b, 0x27, 0xcd, 0xfb, 0x4c, 0x5e, 0x6b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
const rosidl_type_hash_t *
rtabmap_msgs__srv__LoadDatabase_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7b, 0x8e, 0x85, 0xaf, 0xd7, 0xf0, 0x83, 0x93,
      0xc2, 0x09, 0x4e, 0x79, 0xa0, 0x51, 0x4f, 0xa4,
      0x79, 0x2d, 0x2d, 0xe5, 0x80, 0x0f, 0xd4, 0x11,
      0xcb, 0xeb, 0xda, 0x1e, 0xa5, 0xbf, 0xdf, 0x0d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
const rosidl_type_hash_t *
rtabmap_msgs__srv__LoadDatabase_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x27, 0x3b, 0x80, 0x7b, 0xd1, 0xf9, 0x02, 0x23,
      0x88, 0x6d, 0x15, 0x60, 0xd0, 0x5f, 0xa1, 0x67,
      0xeb, 0xc9, 0xd4, 0x85, 0x59, 0xb2, 0x52, 0x16,
      0x20, 0x29, 0x64, 0x27, 0x13, 0x53, 0xb8, 0x29,
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

static char rtabmap_msgs__srv__LoadDatabase__TYPE_NAME[] = "rtabmap_msgs/srv/LoadDatabase";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rtabmap_msgs__srv__LoadDatabase_Event__TYPE_NAME[] = "rtabmap_msgs/srv/LoadDatabase_Event";
static char rtabmap_msgs__srv__LoadDatabase_Request__TYPE_NAME[] = "rtabmap_msgs/srv/LoadDatabase_Request";
static char rtabmap_msgs__srv__LoadDatabase_Response__TYPE_NAME[] = "rtabmap_msgs/srv/LoadDatabase_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char rtabmap_msgs__srv__LoadDatabase__FIELD_NAME__request_message[] = "request_message";
static char rtabmap_msgs__srv__LoadDatabase__FIELD_NAME__response_message[] = "response_message";
static char rtabmap_msgs__srv__LoadDatabase__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field rtabmap_msgs__srv__LoadDatabase__FIELDS[] = {
  {
    {rtabmap_msgs__srv__LoadDatabase__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rtabmap_msgs__srv__LoadDatabase_Request__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__LoadDatabase__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rtabmap_msgs__srv__LoadDatabase_Response__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__LoadDatabase__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rtabmap_msgs__srv__LoadDatabase_Event__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rtabmap_msgs__srv__LoadDatabase__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__LoadDatabase_Event__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__LoadDatabase_Request__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__LoadDatabase_Response__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rtabmap_msgs__srv__LoadDatabase__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rtabmap_msgs__srv__LoadDatabase__TYPE_NAME, 29, 29},
      {rtabmap_msgs__srv__LoadDatabase__FIELDS, 3, 3},
    },
    {rtabmap_msgs__srv__LoadDatabase__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rtabmap_msgs__srv__LoadDatabase_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rtabmap_msgs__srv__LoadDatabase_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = rtabmap_msgs__srv__LoadDatabase_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rtabmap_msgs__srv__LoadDatabase_Request__FIELD_NAME__database_path[] = "database_path";
static char rtabmap_msgs__srv__LoadDatabase_Request__FIELD_NAME__clear[] = "clear";

static rosidl_runtime_c__type_description__Field rtabmap_msgs__srv__LoadDatabase_Request__FIELDS[] = {
  {
    {rtabmap_msgs__srv__LoadDatabase_Request__FIELD_NAME__database_path, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__LoadDatabase_Request__FIELD_NAME__clear, 5, 5},
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
rtabmap_msgs__srv__LoadDatabase_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rtabmap_msgs__srv__LoadDatabase_Request__TYPE_NAME, 37, 37},
      {rtabmap_msgs__srv__LoadDatabase_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rtabmap_msgs__srv__LoadDatabase_Response__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field rtabmap_msgs__srv__LoadDatabase_Response__FIELDS[] = {
  {
    {rtabmap_msgs__srv__LoadDatabase_Response__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
rtabmap_msgs__srv__LoadDatabase_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rtabmap_msgs__srv__LoadDatabase_Response__TYPE_NAME, 38, 38},
      {rtabmap_msgs__srv__LoadDatabase_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rtabmap_msgs__srv__LoadDatabase_Event__FIELD_NAME__info[] = "info";
static char rtabmap_msgs__srv__LoadDatabase_Event__FIELD_NAME__request[] = "request";
static char rtabmap_msgs__srv__LoadDatabase_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field rtabmap_msgs__srv__LoadDatabase_Event__FIELDS[] = {
  {
    {rtabmap_msgs__srv__LoadDatabase_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__LoadDatabase_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rtabmap_msgs__srv__LoadDatabase_Request__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__LoadDatabase_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rtabmap_msgs__srv__LoadDatabase_Response__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rtabmap_msgs__srv__LoadDatabase_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__LoadDatabase_Request__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__LoadDatabase_Response__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rtabmap_msgs__srv__LoadDatabase_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rtabmap_msgs__srv__LoadDatabase_Event__TYPE_NAME, 35, 35},
      {rtabmap_msgs__srv__LoadDatabase_Event__FIELDS, 3, 3},
    },
    {rtabmap_msgs__srv__LoadDatabase_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rtabmap_msgs__srv__LoadDatabase_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rtabmap_msgs__srv__LoadDatabase_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#request\n"
  "\n"
  "# Local database path on which rtabmap is running.\n"
  "# If the path doesn't exist, a new database will be created.\n"
  "string database_path\n"
  "\n"
  "# If the database already exists, data will be cleared if true.\n"
  "bool clear\n"
  "\n"
  "---\n"
  "#response, return false on rtabmap initialization failure.";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rtabmap_msgs__srv__LoadDatabase__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rtabmap_msgs__srv__LoadDatabase__TYPE_NAME, 29, 29},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 282, 282},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rtabmap_msgs__srv__LoadDatabase_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rtabmap_msgs__srv__LoadDatabase_Request__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rtabmap_msgs__srv__LoadDatabase_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rtabmap_msgs__srv__LoadDatabase_Response__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rtabmap_msgs__srv__LoadDatabase_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rtabmap_msgs__srv__LoadDatabase_Event__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rtabmap_msgs__srv__LoadDatabase__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rtabmap_msgs__srv__LoadDatabase__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rtabmap_msgs__srv__LoadDatabase_Event__get_individual_type_description_source(NULL);
    sources[3] = *rtabmap_msgs__srv__LoadDatabase_Request__get_individual_type_description_source(NULL);
    sources[4] = *rtabmap_msgs__srv__LoadDatabase_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rtabmap_msgs__srv__LoadDatabase_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rtabmap_msgs__srv__LoadDatabase_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rtabmap_msgs__srv__LoadDatabase_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rtabmap_msgs__srv__LoadDatabase_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rtabmap_msgs__srv__LoadDatabase_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rtabmap_msgs__srv__LoadDatabase_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rtabmap_msgs__srv__LoadDatabase_Request__get_individual_type_description_source(NULL);
    sources[3] = *rtabmap_msgs__srv__LoadDatabase_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
