// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rtabmap_msgs:srv/GetNodesInRadius.idl
// generated code does not contain a copyright notice

#include "rtabmap_msgs/srv/detail/get_nodes_in_radius__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
const rosidl_type_hash_t *
rtabmap_msgs__srv__GetNodesInRadius__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x45, 0x8d, 0x28, 0xdd, 0x7e, 0xc8, 0xb7, 0x71,
      0x1b, 0x62, 0x9b, 0xc0, 0x37, 0x8e, 0x36, 0xf4,
      0xc7, 0xeb, 0x16, 0xb0, 0xd5, 0xe1, 0x33, 0xf0,
      0x7e, 0x7a, 0xca, 0x3b, 0x31, 0x96, 0x7a, 0xad,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
const rosidl_type_hash_t *
rtabmap_msgs__srv__GetNodesInRadius_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf8, 0x0f, 0x1b, 0x77, 0xcc, 0xa5, 0x13, 0xf6,
      0x48, 0xfd, 0x2f, 0x18, 0x61, 0x94, 0xf3, 0x5d,
      0x5b, 0xa6, 0x1d, 0x54, 0x73, 0xdc, 0x49, 0x7f,
      0x59, 0x49, 0x48, 0x45, 0xa9, 0x7c, 0xb2, 0x5c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
const rosidl_type_hash_t *
rtabmap_msgs__srv__GetNodesInRadius_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf1, 0x7a, 0x33, 0x61, 0x6b, 0xbb, 0xd6, 0x0d,
      0xaa, 0x98, 0x4f, 0xaf, 0xcd, 0xf2, 0xb5, 0x38,
      0x89, 0x51, 0x1a, 0x52, 0xa9, 0xe8, 0x73, 0x17,
      0xe6, 0x02, 0x27, 0xda, 0x72, 0x0e, 0x97, 0x94,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rtabmap_msgs
