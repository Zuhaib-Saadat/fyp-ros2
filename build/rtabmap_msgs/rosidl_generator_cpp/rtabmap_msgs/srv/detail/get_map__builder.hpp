// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:srv/GetMap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rtabmap_msgs/srv/get_map.hpp"


#ifndef RTABMAP_MSGS__SRV__DETAIL__GET_MAP__BUILDER_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__GET_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/srv/detail/get_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace srv
{

namespace builder
{

class Init_GetMap_Request_graph_only
{
public:
  explicit Init_GetMap_Request_graph_only(::rtabmap_msgs::srv::GetMap_Request & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::srv::GetMap_Request graph_only(::rtabmap_msgs::srv::GetMap_Request::_graph_only_type arg)
  {
    msg_.graph_only = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::srv::GetMap_Request msg_;
};

class Init_GetMap_Request_optimized
{
public:
  explicit Init_GetMap_Request_optimized(::rtabmap_msgs::srv::GetMap_Request & msg)
  : msg_(msg)
  {}
  Init_GetMap_Request_graph_only optimized(::rtabmap_msgs::srv::GetMap_Request::_optimized_type arg)
  {
    msg_.optimized = std::move(arg);
    return Init_GetMap_Request_graph_only(msg_);
  }

private:
  ::rtabmap_msgs::srv::GetMap_Request msg_;
};

class Init_GetMap_Request_global_map
{
public:
  Init_GetMap_Request_global_map()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetMap_Request_optimized global_map(::rtabmap_msgs::srv::GetMap_Request::_global_map_type arg)
  {
    msg_.global_map = std::move(arg);
    return Init_GetMap_Request_optimized(msg_);
  }

private:
  ::rtabmap_msgs::srv::GetMap_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::srv::GetMap_Request>()
{
  return rtabmap_msgs::srv::builder::Init_GetMap_Request_global_map();
}

}  // namespace rtabmap_msgs


namespace rtabmap_msgs
{

namespace srv
{

namespace builder
{

class Init_GetMap_Response_data
{
public:
  Init_GetMap_Response_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rtabmap_msgs::srv::GetMap_Response data(::rtabmap_msgs::srv::GetMap_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::srv::GetMap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::srv::GetMap_Response>()
{
  return rtabmap_msgs::srv::builder::Init_GetMap_Response_data();
}

}  // namespace rtabmap_msgs


namespace rtabmap_msgs
{

namespace srv
{

namespace builder
{

class Init_GetMap_Event_response
{
public:
  explicit Init_GetMap_Event_response(::rtabmap_msgs::srv::GetMap_Event & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::srv::GetMap_Event response(::rtabmap_msgs::srv::GetMap_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::srv::GetMap_Event msg_;
};

class Init_GetMap_Event_request
{
public:
  explicit Init_GetMap_Event_request(::rtabmap_msgs::srv::GetMap_Event & msg)
  : msg_(msg)
  {}
  Init_GetMap_Event_response request(::rtabmap_msgs::srv::GetMap_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetMap_Event_response(msg_);
  }

private:
  ::rtabmap_msgs::srv::GetMap_Event msg_;
};

class Init_GetMap_Event_info
{
public:
  Init_GetMap_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetMap_Event_request info(::rtabmap_msgs::srv::GetMap_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetMap_Event_request(msg_);
  }

private:
  ::rtabmap_msgs::srv::GetMap_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::srv::GetMap_Event>()
{
  return rtabmap_msgs::srv::builder::Init_GetMap_Event_info();
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__SRV__DETAIL__GET_MAP__BUILDER_HPP_
