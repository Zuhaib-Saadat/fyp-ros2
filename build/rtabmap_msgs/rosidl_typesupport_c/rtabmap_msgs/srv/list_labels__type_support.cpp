// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from rtabmap_msgs:srv/ListLabels.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rtabmap_msgs/srv/detail/list_labels__struct.h"
#include "rtabmap_msgs/srv/detail/list_labels__type_support.h"
#include "rtabmap_msgs/srv/detail/list_labels__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rtabmap_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ListLabels_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ListLabels_Request_type_support_ids_t;

static const _ListLabels_Request_type_support_ids_t _ListLabels_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ListLabels_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ListLabels_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ListLabels_Request_type_support_symbol_names_t _ListLabels_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, srv, ListLabels_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, srv, ListLabels_Request)),
  }
};

typedef struct _ListLabels_Request_type_support_data_t
{
  void * data[2];
} _ListLabels_Request_type_support_data_t;

static _ListLabels_Request_type_support_data_t _ListLabels_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ListLabels_Request_message_typesupport_map = {
  2,
  "rtabmap_msgs",
  &_ListLabels_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ListLabels_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ListLabels_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ListLabels_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ListLabels_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &rtabmap_msgs__srv__ListLabels_Request__get_type_hash,
  &rtabmap_msgs__srv__ListLabels_Request__get_type_description,
  &rtabmap_msgs__srv__ListLabels_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rtabmap_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rtabmap_msgs, srv, ListLabels_Request)() {
  return &::rtabmap_msgs::srv::rosidl_typesupport_c::ListLabels_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rtabmap_msgs/srv/detail/list_labels__struct.h"
// already included above
// #include "rtabmap_msgs/srv/detail/list_labels__type_support.h"
// already included above
// #include "rtabmap_msgs/srv/detail/list_labels__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rtabmap_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ListLabels_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ListLabels_Response_type_support_ids_t;

static const _ListLabels_Response_type_support_ids_t _ListLabels_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ListLabels_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ListLabels_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ListLabels_Response_type_support_symbol_names_t _ListLabels_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, srv, ListLabels_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, srv, ListLabels_Response)),
  }
};

typedef struct _ListLabels_Response_type_support_data_t
{
  void * data[2];
} _ListLabels_Response_type_support_data_t;

static _ListLabels_Response_type_support_data_t _ListLabels_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ListLabels_Response_message_typesupport_map = {
  2,
  "rtabmap_msgs",
  &_ListLabels_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ListLabels_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ListLabels_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ListLabels_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ListLabels_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &rtabmap_msgs__srv__ListLabels_Response__get_type_hash,
  &rtabmap_msgs__srv__ListLabels_Response__get_type_description,
  &rtabmap_msgs__srv__ListLabels_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rtabmap_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rtabmap_msgs, srv, ListLabels_Response)() {
  return &::rtabmap_msgs::srv::rosidl_typesupport_c::ListLabels_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rtabmap_msgs/srv/detail/list_labels__struct.h"
// already included above
// #include "rtabmap_msgs/srv/detail/list_labels__type_support.h"
// already included above
// #include "rtabmap_msgs/srv/detail/list_labels__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rtabmap_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ListLabels_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ListLabels_Event_type_support_ids_t;

static const _ListLabels_Event_type_support_ids_t _ListLabels_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ListLabels_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ListLabels_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ListLabels_Event_type_support_symbol_names_t _ListLabels_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, srv, ListLabels_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, srv, ListLabels_Event)),
  }
};

typedef struct _ListLabels_Event_type_support_data_t
{
  void * data[2];
} _ListLabels_Event_type_support_data_t;

static _ListLabels_Event_type_support_data_t _ListLabels_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ListLabels_Event_message_typesupport_map = {
  2,
  "rtabmap_msgs",
  &_ListLabels_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ListLabels_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ListLabels_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ListLabels_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ListLabels_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &rtabmap_msgs__srv__ListLabels_Event__get_type_hash,
  &rtabmap_msgs__srv__ListLabels_Event__get_type_description,
  &rtabmap_msgs__srv__ListLabels_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rtabmap_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rtabmap_msgs, srv, ListLabels_Event)() {
  return &::rtabmap_msgs::srv::rosidl_typesupport_c::ListLabels_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rtabmap_msgs/srv/detail/list_labels__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace rtabmap_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _ListLabels_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ListLabels_type_support_ids_t;

static const _ListLabels_type_support_ids_t _ListLabels_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ListLabels_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ListLabels_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ListLabels_type_support_symbol_names_t _ListLabels_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, srv, ListLabels)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, srv, ListLabels)),
  }
};

typedef struct _ListLabels_type_support_data_t
{
  void * data[2];
} _ListLabels_type_support_data_t;

static _ListLabels_type_support_data_t _ListLabels_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ListLabels_service_typesupport_map = {
  2,
  "rtabmap_msgs",
  &_ListLabels_service_typesupport_ids.typesupport_identifier[0],
  &_ListLabels_service_typesupport_symbol_names.symbol_name[0],
  &_ListLabels_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ListLabels_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ListLabels_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ListLabels_Request_message_type_support_handle,
  &ListLabels_Response_message_type_support_handle,
  &ListLabels_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rtabmap_msgs,
    srv,
    ListLabels
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rtabmap_msgs,
    srv,
    ListLabels
  ),
  &rtabmap_msgs__srv__ListLabels__get_type_hash,
  &rtabmap_msgs__srv__ListLabels__get_type_description,
  &rtabmap_msgs__srv__ListLabels__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rtabmap_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, rtabmap_msgs, srv, ListLabels)() {
  return &::rtabmap_msgs::srv::rosidl_typesupport_c::ListLabels_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
