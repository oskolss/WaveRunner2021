// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from message_pkg:msg/MecanumInput.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_PKG__MSG__MECANUM_INPUT__STRUCT_HPP_
#define MESSAGE_PKG__MSG__MECANUM_INPUT__STRUCT_HPP_

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
# define DEPRECATED__message_pkg__msg__MecanumInput __attribute__((deprecated))
#else
# define DEPRECATED__message_pkg__msg__MecanumInput __declspec(deprecated)
#endif

namespace message_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MecanumInput_
{
  using Type = MecanumInput_<ContainerAllocator>;

  explicit MecanumInput_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 3>::iterator, double>(this->inputvalue.begin(), this->inputvalue.end(), 0.0);
    }
  }

  explicit MecanumInput_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : inputvalue(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 3>::iterator, double>(this->inputvalue.begin(), this->inputvalue.end(), 0.0);
    }
  }

  // field types and members
  using _inputvalue_type =
    std::array<double, 3>;
  _inputvalue_type inputvalue;

  // setters for named parameter idiom
  Type & set__inputvalue(
    const std::array<double, 3> & _arg)
  {
    this->inputvalue = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    message_pkg::msg::MecanumInput_<ContainerAllocator> *;
  using ConstRawPtr =
    const message_pkg::msg::MecanumInput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<message_pkg::msg::MecanumInput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<message_pkg::msg::MecanumInput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      message_pkg::msg::MecanumInput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<message_pkg::msg::MecanumInput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      message_pkg::msg::MecanumInput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<message_pkg::msg::MecanumInput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<message_pkg::msg::MecanumInput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<message_pkg::msg::MecanumInput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__message_pkg__msg__MecanumInput
    std::shared_ptr<message_pkg::msg::MecanumInput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__message_pkg__msg__MecanumInput
    std::shared_ptr<message_pkg::msg::MecanumInput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MecanumInput_ & other) const
  {
    if (this->inputvalue != other.inputvalue) {
      return false;
    }
    return true;
  }
  bool operator!=(const MecanumInput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MecanumInput_

// alias to use template instance with default allocator
using MecanumInput =
  message_pkg::msg::MecanumInput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace message_pkg

#endif  // MESSAGE_PKG__MSG__MECANUM_INPUT__STRUCT_HPP_
