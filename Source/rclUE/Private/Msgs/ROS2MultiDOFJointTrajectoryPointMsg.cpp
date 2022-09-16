// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from trajectory_msgs/msg/MultiDOFJointTrajectoryPoint.msg - do not modify

#include "Msgs/ROS2MultiDOFJointTrajectoryPointMsg.h"

#include "Kismet/GameplayStatics.h"

void UROS2MultiDOFJointTrajectoryPointMsg::Init()
{
	trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__init(&multi_dof_joint_trajectory_point_msg);
}

void UROS2MultiDOFJointTrajectoryPointMsg::Fini()
{
	trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__fini(&multi_dof_joint_trajectory_point_msg);
}

const rosidl_message_type_support_t* UROS2MultiDOFJointTrajectoryPointMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(trajectory_msgs, msg, MultiDOFJointTrajectoryPoint);
}

void UROS2MultiDOFJointTrajectoryPointMsg::SetMsg(const FROSMultiDOFJointTrajectoryPoint& Inputs)
{
    Inputs.SetROS2(multi_dof_joint_trajectory_point_msg);
}

void UROS2MultiDOFJointTrajectoryPointMsg::GetMsg(FROSMultiDOFJointTrajectoryPoint& Outputs) const
{
    Outputs.SetFromROS2(multi_dof_joint_trajectory_point_msg);
}

void* UROS2MultiDOFJointTrajectoryPointMsg::Get()
{
	return &multi_dof_joint_trajectory_point_msg;
}

FString UROS2MultiDOFJointTrajectoryPointMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}