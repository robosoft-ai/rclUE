// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/Quaternion.msg - do not modify

#pragma once

#include "CoreMinimal.h"

#include "geometry_msgs/msg/quaternion.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2QuaternionMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSQuaternion
{
	GENERATED_BODY()

public:
	double x;

	double y;

	double z;

	double w;

	

	void SetFromROS2(geometry_msgs__msg__Quaternion rosdata)
	{
    	x = rosdata.x;

		y = rosdata.y;

		z = rosdata.z;

		w = rosdata.w;

		
	}

	void SetROS2(geometry_msgs__msg__Quaternion& rosdata) const
	{
    	rosdata.x = x;

		rosdata.y = y;

		rosdata.z = z;

		rosdata.w = w;

		
	}
};

UCLASS()
class RCLUE_API UROS2QuaternionMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSQuaternion Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSQuaternion& Output);
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	geometry_msgs__msg__Quaternion quaternion_msg;
};