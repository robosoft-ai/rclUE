// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from visualization_msgs/srv/GetInteractiveMarkers.srv - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "visualization_msgs/srv/get_interactive_markers.h"

// rclUE
#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

#include "Msgs/ROS2IM.h"
#include "visualization_msgs/msg/detail/interactive_marker__functions.h"

// Generated
#include "ROS2GetIMs.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FROSGetIMsReq
{
    GENERATED_BODY()

public:
    FROSGetIMsReq()
    {
    }

    void SetFromROS2(const visualization_msgs__srv__GetInteractiveMarkers_Request& in_ros_data)
    {
    }

    void SetROS2(visualization_msgs__srv__GetInteractiveMarkers_Request& out_ros_data) const
    {
    }
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSGetIMsRes
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere)
    uint64 SequenceNumber = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSIM> Markers;

    FROSGetIMsRes()
    {
    }

    void SetFromROS2(const visualization_msgs__srv__GetInteractiveMarkers_Response& in_ros_data)
    {
        SequenceNumber = in_ros_data.sequence_number;

        UROS2Utils::SequenceROSToUEArray<visualization_msgs__msg__InteractiveMarker, FROSIM>(
            in_ros_data.markers.data, Markers, in_ros_data.markers.size);
    }

    void SetROS2(visualization_msgs__srv__GetInteractiveMarkers_Response& out_ros_data) const
    {
        out_ros_data.sequence_number = SequenceNumber;

        if (out_ros_data.markers.data)
        {
            visualization_msgs__msg__InteractiveMarker__Sequence__fini(&out_ros_data.markers);
        }
        if (!visualization_msgs__msg__InteractiveMarker__Sequence__init(&out_ros_data.markers, Markers.Num()))
        {
            UE_LOG(LogTemp, Error, TEXT("failed to create array for field out_ros_data.markers  "));
        }
        UROS2Utils::ArrayUEToROSSequence<visualization_msgs__msg__InteractiveMarker, FROSIM>(
            Markers, out_ros_data.markers.data, Markers.Num());
    }
};

UCLASS()
class RCLUE_API UROS2GetIMsSrv : public UROS2GenericSrv
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable)
    virtual void Init() override;

    UFUNCTION(BlueprintCallable)
    virtual void Fini() override;

    virtual const rosidl_service_type_support_t* GetTypeSupport() const override;

    // used by client
    UFUNCTION(BlueprintCallable)
    void SetRequest(const FROSGetIMsReq& Request);

    // used by service
    UFUNCTION(BlueprintCallable)
    void GetRequest(FROSGetIMsReq& Request) const;

    // used by service
    UFUNCTION(BlueprintCallable)
    void SetResponse(const FROSGetIMsRes& Response);

    // used by client
    UFUNCTION(BlueprintCallable)
    void GetResponse(FROSGetIMsRes& Response) const;

    virtual void* GetRequest() override;
    virtual void* GetResponse() override;

private:
    virtual FString SrvRequestToString() const override;
    virtual FString SrvResponseToString() const override;

    visualization_msgs__srv__GetInteractiveMarkers_Request GetInteractiveMarkers_req;
    visualization_msgs__srv__GetInteractiveMarkers_Response GetInteractiveMarkers_res;
};