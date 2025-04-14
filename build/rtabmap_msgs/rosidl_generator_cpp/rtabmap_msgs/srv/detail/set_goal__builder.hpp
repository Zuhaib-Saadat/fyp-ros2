// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:srv/SetGoal.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rtabmap_msgs/srv/set_goal.hpp"


#ifndef RTABMAP_MSGS__SRV__DETAIL__SET_GOAL__BUILDER_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__SET_GOAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/srv/detail/set_goal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace srv
{

namespace builder
{

class Init_SetGoal_Request_frame_id
{
public:
  explicit Init_SetGoal_Request_frame_id(::rtabmap_msgs::srv::SetGoal_Request & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::srv::SetGoal_Request frame_id(::rtabmap_msgs::srv::SetGoal_Request::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::srv::SetGoal_Request msg_;
};

class Init_SetGoal_Request_node_label
{
public:
  explicit Init_SetGoal_Request_node_label(::rtabmap_msgs::srv::SetGoal_Request & msg)
  : msg_(msg)
  {}
  Init_SetGoal_Request_frame_id node_label(::rtabmap_msgs::srv::SetGoal_Request::_node_label_type arg)
  {
    msg_.node_label = std::move(arg);
    return Init_SetGoal_Request_frame_id(msg_);
  }

private:
  ::rtabmap_msgs::srv::SetGoal_Request msg_;
};

class Init_SetGoal_Request_node_id
{
public:
  Init_SetGoal_Request_node_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetGoal_Request_node_label node_id(::rtabmap_msgs::srv::SetGoal_Request::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_SetGoal_Request_node_label(msg_);
  }

private:
  ::rtabmap_msgs::srv::SetGoal_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::srv::SetGoal_Request>()
{
  return rtabmap_msgs::srv::builder::Init_SetGoal_Request_node_id();
}

}  // namespace rtabmap_msgs


namespace rtabmap_msgs
{

namespace srv
{

namespace builder
{

class Init_SetGoal_Response_planning_time
{
public:
  explicit Init_SetGoal_Response_planning_time(::rtabmap_msgs::srv::SetGoal_Response & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::srv::SetGoal_Response planning_time(::rtabmap_msgs::srv::SetGoal_Response::_planning_time_type arg)
  {
    msg_.planning_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::srv::SetGoal_Response msg_;
};

class Init_SetGoal_Response_path_poses
{
public:
  explicit Init_SetGoal_Response_path_poses(::rtabmap_msgs::srv::SetGoal_Response & msg)
  : msg_(msg)
  {}
  Init_SetGoal_Response_planning_time path_poses(::rtabmap_msgs::srv::SetGoal_Response::_path_poses_type arg)
  {
    msg_.path_poses = std::move(arg);
    return Init_SetGoal_Response_planning_time(msg_);
  }

private:
  ::rtabmap_msgs::srv::SetGoal_Response msg_;
};

class Init_SetGoal_Response_path_ids
{
public:
  Init_SetGoal_Response_path_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetGoal_Response_path_poses path_ids(::rtabmap_msgs::srv::SetGoal_Response::_path_ids_type arg)
  {
    msg_.path_ids = std::move(arg);
    return Init_SetGoal_Response_path_poses(msg_);
  }

private:
  ::rtabmap_msgs::srv::SetGoal_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::srv::SetGoal_Response>()
{
  return rtabmap_msgs::srv::builder::Init_SetGoal_Response_path_ids();
}

}  // namespace rtabmap_msgs


namespace rtabmap_msgs
{

namespace srv
{

namespace builder
{

class Init_SetGoal_Event_response
{
public:
  explicit Init_SetGoal_Event_response(::rtabmap_msgs::srv::SetGoal_Event & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::srv::SetGoal_Event response(::rtabmap_msgs::srv::SetGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::srv::SetGoal_Event msg_;
};

class Init_SetGoal_Event_request
{
public:
  explicit Init_SetGoal_Event_request(::rtabmap_msgs::srv::SetGoal_Event & msg)
  : msg_(msg)
  {}
  Init_SetGoal_Event_response request(::rtabmap_msgs::srv::SetGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetGoal_Event_response(msg_);
  }

private:
  ::rtabmap_msgs::srv::SetGoal_Event msg_;
};

class Init_SetGoal_Event_info
{
public:
  Init_SetGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetGoal_Event_request info(::rtabmap_msgs::srv::SetGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetGoal_Event_request(msg_);
  }

private:
  ::rtabmap_msgs::srv::SetGoal_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::srv::SetGoal_Event>()
{
  return rtabmap_msgs::srv::builder::Init_SetGoal_Event_info();
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__SRV__DETAIL__SET_GOAL__BUILDER_HPP_
