// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_msgs:srv/AddLink.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rtabmap_msgs/srv/add_link.hpp"


#ifndef RTABMAP_MSGS__SRV__DETAIL__ADD_LINK__TRAITS_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__ADD_LINK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtabmap_msgs/srv/detail/add_link__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'link'
#include "rtabmap_msgs/msg/detail/link__traits.hpp"

namespace rtabmap_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddLink_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: link
  {
    out << "link: ";
    to_flow_style_yaml(msg.link, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddLink_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: link
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link:\n";
    to_block_style_yaml(msg.link, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddLink_Request & msg, bool use_flow_style = false)
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
  const rtabmap_msgs::srv::AddLink_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtabmap_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtabmap_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rtabmap_msgs::srv::AddLink_Request & msg)
{
  return rtabmap_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rtabmap_msgs::srv::AddLink_Request>()
{
  return "rtabmap_msgs::srv::AddLink_Request";
}

template<>
inline const char * name<rtabmap_msgs::srv::AddLink_Request>()
{
  return "rtabmap_msgs/srv/AddLink_Request";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::AddLink_Request>
  : std::integral_constant<bool, has_fixed_size<rtabmap_msgs::msg::Link>::value> {};

template<>
struct has_bounded_size<rtabmap_msgs::srv::AddLink_Request>
  : std::integral_constant<bool, has_bounded_size<rtabmap_msgs::msg::Link>::value> {};

template<>
struct is_message<rtabmap_msgs::srv::AddLink_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rtabmap_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddLink_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddLink_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddLink_Response & msg, bool use_flow_style = false)
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
  const rtabmap_msgs::srv::AddLink_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtabmap_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtabmap_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rtabmap_msgs::srv::AddLink_Response & msg)
{
  return rtabmap_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rtabmap_msgs::srv::AddLink_Response>()
{
  return "rtabmap_msgs::srv::AddLink_Response";
}

template<>
inline const char * name<rtabmap_msgs::srv::AddLink_Response>()
{
  return "rtabmap_msgs/srv/AddLink_Response";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::AddLink_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rtabmap_msgs::srv::AddLink_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rtabmap_msgs::srv::AddLink_Response>
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
  const AddLink_Event & msg,
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
  const AddLink_Event & msg,
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

inline std::string to_yaml(const AddLink_Event & msg, bool use_flow_style = false)
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
  const rtabmap_msgs::srv::AddLink_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtabmap_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtabmap_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rtabmap_msgs::srv::AddLink_Event & msg)
{
  return rtabmap_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rtabmap_msgs::srv::AddLink_Event>()
{
  return "rtabmap_msgs::srv::AddLink_Event";
}

template<>
inline const char * name<rtabmap_msgs::srv::AddLink_Event>()
{
  return "rtabmap_msgs/srv/AddLink_Event";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::AddLink_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rtabmap_msgs::srv::AddLink_Event>
  : std::integral_constant<bool, has_bounded_size<rtabmap_msgs::srv::AddLink_Request>::value && has_bounded_size<rtabmap_msgs::srv::AddLink_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<rtabmap_msgs::srv::AddLink_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_msgs::srv::AddLink>()
{
  return "rtabmap_msgs::srv::AddLink";
}

template<>
inline const char * name<rtabmap_msgs::srv::AddLink>()
{
  return "rtabmap_msgs/srv/AddLink";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::AddLink>
  : std::integral_constant<
    bool,
    has_fixed_size<rtabmap_msgs::srv::AddLink_Request>::value &&
    has_fixed_size<rtabmap_msgs::srv::AddLink_Response>::value
  >
{
};

template<>
struct has_bounded_size<rtabmap_msgs::srv::AddLink>
  : std::integral_constant<
    bool,
    has_bounded_size<rtabmap_msgs::srv::AddLink_Request>::value &&
    has_bounded_size<rtabmap_msgs::srv::AddLink_Response>::value
  >
{
};

template<>
struct is_service<rtabmap_msgs::srv::AddLink>
  : std::true_type
{
};

template<>
struct is_service_request<rtabmap_msgs::srv::AddLink_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rtabmap_msgs::srv::AddLink_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_MSGS__SRV__DETAIL__ADD_LINK__TRAITS_HPP_
