// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_internal_perception_msgs:msg/SegmentationMask.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PERCEPTION_MSGS__MSG__DETAIL__SEGMENTATION_MASK__TRAITS_HPP_
#define AUTOWARE_INTERNAL_PERCEPTION_MSGS__MSG__DETAIL__SEGMENTATION_MASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_internal_perception_msgs/msg/detail/segmentation_mask__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'classification'
#include "autoware_perception_msgs/msg/detail/object_classification__traits.hpp"
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace autoware_internal_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SegmentationMask & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: classification
  {
    if (msg.classification.size() == 0) {
      out << "classification: []";
    } else {
      out << "classification: [";
      size_t pending_items = msg.classification.size();
      for (auto item : msg.classification) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SegmentationMask & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: classification
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.classification.size() == 0) {
      out << "classification: []\n";
    } else {
      out << "classification:\n";
      for (auto item : msg.classification) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image:\n";
    to_block_style_yaml(msg.image, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SegmentationMask & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace autoware_internal_perception_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_internal_perception_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_internal_perception_msgs::msg::SegmentationMask & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_internal_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_internal_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_internal_perception_msgs::msg::SegmentationMask & msg)
{
  return autoware_internal_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_internal_perception_msgs::msg::SegmentationMask>()
{
  return "autoware_internal_perception_msgs::msg::SegmentationMask";
}

template<>
inline const char * name<autoware_internal_perception_msgs::msg::SegmentationMask>()
{
  return "autoware_internal_perception_msgs/msg/SegmentationMask";
}

template<>
struct has_fixed_size<autoware_internal_perception_msgs::msg::SegmentationMask>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_internal_perception_msgs::msg::SegmentationMask>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_internal_perception_msgs::msg::SegmentationMask>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_INTERNAL_PERCEPTION_MSGS__MSG__DETAIL__SEGMENTATION_MASK__TRAITS_HPP_
