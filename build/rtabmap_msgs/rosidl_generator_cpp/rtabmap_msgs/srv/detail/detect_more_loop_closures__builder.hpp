// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:srv/DetectMoreLoopClosures.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rtabmap_msgs/srv/detect_more_loop_closures.hpp"


#ifndef RTABMAP_MSGS__SRV__DETAIL__DETECT_MORE_LOOP_CLOSURES__BUILDER_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__DETECT_MORE_LOOP_CLOSURES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/srv/detail/detect_more_loop_closures__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace srv
{

namespace builder
{

class Init_DetectMoreLoopClosures_Request_inter_only
{
public:
  explicit Init_DetectMoreLoopClosures_Request_inter_only(::rtabmap_msgs::srv::DetectMoreLoopClosures_Request & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::srv::DetectMoreLoopClosures_Request inter_only(::rtabmap_msgs::srv::DetectMoreLoopClosures_Request::_inter_only_type arg)
  {
    msg_.inter_only = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::srv::DetectMoreLoopClosures_Request msg_;
};

class Init_DetectMoreLoopClosures_Request_intra_only
{
public:
  explicit Init_DetectMoreLoopClosures_Request_intra_only(::rtabmap_msgs::srv::DetectMoreLoopClosures_Request & msg)
  : msg_(msg)
  {}
  Init_DetectMoreLoopClosures_Request_inter_only intra_only(::rtabmap_msgs::srv::DetectMoreLoopClosures_Request::_intra_only_type arg)
  {
    msg_.intra_only = std::move(arg);
    return Init_DetectMoreLoopClosures_Request_inter_only(msg_);
  }

private:
  ::rtabmap_msgs::srv::DetectMoreLoopClosures_Request msg_;
};

class Init_DetectMoreLoopClosures_Request_iterations
{
public:
  explicit Init_DetectMoreLoopClosures_Request_iterations(::rtabmap_msgs::srv::DetectMoreLoopClosures_Request & msg)
  : msg_(msg)
  {}
  Init_DetectMoreLoopClosures_Request_intra_only iterations(::rtabmap_msgs::srv::DetectMoreLoopClosures_Request::_iterations_type arg)
  {
    msg_.iterations = std::move(arg);
    return Init_DetectMoreLoopClosures_Request_intra_only(msg_);
  }

private:
  ::rtabmap_msgs::srv::DetectMoreLoopClosures_Request msg_;
};

class Init_DetectMoreLoopClosures_Request_cluster_angle
{
public:
  explicit Init_DetectMoreLoopClosures_Request_cluster_angle(::rtabmap_msgs::srv::DetectMoreLoopClosures_Request & msg)
  : msg_(msg)
  {}
  Init_DetectMoreLoopClosures_Request_iterations cluster_angle(::rtabmap_msgs::srv::DetectMoreLoopClosures_Request::_cluster_angle_type arg)
  {
    msg_.cluster_angle = std::move(arg);
    return Init_DetectMoreLoopClosures_Request_iterations(msg_);
  }

private:
  ::rtabmap_msgs::srv::DetectMoreLoopClosures_Request msg_;
};

class Init_DetectMoreLoopClosures_Request_cluster_radius_min
{
public:
  explicit Init_DetectMoreLoopClosures_Request_cluster_radius_min(::rtabmap_msgs::srv::DetectMoreLoopClosures_Request & msg)
  : msg_(msg)
  {}
  Init_DetectMoreLoopClosures_Request_cluster_angle cluster_radius_min(::rtabmap_msgs::srv::DetectMoreLoopClosures_Request::_cluster_radius_min_type arg)
  {
    msg_.cluster_radius_min = std::move(arg);
    return Init_DetectMoreLoopClosures_Request_cluster_angle(msg_);
  }

private:
  ::rtabmap_msgs::srv::DetectMoreLoopClosures_Request msg_;
};

class Init_DetectMoreLoopClosures_Request_cluster_radius_max
{
public:
  Init_DetectMoreLoopClosures_Request_cluster_radius_max()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectMoreLoopClosures_Request_cluster_radius_min cluster_radius_max(::rtabmap_msgs::srv::DetectMoreLoopClosures_Request::_cluster_radius_max_type arg)
  {
    msg_.cluster_radius_max = std::move(arg);
    return Init_DetectMoreLoopClosures_Request_cluster_radius_min(msg_);
  }

private:
  ::rtabmap_msgs::srv::DetectMoreLoopClosures_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::srv::DetectMoreLoopClosures_Request>()
{
  return rtabmap_msgs::srv::builder::Init_DetectMoreLoopClosures_Request_cluster_radius_max();
}

}  // namespace rtabmap_msgs


namespace rtabmap_msgs
{

namespace srv
{

namespace builder
{

class Init_DetectMoreLoopClosures_Response_detected
{
public:
  Init_DetectMoreLoopClosures_Response_detected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rtabmap_msgs::srv::DetectMoreLoopClosures_Response detected(::rtabmap_msgs::srv::DetectMoreLoopClosures_Response::_detected_type arg)
  {
    msg_.detected = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::srv::DetectMoreLoopClosures_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::srv::DetectMoreLoopClosures_Response>()
{
  return rtabmap_msgs::srv::builder::Init_DetectMoreLoopClosures_Response_detected();
}

}  // namespace rtabmap_msgs


namespace rtabmap_msgs
{

namespace srv
{

namespace builder
{

class Init_DetectMoreLoopClosures_Event_response
{
public:
  explicit Init_DetectMoreLoopClosures_Event_response(::rtabmap_msgs::srv::DetectMoreLoopClosures_Event & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::srv::DetectMoreLoopClosures_Event response(::rtabmap_msgs::srv::DetectMoreLoopClosures_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::srv::DetectMoreLoopClosures_Event msg_;
};

class Init_DetectMoreLoopClosures_Event_request
{
public:
  explicit Init_DetectMoreLoopClosures_Event_request(::rtabmap_msgs::srv::DetectMoreLoopClosures_Event & msg)
  : msg_(msg)
  {}
  Init_DetectMoreLoopClosures_Event_response request(::rtabmap_msgs::srv::DetectMoreLoopClosures_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DetectMoreLoopClosures_Event_response(msg_);
  }

private:
  ::rtabmap_msgs::srv::DetectMoreLoopClosures_Event msg_;
};

class Init_DetectMoreLoopClosures_Event_info
{
public:
  Init_DetectMoreLoopClosures_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectMoreLoopClosures_Event_request info(::rtabmap_msgs::srv::DetectMoreLoopClosures_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DetectMoreLoopClosures_Event_request(msg_);
  }

private:
  ::rtabmap_msgs::srv::DetectMoreLoopClosures_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::srv::DetectMoreLoopClosures_Event>()
{
  return rtabmap_msgs::srv::builder::Init_DetectMoreLoopClosures_Event_info();
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__SRV__DETAIL__DETECT_MORE_LOOP_CLOSURES__BUILDER_HPP_
