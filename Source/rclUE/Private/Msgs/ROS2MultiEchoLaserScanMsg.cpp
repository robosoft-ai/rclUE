// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/MultiEchoLaserScan.msg - do not modify

#include "Msgs/ROS2MultiEchoLaserScanMsg.h"

#include "Kismet/GameplayStatics.h"

void UROS2MultiEchoLaserScanMsg::Init()
{
	sensor_msgs__msg__MultiEchoLaserScan__init(&multi_echo_laser_scan_msg);
}

void UROS2MultiEchoLaserScanMsg::Fini()
{
	sensor_msgs__msg__MultiEchoLaserScan__fini(&multi_echo_laser_scan_msg);
}

const rosidl_message_type_support_t* UROS2MultiEchoLaserScanMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, MultiEchoLaserScan);
}

void UROS2MultiEchoLaserScanMsg::SetMsg(const FROSMultiEchoLaserScan Inputs)
{
    Inputs.SetROS2(multi_echo_laser_scan_msg);
}

void UROS2MultiEchoLaserScanMsg::GetMsg(FROSMultiEchoLaserScan& Outputs)
{
    Outputs.SetFromROS2(multi_echo_laser_scan_msg);
}

void* UROS2MultiEchoLaserScanMsg::Get()
{
	return &multi_echo_laser_scan_msg;
}

FString UROS2MultiEchoLaserScanMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}