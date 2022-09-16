// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from visualization_msgs/msg/InteractiveMarkerInit.msg - do not modify

#include "Msgs/ROS2InteractiveMarkerInitMsg.h"

#include "Kismet/GameplayStatics.h"

void UROS2InteractiveMarkerInitMsg::Init()
{
	visualization_msgs__msg__InteractiveMarkerInit__init(&interactive_marker_init_msg);
}

void UROS2InteractiveMarkerInitMsg::Fini()
{
	visualization_msgs__msg__InteractiveMarkerInit__fini(&interactive_marker_init_msg);
}

const rosidl_message_type_support_t* UROS2InteractiveMarkerInitMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(visualization_msgs, msg, InteractiveMarkerInit);
}

void UROS2InteractiveMarkerInitMsg::SetMsg(const FROSInteractiveMarkerInit& Inputs)
{
    Inputs.SetROS2(interactive_marker_init_msg);
}

void UROS2InteractiveMarkerInitMsg::GetMsg(FROSInteractiveMarkerInit& Outputs) const
{
    Outputs.SetFromROS2(interactive_marker_init_msg);
}

void* UROS2InteractiveMarkerInitMsg::Get()
{
	return &interactive_marker_init_msg;
}

FString UROS2InteractiveMarkerInitMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}