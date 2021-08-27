// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/Range.msg - do not modify

#include "Msgs/ROS2RangeMsg.h"

#include "Kismet/GameplayStatics.h"

void UROS2RangeMsg::Init()
{
	sensor_msgs__msg__Range__init(&range_msg);
}

void UROS2RangeMsg::Fini()
{
	sensor_msgs__msg__Range__fini(&range_msg);
}

const rosidl_message_type_support_t* UROS2RangeMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, Range);
}

void UROS2RangeMsg::SetMsg(const FROSRange Inputs)
{
    Inputs.SetROS2(range_msg);
}

void UROS2RangeMsg::GetMsg(FROSRange& Outputs)
{
    Outputs.SetFromROS2(range_msg);
}

void* UROS2RangeMsg::Get()
{
	return &range_msg;
}

FString UROS2RangeMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}