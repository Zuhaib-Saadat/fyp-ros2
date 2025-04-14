// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:srv/AddLink.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rtabmap_msgs/srv/add_link.hpp"


#ifndef RTABMAP_MSGS__SRV__DETAIL__ADD_LINK__BUILDER_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__ADD_LINK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/srv/detail/add_link__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace srv
{

namespace builder
{

class Init_AddLink_Request_link
{
public:
  Init_AddLink_Request_link()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rtabmap_msgs::srv::AddLink_Request link(::rtabmap_msgs::srv::AddLink_Request::_link_type arg)
  {
    msg_.link = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::srv::AddLink_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::srv::AddLink_Request>()
{
  return rtabmap_msgs::srv::builder::Init_AddLink_Request_link();
}

}  // namespace rtabmap_msgs


namespace rtabmap_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::srv::AddLink_Response>()
{
  return ::rtabmap_msgs::srv::AddLink_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rtabmap_msgs


namespace rtabmap_msgs
{

namespace srv
{

namespace builder
{

class Init_AddLink_Event_response
{
public:
  explicit Init_AddLink_Event_response(::rtabmap_msgs::srv::AddLink_Event & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::srv::AddLink_Event response(::rtabmap_msgs::srv::AddLink_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::srv::AddLink_Event msg_;
};

class Init_AddLink_Event_request
{
public:
  explicit Init_AddLink_Event_request(::rtabmap_msgs::srv::AddLink_Event & msg)
  : msg_(msg)
  {}
  Init_AddLink_Event_response request(::rtabmap_msgs::srv::AddLink_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_AddLink_Event_response(msg_);
  }

private:
  ::rtabmap_msgs::srv::AddLink_Event msg_;
};

class Init_AddLink_Event_info
{
public:
  Init_AddLink_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddLink_Event_request info(::rtabmap_msgs::srv::AddLink_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_AddLink_Event_request(msg_);
  }

private:
  ::rtabmap_msgs::srv::AddLink_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::srv::AddLink_Event>()
{
  return rtabmap_msgs::srv::builder::Init_AddLink_Event_info();
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__SRV__DETAIL__ADD_LINK__BUILDER_HPP_
