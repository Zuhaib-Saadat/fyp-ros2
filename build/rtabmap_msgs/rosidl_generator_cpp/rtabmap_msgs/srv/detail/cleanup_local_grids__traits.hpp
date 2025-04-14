// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_msgs:srv/CleanupLocalGrids.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rtabmap_msgs/srv/cleanup_local_grids.hpp"


#ifndef RTABMAP_MSGS__SRV__DETAIL__CLEANUP_LOCAL_GRIDS__TRAITS_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__CLEANUP_LOCAL_GRIDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtabmap_msgs/srv/detail/cleanup_local_grids__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rtabmap_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CleanupLocalGrids_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: radius
  {
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
    out << ", ";
  }

  // member: filter_scans
  {
    out << "filter_scans: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_scans, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CleanupLocalGrids_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
    out << "\n";
  }

  // member: filter_scans
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filter_scans: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_scans, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CleanupLocalGrids_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rtabmap_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rtabmap_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rtabmap_msgs::srv::CleanupLocalGrids_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtabmap_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtabmap_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rtabmap_msgs::srv::CleanupLocalGrids_Request & msg)
{
  return rtabmap_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rtabmap_msgs::srv::CleanupLocalGrids_Request>()
{
  return "rtabmap_msgs::srv::CleanupLocalGrids_Request";
}

template<>
inline const char * name<rtabmap_msgs::srv::CleanupLocalGrids_Request>()
{
  return "rtabmap_msgs/srv/CleanupLocalGrids_Request";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::CleanupLocalGrids_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rtabmap_msgs::srv::CleanupLocalGrids_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rtabmap_msgs::srv::CleanupLocalGrids_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rtabmap_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CleanupLocalGrids_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: modified
  {
    out << "modified: ";
    rosidl_generator_traits::value_to_yaml(msg.modified, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CleanupLocalGrids_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: modified
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "modified: ";
    rosidl_generator_traits::value_to_yaml(msg.modified, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CleanupLocalGrids_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rtabmap_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rtabmap_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rtabmap_msgs::srv::CleanupLocalGrids_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtabmap_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtabmap_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rtabmap_msgs::srv::CleanupLocalGrids_Response & msg)
{
  return rtabmap_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rtabmap_msgs::srv::CleanupLocalGrids_Response>()
{
  return "rtabmap_msgs::srv::CleanupLocalGrids_Response";
}

template<>
inline const char * name<rtabmap_msgs::srv::CleanupLocalGrids_Response>()
{
  return "rtabmap_msgs/srv/CleanupLocalGrids_Response";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::CleanupLocalGrids_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rtabmap_msgs::srv::CleanupLocalGrids_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rtabmap_msgs::srv::CleanupLocalGrids_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace rtabmap_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CleanupLocalGrids_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CleanupLocalGrids_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CleanupLocalGrids_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rtabmap_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rtabmap_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rtabmap_msgs::srv::CleanupLocalGrids_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtabmap_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtabmap_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rtabmap_msgs::srv::CleanupLocalGrids_Event & msg)
{
  return rtabmap_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rtabmap_msgs::srv::CleanupLocalGrids_Event>()
{
  return "rtabmap_msgs::srv::CleanupLocalGrids_Event";
}

template<>
inline const char * name<rtabmap_msgs::srv::CleanupLocalGrids_Event>()
{
  return "rtabmap_msgs/srv/CleanupLocalGrids_Event";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::CleanupLocalGrids_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rtabmap_msgs::srv::CleanupLocalGrids_Event>
  : std::integral_constant<bool, has_bounded_size<rtabmap_msgs::srv::CleanupLocalGrids_Request>::value && has_bounded_size<rtabmap_msgs::srv::CleanupLocalGrids_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<rtabmap_msgs::srv::CleanupLocalGrids_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_msgs::srv::CleanupLocalGrids>()
{
  return "rtabmap_msgs::srv::CleanupLocalGrids";
}

template<>
inline const char * name<rtabmap_msgs::srv::CleanupLocalGrids>()
{
  return "rtabmap_msgs/srv/CleanupLocalGrids";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::CleanupLocalGrids>
  : std::integral_constant<
    bool,
    has_fixed_size<rtabmap_msgs::srv::CleanupLocalGrids_Request>::value &&
    has_fixed_size<rtabmap_msgs::srv::CleanupLocalGrids_Response>::value
  >
{
};

template<>
struct has_bounded_size<rtabmap_msgs::srv::CleanupLocalGrids>
  : std::integral_constant<
    bool,
    has_bounded_size<rtabmap_msgs::srv::CleanupLocalGrids_Request>::value &&
    has_bounded_size<rtabmap_msgs::srv::CleanupLocalGrids_Response>::value
  >
{
};

template<>
struct is_service<rtabmap_msgs::srv::CleanupLocalGrids>
  : std::true_type
{
};

template<>
struct is_service_request<rtabmap_msgs::srv::CleanupLocalGrids_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rtabmap_msgs::srv::CleanupLocalGrids_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_MSGS__SRV__DETAIL__CLEANUP_LOCAL_GRIDS__TRAITS_HPP_
