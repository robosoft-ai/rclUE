// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/NavSatFix.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "sensor_msgs/msg/nav_sat_fix.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2NavSatFixMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSNavSatFix
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int header_stamp_sec;

	unsigned int header_stamp_nanosec;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString header_frame_id;

	int8 status_status;

	uint16 status_service;

	double latitude;

	double longitude;

	double altitude;

	TArray<double> position_covariance;

	uint8 position_covariance_type;

	

	void SetFromROS2(const sensor_msgs__msg__NavSatFix& in_ros_data)
	{
    	header_stamp_sec = in_ros_data.header.stamp.sec;

		header_stamp_nanosec = in_ros_data.header.stamp.nanosec;

		header_frame_id.AppendChars(in_ros_data.header.frame_id.data, in_ros_data.header.frame_id.size);

		status_status = in_ros_data.status.status;

		status_service = in_ros_data.status.service;

		latitude = in_ros_data.latitude;

		longitude = in_ros_data.longitude;

		altitude = in_ros_data.altitude;

		for (int i = 0; i < 9; i++)
		{
			position_covariance.Add(in_ros_data.position_covariance[i]);
		}

		position_covariance_type = in_ros_data.position_covariance_type;

		
	}

	void SetROS2(sensor_msgs__msg__NavSatFix& out_ros_data) const
	{
    	out_ros_data.header.stamp.sec = header_stamp_sec;

		out_ros_data.header.stamp.nanosec = header_stamp_nanosec;

		{
			FTCHARToUTF8 strUtf8( *header_frame_id );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.header.frame_id.data != nullptr)
		{
			free(out_ros_data.header.frame_id.data);
		}
		out_ros_data.header.frame_id.data = (decltype(out_ros_data.header.frame_id.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.header.frame_id.data)));
		memcpy(out_ros_data.header.frame_id.data, TCHAR_TO_UTF8(*header_frame_id), (strLength+1)*sizeof(char));
			out_ros_data.header.frame_id.size = strLength;
			out_ros_data.header.frame_id.capacity = strLength + 1;
		}

		out_ros_data.status.status = status_status;

		out_ros_data.status.service = status_service;

		out_ros_data.latitude = latitude;

		out_ros_data.longitude = longitude;

		out_ros_data.altitude = altitude;

		for (int i = 0; i < 9; i++)
		{
			out_ros_data.position_covariance[i] = position_covariance[i];
		}

		out_ros_data.position_covariance_type = position_covariance_type;

		
	}
};

UCLASS()
class RCLUE_API UROS2NavSatFixMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSNavSatFix& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSNavSatFix& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	sensor_msgs__msg__NavSatFix nav_sat_fix_msg;
};