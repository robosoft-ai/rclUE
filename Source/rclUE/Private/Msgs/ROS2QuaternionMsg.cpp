// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/Quaternion.msg - do not modify

#include "Msgs/ROS2QuaternionMsg.h"

#include "Kismet/GameplayStatics.h"

void UROS2QuaternionMsg::Init()
{
	geometry_msgs__msg__Quaternion__init(&quaternion_msg);
}

void UROS2QuaternionMsg::Fini()
{
	geometry_msgs__msg__Quaternion__fini(&quaternion_msg);
}

const rosidl_message_type_support_t* UROS2QuaternionMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Quaternion);
}

void UROS2QuaternionMsg::SetMsg(const FROSQuaternion Inputs)
{
    Inputs.SetROS2(quaternion_msg);
}

void UROS2QuaternionMsg::GetMsg(FROSQuaternion& Outputs)
{
    Outputs.SetFromROS2(quaternion_msg);
}

void* UROS2QuaternionMsg::Get()
{
	return &quaternion_msg;
}

FString UROS2QuaternionMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}