// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from nav_msgs/msg/Path.msg - do not modify

#include "Msgs/ROS2Path.h"

#include "Kismet/GameplayStatics.h"

void UROS2PathMsg::Init()
{
    nav_msgs__msg__Path__init(&path_msg);
}

void UROS2PathMsg::Fini()
{
    nav_msgs__msg__Path__fini(&path_msg);
}

const rosidl_message_type_support_t* UROS2PathMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(nav_msgs, msg, Path);
}

void UROS2PathMsg::SetMsg(const FROSPath& Inputs)
{
    Inputs.SetROS2(path_msg);
}

void UROS2PathMsg::GetMsg(FROSPath& Outputs) const
{
    Outputs.SetFromROS2(path_msg);
}

void* UROS2PathMsg::Get()
{
    return &path_msg;
}

FString UROS2PathMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}