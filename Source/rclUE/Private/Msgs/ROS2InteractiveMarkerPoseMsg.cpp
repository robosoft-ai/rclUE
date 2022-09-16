// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from visualization_msgs/msg/InteractiveMarkerPose.msg - do not modify

#include "Msgs/ROS2InteractiveMarkerPoseMsg.h"

#include "Kismet/GameplayStatics.h"

void UROS2InteractiveMarkerPoseMsg::Init()
{
	visualization_msgs__msg__InteractiveMarkerPose__init(&interactive_marker_pose_msg);
}

void UROS2InteractiveMarkerPoseMsg::Fini()
{
	visualization_msgs__msg__InteractiveMarkerPose__fini(&interactive_marker_pose_msg);
}

const rosidl_message_type_support_t* UROS2InteractiveMarkerPoseMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(visualization_msgs, msg, InteractiveMarkerPose);
}

void UROS2InteractiveMarkerPoseMsg::SetMsg(const FROSInteractiveMarkerPose& Inputs)
{
    Inputs.SetROS2(interactive_marker_pose_msg);
}

void UROS2InteractiveMarkerPoseMsg::GetMsg(FROSInteractiveMarkerPose& Outputs) const
{
    Outputs.SetFromROS2(interactive_marker_pose_msg);
}

void* UROS2InteractiveMarkerPoseMsg::Get()
{
	return &interactive_marker_pose_msg;
}

FString UROS2InteractiveMarkerPoseMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}