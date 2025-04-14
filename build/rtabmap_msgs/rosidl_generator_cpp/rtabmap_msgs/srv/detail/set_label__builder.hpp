// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:srv/SetLabel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rtabmap_msgs/srv/set_label.hpp"


#ifndef RTABMAP_MSGS__SRV__DETAIL__SET_LABEL__BUILDER_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__SET_LABEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/srv/detail/set_label__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace srv
{

namespace builder
{

class Init_SetLabel_Request_node_label
{
public:
  explicit Init_SetLabel_Request_node_label(::rtabmap_msgs::srv::SetLabel_Request & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::srv::SetLabel_Request node_label(::rtabmap_msgs::srv::SetLabel_Request::_node_label_type arg)
  {
    msg_.node_label = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::srv::SetLabel_Request msg_;
};

class Init_SetLabel_Request_node_id
{
public:
  Init_SetLabel_Request_node_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLabel_Request_node_label node_id(::rtabmap_msgs::srv::SetLabel_Request::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_SetLabel_Request_node_label(msg_);
  }

private:
  ::rtabmap_msgs::srv::SetLabel_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::srv::SetLabel_Request>()
{
  return rtabmap_msgs::srv::builder::Init_SetLabel_Request_node_id();
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
auto build<::rtabmap_msgs::srv::SetLabel_Response>()
{
  return ::rtabmap_msgs::srv::SetLabel_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rtabmap_msgs


namespace rtabmap_msgs
{

namespace srv
{

namespace builder
{

class Init_SetLabel_Event_response
{
public:
  explicit Init_SetLabel_Event_response(::rtabmap_msgs::srv::SetLabel_Event & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::srv::SetLabel_Event response(::rtabmap_msgs::srv::SetLabel_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::srv::SetLabel_Event msg_;
};

class Init_SetLabel_Event_request
{
public:
  explicit Init_SetLabel_Event_request(::rtabmap_msgs::srv::SetLabel_Event & msg)
  : msg_(msg)
  {}
  Init_SetLabel_Event_response request(::rtabmap_msgs::srv::SetLabel_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetLabel_Event_response(msg_);
  }

private:
  ::rtabmap_msgs::srv::SetLabel_Event msg_;
};

class Init_SetLabel_Event_info
{
public:
  Init_SetLabel_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLabel_Event_request info(::rtabmap_msgs::srv::SetLabel_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetLabel_Event_request(msg_);
  }

private:
  ::rtabmap_msgs::srv::SetLabel_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::srv::SetLabel_Event>()
{
  return rtabmap_msgs::srv::builder::Init_SetLabel_Event_info();
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__SRV__DETAIL__SET_LABEL__BUILDER_HPP_
