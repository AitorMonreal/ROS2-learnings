// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtlesim:srv/TeleportAbsolute.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__SRV__TELEPORT_ABSOLUTE__STRUCT_HPP_
#define TURTLESIM__SRV__TELEPORT_ABSOLUTE__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__turtlesim__srv__TeleportAbsolute_Request __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim__srv__TeleportAbsolute_Request __declspec(deprecated)
#endif

namespace turtlesim
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TeleportAbsolute_Request_
{
  using Type = TeleportAbsolute_Request_<ContainerAllocator>;

  explicit TeleportAbsolute_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->theta = 0.0f;
    }
  }

  explicit TeleportAbsolute_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->theta = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _theta_type =
    float;
  _theta_type theta;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__theta(
    const float & _arg)
  {
    this->theta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim::srv::TeleportAbsolute_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim::srv::TeleportAbsolute_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim::srv::TeleportAbsolute_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim::srv::TeleportAbsolute_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim::srv::TeleportAbsolute_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim::srv::TeleportAbsolute_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim::srv::TeleportAbsolute_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim::srv::TeleportAbsolute_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim::srv::TeleportAbsolute_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim::srv::TeleportAbsolute_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim__srv__TeleportAbsolute_Request
    std::shared_ptr<turtlesim::srv::TeleportAbsolute_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim__srv__TeleportAbsolute_Request
    std::shared_ptr<turtlesim::srv::TeleportAbsolute_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TeleportAbsolute_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    return true;
  }
  bool operator!=(const TeleportAbsolute_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TeleportAbsolute_Request_

// alias to use template instance with default allocator
using TeleportAbsolute_Request =
  turtlesim::srv::TeleportAbsolute_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtlesim


#ifndef _WIN32
# define DEPRECATED__turtlesim__srv__TeleportAbsolute_Response __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim__srv__TeleportAbsolute_Response __declspec(deprecated)
#endif

namespace turtlesim
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TeleportAbsolute_Response_
{
  using Type = TeleportAbsolute_Response_<ContainerAllocator>;

  explicit TeleportAbsolute_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit TeleportAbsolute_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;

  // setters for named parameter idiom
  Type & set__structure_needs_at_least_one_member(
    const uint8_t & _arg)
  {
    this->structure_needs_at_least_one_member = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim::srv::TeleportAbsolute_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim::srv::TeleportAbsolute_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim::srv::TeleportAbsolute_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim::srv::TeleportAbsolute_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim::srv::TeleportAbsolute_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim::srv::TeleportAbsolute_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim::srv::TeleportAbsolute_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim::srv::TeleportAbsolute_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim::srv::TeleportAbsolute_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim::srv::TeleportAbsolute_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim__srv__TeleportAbsolute_Response
    std::shared_ptr<turtlesim::srv::TeleportAbsolute_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim__srv__TeleportAbsolute_Response
    std::shared_ptr<turtlesim::srv::TeleportAbsolute_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TeleportAbsolute_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const TeleportAbsolute_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TeleportAbsolute_Response_

// alias to use template instance with default allocator
using TeleportAbsolute_Response =
  turtlesim::srv::TeleportAbsolute_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtlesim

namespace turtlesim
{

namespace srv
{

struct TeleportAbsolute
{
  using Request = turtlesim::srv::TeleportAbsolute_Request;
  using Response = turtlesim::srv::TeleportAbsolute_Response;
};

}  // namespace srv

}  // namespace turtlesim

#endif  // TURTLESIM__SRV__TELEPORT_ABSOLUTE__STRUCT_HPP_
