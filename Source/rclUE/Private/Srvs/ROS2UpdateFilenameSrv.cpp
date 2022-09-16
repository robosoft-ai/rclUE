// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from pcl_msgs/srv/UpdateFilename.srv - do not modify

#include "Srvs/ROS2UpdateFilenameSrv.h"

const rosidl_service_type_support_t* UROS2UpdateFilenameSrv::GetTypeSupport() const
{
    return ROSIDL_GET_SRV_TYPE_SUPPORT(pcl_msgs, srv, UpdateFilename);
}

void UROS2UpdateFilenameSrv::Init()
{
    pcl_msgs__srv__UpdateFilename_Request__init(&UpdateFilename_req);
    pcl_msgs__srv__UpdateFilename_Response__init(&UpdateFilename_res);
}

void UROS2UpdateFilenameSrv::Fini()
{
    pcl_msgs__srv__UpdateFilename_Request__fini(&UpdateFilename_req);
    pcl_msgs__srv__UpdateFilename_Response__fini(&UpdateFilename_res);
}

void UROS2UpdateFilenameSrv::SetRequest(const FROSUpdateFilenameRequest& Request)
{
    Request.SetROS2(UpdateFilename_req);
}

void UROS2UpdateFilenameSrv::GetRequest(FROSUpdateFilenameRequest& Request) const
{
    Request.SetFromROS2(UpdateFilename_req);
}

void UROS2UpdateFilenameSrv::SetResponse(const FROSUpdateFilenameResponse& Response)
{
    Response.SetROS2(UpdateFilename_res);
}

void UROS2UpdateFilenameSrv::GetResponse(FROSUpdateFilenameResponse& Response) const
{
    Response.SetFromROS2(UpdateFilename_res);
}

void* UROS2UpdateFilenameSrv::GetRequest()
{
    return &UpdateFilename_req;
}

void* UROS2UpdateFilenameSrv::GetResponse()
{
    return &UpdateFilename_res;
}

FString UROS2UpdateFilenameSrv::SrvRequestToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
    return FString();
}

FString UROS2UpdateFilenameSrv::SrvResponseToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
    return FString();
}