const rosidl_type_hash_t *
rtabmap_msgs__srv__GetNodesInRadius_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x15, 0x24, 0x55, 0xa7, 0x56, 0x0c, 0x64, 0x76,
      0x89, 0xef, 0x61, 0x18, 0x18, 0x5f, 0xdc, 0x8b,
      0xf8, 0x14, 0x4f, 0x2c, 0x74, 0x68, 0xee, 0x98,
      0x68, 0x5b, 0xdc, 0x30, 0x57, 0xfa, 0x92, 0xe1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"

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
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char rtabmap_msgs__srv__GetNodesInRadius__TYPE_NAME[] = "rtabmap_msgs/srv/GetNodesInRadius";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char rtabmap_msgs__srv__GetNodesInRadius_Event__TYPE_NAME[] = "rtabmap_msgs/srv/GetNodesInRadius_Event";
static char rtabmap_msgs__srv__GetNodesInRadius_Request__TYPE_NAME[] = "rtabmap_msgs/srv/GetNodesInRadius_Request";
static char rtabmap_msgs__srv__GetNodesInRadius_Response__TYPE_NAME[] = "rtabmap_msgs/srv/GetNodesInRadius_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char rtabmap_msgs__srv__GetNodesInRadius__FIELD_NAME__request_message[] = "request_message";
static char rtabmap_msgs__srv__GetNodesInRadius__FIELD_NAME__response_message[] = "response_message";
static char rtabmap_msgs__srv__GetNodesInRadius__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field rtabmap_msgs__srv__GetNodesInRadius__FIELDS[] = {
  {
    {rtabmap_msgs__srv__GetNodesInRadius__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rtabmap_msgs__srv__GetNodesInRadius_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__GetNodesInRadius__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rtabmap_msgs__srv__GetNodesInRadius_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__GetNodesInRadius__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rtabmap_msgs__srv__GetNodesInRadius_Event__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rtabmap_msgs__srv__GetNodesInRadius__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {rtabmap_msgs__srv__GetNodesInRadius_Event__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__GetNodesInRadius_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__GetNodesInRadius_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rtabmap_msgs__srv__GetNodesInRadius__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rtabmap_msgs__srv__GetNodesInRadius__TYPE_NAME, 33, 33},
      {rtabmap_msgs__srv__GetNodesInRadius__FIELDS, 3, 3},
    },
    {rtabmap_msgs__srv__GetNodesInRadius__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
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
    description.referenced_type_descriptions.data[4].fields = rtabmap_msgs__srv__GetNodesInRadius_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = rtabmap_msgs__srv__GetNodesInRadius_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[6].fields = rtabmap_msgs__srv__GetNodesInRadius_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rtabmap_msgs__srv__GetNodesInRadius_Request__FIELD_NAME__node_id[] = "node_id";
static char rtabmap_msgs__srv__GetNodesInRadius_Request__FIELD_NAME__x[] = "x";
static char rtabmap_msgs__srv__GetNodesInRadius_Request__FIELD_NAME__y[] = "y";
static char rtabmap_msgs__srv__GetNodesInRadius_Request__FIELD_NAME__z[] = "z";
static char rtabmap_msgs__srv__GetNodesInRadius_Request__FIELD_NAME__radius[] = "radius";
static char rtabmap_msgs__srv__GetNodesInRadius_Request__FIELD_NAME__k[] = "k";

static rosidl_runtime_c__type_description__Field rtabmap_msgs__srv__GetNodesInRadius_Request__FIELDS[] = {
  {
    {rtabmap_msgs__srv__GetNodesInRadius_Request__FIELD_NAME__node_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__GetNodesInRadius_Request__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__GetNodesInRadius_Request__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__GetNodesInRadius_Request__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__GetNodesInRadius_Request__FIELD_NAME__radius, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__GetNodesInRadius_Request__FIELD_NAME__k, 1, 1},
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
rtabmap_msgs__srv__GetNodesInRadius_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rtabmap_msgs__srv__GetNodesInRadius_Request__TYPE_NAME, 41, 41},
      {rtabmap_msgs__srv__GetNodesInRadius_Request__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rtabmap_msgs__srv__GetNodesInRadius_Response__FIELD_NAME__ids[] = "ids";
static char rtabmap_msgs__srv__GetNodesInRadius_Response__FIELD_NAME__poses[] = "poses";
static char rtabmap_msgs__srv__GetNodesInRadius_Response__FIELD_NAME__dists_sqr[] = "dists_sqr";

static rosidl_runtime_c__type_description__Field rtabmap_msgs__srv__GetNodesInRadius_Response__FIELDS[] = {
  {
    {rtabmap_msgs__srv__GetNodesInRadius_Response__FIELD_NAME__ids, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__GetNodesInRadius_Response__FIELD_NAME__poses, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__GetNodesInRadius_Response__FIELD_NAME__dists_sqr, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rtabmap_msgs__srv__GetNodesInRadius_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
};

const rosidl_runtime_c__type_description__TypeDescription *
rtabmap_msgs__srv__GetNodesInRadius_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rtabmap_msgs__srv__GetNodesInRadius_Response__TYPE_NAME, 42, 42},
      {rtabmap_msgs__srv__GetNodesInRadius_Response__FIELDS, 3, 3},
    },
    {rtabmap_msgs__srv__GetNodesInRadius_Response__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rtabmap_msgs__srv__GetNodesInRadius_Event__FIELD_NAME__info[] = "info";
static char rtabmap_msgs__srv__GetNodesInRadius_Event__FIELD_NAME__request[] = "request";
static char rtabmap_msgs__srv__GetNodesInRadius_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field rtabmap_msgs__srv__GetNodesInRadius_Event__FIELDS[] = {
  {
    {rtabmap_msgs__srv__GetNodesInRadius_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__GetNodesInRadius_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rtabmap_msgs__srv__GetNodesInRadius_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__GetNodesInRadius_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rtabmap_msgs__srv__GetNodesInRadius_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rtabmap_msgs__srv__GetNodesInRadius_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {rtabmap_msgs__srv__GetNodesInRadius_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {rtabmap_msgs__srv__GetNodesInRadius_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rtabmap_msgs__srv__GetNodesInRadius_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rtabmap_msgs__srv__GetNodesInRadius_Event__TYPE_NAME, 39, 39},
      {rtabmap_msgs__srv__GetNodesInRadius_Event__FIELDS, 3, 3},
    },
    {rtabmap_msgs__srv__GetNodesInRadius_Event__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
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
    description.referenced_type_descriptions.data[4].fields = rtabmap_msgs__srv__GetNodesInRadius_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = rtabmap_msgs__srv__GetNodesInRadius_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#request\n"
  "\n"
  "# In mapping mode (Mem/IncrementalMemory=true), if target pose \n"
  "#   and node_id are all zeros, poses around the latest node \n"
  "#   in the graph are returned.\n"
  "# In localization mode (Mem/IncrementalMemory=false), if target pose \n"
  "#   and node_id are all zeros, poses around the latest localization \n"
  "#   pose are returned.\n"
  "# If node_id is not zero, target pose is ignored.\n"
  "\n"
  "# Node id\n"
  "int32 node_id\n"
  "\n"
  "# Target pose:\n"
  "float32 x\n"
  "float32 y\n"
  "float32 z\n"
  "\n"
  "# Radius, <=0 means that RGBD/LocalRadius will be used \n"
  "# if k is also 0. If k>0 and a radius of 0 means all nearest \n"
  "# poses up to k.\n"
  "float32 radius\n"
  "\n"
  "# Maximum number of nearest poses\n"
  "int32 k\n"
  "\n"
  "---\n"
  "#response\n"
  "int32[] ids\n"
  "geometry_msgs/Pose[] poses\n"
  "float32[] dists_sqr";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rtabmap_msgs__srv__GetNodesInRadius__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rtabmap_msgs__srv__GetNodesInRadius__TYPE_NAME, 33, 33},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 716, 716},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rtabmap_msgs__srv__GetNodesInRadius_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rtabmap_msgs__srv__GetNodesInRadius_Request__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rtabmap_msgs__srv__GetNodesInRadius_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rtabmap_msgs__srv__GetNodesInRadius_Response__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rtabmap_msgs__srv__GetNodesInRadius_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rtabmap_msgs__srv__GetNodesInRadius_Event__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rtabmap_msgs__srv__GetNodesInRadius__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rtabmap_msgs__srv__GetNodesInRadius__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[5] = *rtabmap_msgs__srv__GetNodesInRadius_Event__get_individual_type_description_source(NULL);
    sources[6] = *rtabmap_msgs__srv__GetNodesInRadius_Request__get_individual_type_description_source(NULL);
    sources[7] = *rtabmap_msgs__srv__GetNodesInRadius_Response__get_individual_type_description_source(NULL);
    sources[8] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rtabmap_msgs__srv__GetNodesInRadius_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rtabmap_msgs__srv__GetNodesInRadius_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rtabmap_msgs__srv__GetNodesInRadius_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rtabmap_msgs__srv__GetNodesInRadius_Response__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rtabmap_msgs__srv__GetNodesInRadius_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rtabmap_msgs__srv__GetNodesInRadius_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[5] = *rtabmap_msgs__srv__GetNodesInRadius_Request__get_individual_type_description_source(NULL);
    sources[6] = *rtabmap_msgs__srv__GetNodesInRadius_Response__get_individual_type_description_source(NULL);
    sources[7] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
