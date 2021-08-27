// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/LaserScan.msg - do not modify

#pragma once

#include "CoreMinimal.h"

#include "sensor_msgs/msg/laser_scan.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2LaserScanMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSLaserScan
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int header_stamp_sec;

	unsigned int header_stamp_nanosec;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString header_frame_id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float angle_min;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float angle_max;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float angle_increment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float time_increment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float scan_time;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float range_min;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float range_max;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> ranges;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> intensities;

	

	void SetFromROS2(sensor_msgs__msg__LaserScan rosdata)
	{
    	header_stamp_sec = rosdata.header.stamp.sec;

		header_stamp_nanosec = rosdata.header.stamp.nanosec;

		header_frame_id.AppendChars(rosdata.header.frame_id.data, rosdata.header.frame_id.size);

		angle_min = rosdata.angle_min;

		angle_max = rosdata.angle_max;

		angle_increment = rosdata.angle_increment;

		time_increment = rosdata.time_increment;

		scan_time = rosdata.scan_time;

		range_min = rosdata.range_min;

		range_max = rosdata.range_max;

		for (int i = 0; i < rosdata.ranges.size; i++)
		{
			ranges[i] = rosdata.ranges.data[i];
		}

		for (int i = 0; i < rosdata.intensities.size; i++)
		{
			intensities[i] = rosdata.intensities.data[i];
		}

		
	}

	void SetROS2(sensor_msgs__msg__LaserScan& rosdata) const
	{
    	rosdata.header.stamp.sec = header_stamp_sec;

		rosdata.header.stamp.nanosec = header_stamp_nanosec;

		if (rosdata.header.frame_id.data != nullptr)
		{
			free(rosdata.header.frame_id.data);
		}
		rosdata.header.frame_id.data = (char*)malloc((header_frame_id.Len()+1)*sizeof(char));
		memcpy(rosdata.header.frame_id.data, TCHAR_TO_ANSI(*header_frame_id), (header_frame_id.Len()+1)*sizeof(char));
		rosdata.header.frame_id.size = header_frame_id.Len();
		rosdata.header.frame_id.capacity = header_frame_id.Len() + 1;

		rosdata.angle_min = angle_min;

		rosdata.angle_max = angle_max;

		rosdata.angle_increment = angle_increment;

		rosdata.time_increment = time_increment;

		rosdata.scan_time = scan_time;

		rosdata.range_min = range_min;

		rosdata.range_max = range_max;

		for (int i = 0; i < ranges.Num(); i++)
		{
			rosdata.ranges.data[i] = ranges[i];
		}

		for (int i = 0; i < intensities.Num(); i++)
		{
			rosdata.intensities.data[i] = intensities[i];
		}

		
	}
};

UCLASS()
class RCLUE_API UROS2LaserScanMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSLaserScan Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSLaserScan& Output);
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	sensor_msgs__msg__LaserScan laser_scan_msg;
};