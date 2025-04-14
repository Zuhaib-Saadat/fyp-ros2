// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtabmap_msgs:srv/PublishMap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rtabmap_msgs/srv/publish_map.hpp"


#ifndef RTABMAP_MSGS__SRV__DETAIL__PUBLISH_MAP__STRUCT_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__PUBLISH_MAP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__srv__PublishMap_Request __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__srv__PublishMap_Request __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PublishMap_Request_
{
  using Type = PublishMap_Request_<ContainerAllocator>;

  explicit PublishMap_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->global_map = false;
      this->optimized = false;
      this->graph_only = false;
    }
  }

  explicit PublishMap_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->global_map = false;
      this->optimized = false;
      this->graph_only = false;
    }
  }

  // field types and members
  using _global_map_type =
    bool;
  _global_map_type global_map;
  using _optimized_type =
    bool;
  _optimized_type optimized;
  using _graph_only_type =
    bool;
  _graph_only_type graph_only;

  // setters for named parameter idiom
  Type & set__global_map(
    const bool & _arg)
  {
    this->global_map = _arg;
    return *this;
  }
  Type & set__optimized(
    const bool & _arg)
  {
    this->optimized = _arg;
    return *this;
  }
  Type & set__graph_only(
    const bool & _arg)
  {
    this->graph_only = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::srv::PublishMap_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::srv::PublishMap_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::PublishMap_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::PublishMap_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::PublishMap_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::PublishMap_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::PublishMap_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::PublishMap_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::PublishMap_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::PublishMap_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__srv__PublishMap_Request
    std::shared_ptr<rtabmap_msgs::srv::PublishMap_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__srv__PublishMap_Request
    std::shared_ptr<rtabmap_msgs::srv::PublishMap_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PublishMap_Request_ & other) const
  {
    if (this->global_map != other.global_map) {
      return false;
    }
    if (this->optimized != other.optimized) {
      return false;
    }
    if (this->graph_only != other.graph_only) {
      return false;
    }
    return true;
  }
  bool operator!=(const PublishMap_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PublishMap_Request_

// alias to use template instance with default allocator
using PublishMap_Request =
  rtabmap_msgs::srv::PublishMap_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rtabmap_msgs


#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__srv__PublishMap_Response __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__srv__PublishMap_Response __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PublishMap_Response_
{
  using Type = PublishMap_Response_<ContainerAllocator>;

  explicit PublishMap_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit PublishMap_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::srv::PublishMap_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::srv::PublishMap_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::PublishMap_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::PublishMap_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::PublishMap_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::PublishMap_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::PublishMap_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::PublishMap_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::PublishMap_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::PublishMap_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__srv__PublishMap_Response
    std::shared_ptr<rtabmap_msgs::srv::PublishMap_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__srv__PublishMap_Response
    std::shared_ptr<rtabmap_msgs::srv::PublishMap_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PublishMap_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const PublishMap_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PublishMap_Response_

// alias to use template instance with default allocator
using PublishMap_Response =
  rtabmap_msgs::srv::PublishMap_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rtabmap_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__srv__PublishMap_Event __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__srv__PublishMap_Event __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PublishMap_Event_
{
  using Type = PublishMap_Event_<ContainerAllocator>;

  explicit PublishMap_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit PublishMap_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<rtabmap_msgs::srv::PublishMap_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::srv::PublishMap_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<rtabmap_msgs::srv::PublishMap_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::srv::PublishMap_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<rtabmap_msgs::srv::PublishMap_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::srv::PublishMap_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<rtabmap_msgs::srv::PublishMap_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::srv::PublishMap_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::srv::PublishMap_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::srv::PublishMap_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::PublishMap_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::PublishMap_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::PublishMap_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::PublishMap_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::PublishMap_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::PublishMap_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::PublishMap_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::PublishMap_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__srv__PublishMap_Event
    std::shared_ptr<rtabmap_msgs::srv::PublishMap_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__srv__PublishMap_Event
    std::shared_ptr<rtabmap_msgs::srv::PublishMap_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PublishMap_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const PublishMap_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PublishMap_Event_

// alias to use template instance with default allocator
using PublishMap_Event =
  rtabmap_msgs::srv::PublishMap_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rtabmap_msgs

namespace rtabmap_msgs
{

namespace srv
{

struct PublishMap
{
  using Request = rtabmap_msgs::srv::PublishMap_Request;
  using Response = rtabmap_msgs::srv::PublishMap_Response;
  using Event = rtabmap_msgs::srv::PublishMap_Event;
};

}  // namespace srv

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__SRV__DETAIL__PUBLISH_MAP__STRUCT_HPP_
