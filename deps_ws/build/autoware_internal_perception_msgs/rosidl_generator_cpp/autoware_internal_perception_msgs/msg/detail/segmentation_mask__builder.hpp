// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_internal_perception_msgs:msg/SegmentationMask.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_INTERNAL_PERCEPTION_MSGS__MSG__DETAIL__SEGMENTATION_MASK__BUILDER_HPP_
#define AUTOWARE_INTERNAL_PERCEPTION_MSGS__MSG__DETAIL__SEGMENTATION_MASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_internal_perception_msgs/msg/detail/segmentation_mask__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_internal_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_SegmentationMask_image
{
public:
  explicit Init_SegmentationMask_image(::autoware_internal_perception_msgs::msg::SegmentationMask & msg)
  : msg_(msg)
  {}
  ::autoware_internal_perception_msgs::msg::SegmentationMask image(::autoware_internal_perception_msgs::msg::SegmentationMask::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_internal_perception_msgs::msg::SegmentationMask msg_;
};

class Init_SegmentationMask_classification
{
public:
  explicit Init_SegmentationMask_classification(::autoware_internal_perception_msgs::msg::SegmentationMask & msg)
  : msg_(msg)
  {}
  Init_SegmentationMask_image classification(::autoware_internal_perception_msgs::msg::SegmentationMask::_classification_type arg)
  {
    msg_.classification = std::move(arg);
    return Init_SegmentationMask_image(msg_);
  }

private:
  ::autoware_internal_perception_msgs::msg::SegmentationMask msg_;
};

class Init_SegmentationMask_header
{
public:
  Init_SegmentationMask_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SegmentationMask_classification header(::autoware_internal_perception_msgs::msg::SegmentationMask::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SegmentationMask_classification(msg_);
  }

private:
  ::autoware_internal_perception_msgs::msg::SegmentationMask msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_internal_perception_msgs::msg::SegmentationMask>()
{
  return autoware_internal_perception_msgs::msg::builder::Init_SegmentationMask_header();
}

}  // namespace autoware_internal_perception_msgs

#endif  // AUTOWARE_INTERNAL_PERCEPTION_MSGS__MSG__DETAIL__SEGMENTATION_MASK__BUILDER_HPP_
