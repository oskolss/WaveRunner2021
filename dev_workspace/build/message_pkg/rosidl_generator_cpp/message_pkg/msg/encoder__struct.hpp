// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from message_pkg:msg/Encoder.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_PKG__MSG__ENCODER__STRUCT_HPP_
#define MESSAGE_PKG__MSG__ENCODER__STRUCT_HPP_

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
# define DEPRECATED__message_pkg__msg__Encoder __attribute__((deprecated))
#else
# define DEPRECATED__message_pkg__msg__Encoder __declspec(deprecated)
#endif

namespace message_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Encoder_
{
  using Type = Encoder_<ContainerAllocator>;

  explicit Encoder_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int32_t, 4>::iterator, int32_t>(this->encodervalue.begin(), this->encodervalue.end(), 0l);
    }
  }

  explicit Encoder_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : encodervalue(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int32_t, 4>::iterator, int32_t>(this->encodervalue.begin(), this->encodervalue.end(), 0l);
    }
  }

  // field types and members
  using _encodervalue_type =
    std::array<int32_t, 4>;
  _encodervalue_type encodervalue;

  // setters for named parameter idiom
  Type & set__encodervalue(
    const std::array<int32_t, 4> & _arg)
  {
    this->encodervalue = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    message_pkg::msg::Encoder_<ContainerAllocator> *;
  using ConstRawPtr =
    const message_pkg::msg::Encoder_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<message_pkg::msg::Encoder_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<message_pkg::msg::Encoder_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      message_pkg::msg::Encoder_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<message_pkg::msg::Encoder_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      message_pkg::msg::Encoder_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<message_pkg::msg::Encoder_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<message_pkg::msg::Encoder_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<message_pkg::msg::Encoder_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__message_pkg__msg__Encoder
    std::shared_ptr<message_pkg::msg::Encoder_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__message_pkg__msg__Encoder
    std::shared_ptr<message_pkg::msg::Encoder_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Encoder_ & other) const
  {
    if (this->encodervalue != other.encodervalue) {
      return false;
    }
    return true;
  }
  bool operator!=(const Encoder_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Encoder_

// alias to use template instance with default allocator
using Encoder =
  message_pkg::msg::Encoder_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace message_pkg

#endif  // MESSAGE_PKG__MSG__ENCODER__STRUCT_HPP_
