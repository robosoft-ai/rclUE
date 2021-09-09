// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/LaserEcho.msg - do not modify

#include "Msgs/ROS2LaserEchoMsg.h"

#include "Kismet/GameplayStatics.h"

void UROS2LaserEchoMsg::Init()
{
	sensor_msgs__msg__LaserEcho__init(&laser_echo_msg);
}

void UROS2LaserEchoMsg::Fini()
{
	sensor_msgs__msg__LaserEcho__fini(&laser_echo_msg);
}

const rosidl_message_type_support_t* UROS2LaserEchoMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, LaserEcho);
}

void UROS2LaserEchoMsg::SetMsg(const FROSLaserEcho& Inputs)
{
    Inputs.SetROS2(laser_echo_msg);
}

void UROS2LaserEchoMsg::GetMsg(FROSLaserEcho& Outputs) const
{
    Outputs.SetFromROS2(laser_echo_msg);
}

void* UROS2LaserEchoMsg::Get()
{
	return &laser_echo_msg;
}

FString UROS2LaserEchoMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}