// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from message_pkg:msg/ServoValues.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_PKG__MSG__SERVO_VALUES__STRUCT_HPP_
#define MESSAGE_PKG__MSG__SERVO_VALUES__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

#ifndef _WIN32
# define DEPRECATED__message_pkg__msg__ServoValues __attribute__((deprecated))
#else
# define DEPRECATED__message_pkg__msg__ServoValues __declspec(deprecated)
#endif

namespace message_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ServoValues_
{
  using Type = ServoValues_<ContainerAllocator>;

  explicit ServoValues_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int32_t, 6>::iterator, int32_t>(this->servovalue.begin(), this->servovalue.end(), 0l);
    }
  }

  explicit ServoValues_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : servovalue(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int32_t, 6>::iterator, int32_t>(this->servovalue.begin(), this->servovalue.end(), 0l);
    }
  }

  // field types and members
  using _servovalue_type =
    std::array<int32_t, 6>;
  _servovalue_type servovalue;

  // setters for named parameter idiom
  Type & set__servovalue(
    const std::array<int32_t, 6> & _arg)
  {
    this->servovalue = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    message_pkg::msg::ServoValues_<ContainerAllocator> *;
  using ConstRawPtr =
    const message_pkg::msg::ServoValues_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<message_pkg::msg::ServoValues_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<message_pkg::msg::ServoValues_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      message_pkg::msg::ServoValues_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<message_pkg::msg::ServoValues_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      message_pkg::msg::ServoValues_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<message_pkg::msg::ServoValues_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<message_pkg::msg::ServoValues_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<message_pkg::msg::ServoValues_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__message_pkg__msg__ServoValues
    std::shared_ptr<message_pkg::msg::ServoValues_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__message_pkg__msg__ServoValues
    std::shared_ptr<message_pkg::msg::ServoValues_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServoValues_ & other) const
  {
    if (this->servovalue != other.servovalue) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServoValues_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServoValues_

// alias to use template instance with default allocator
using ServoValues =
  message_pkg::msg::ServoValues_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace message_pkg

#endif  // MESSAGE_PKG__MSG__SERVO_VALUES__STRUCT_HPP_
