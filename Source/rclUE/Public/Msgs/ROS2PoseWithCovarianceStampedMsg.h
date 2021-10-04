// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/PoseWithCovarianceStamped.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "geometry_msgs/msg/pose_with_covariance_stamped.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2PoseWithCovarianceStampedMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSPoseWithCovarianceStamped
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int header_stamp_sec;

	unsigned int header_stamp_nanosec;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString header_frame_id;

	double pose_pose_position_x;

	double pose_pose_position_y;

	double pose_pose_position_z;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FQuat pose_pose_orientation;

	TArray<double> pose_covariance;

	

	void SetFromROS2(const geometry_msgs__msg__PoseWithCovarianceStamped& in_ros_data)
	{
    	header_stamp_sec = in_ros_data.header.stamp.sec;

		header_stamp_nanosec = in_ros_data.header.stamp.nanosec;

		header_frame_id.AppendChars(in_ros_data.header.frame_id.data, in_ros_data.header.frame_id.size);

		pose_pose_position_x = in_ros_data.pose.pose.position.x;

		pose_pose_position_y = in_ros_data.pose.pose.position.y;

		pose_pose_position_z = in_ros_data.pose.pose.position.z;

		pose_pose_orientation.X = in_ros_data.pose.pose.orientation.x;
		pose_pose_orientation.Y = in_ros_data.pose.pose.orientation.y;
		pose_pose_orientation.Z = in_ros_data.pose.pose.orientation.z;
		pose_pose_orientation.W = in_ros_data.pose.pose.orientation.w;

		for (int i = 0; i < 36; i++)
		{
			pose_covariance.Add(in_ros_data.pose.covariance[i]);
		}

		
	}

	void SetROS2(geometry_msgs__msg__PoseWithCovarianceStamped& out_ros_data) const
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

		out_ros_data.pose.pose.position.x = pose_pose_position_x;

		out_ros_data.pose.pose.position.y = pose_pose_position_y;

		out_ros_data.pose.pose.position.z = pose_pose_position_z;

		out_ros_data.pose.pose.orientation.x = pose_pose_orientation.X;
		out_ros_data.pose.pose.orientation.y = pose_pose_orientation.Y;
		out_ros_data.pose.pose.orientation.z = pose_pose_orientation.Z;
		out_ros_data.pose.pose.orientation.w = pose_pose_orientation.W;

		for (int i = 0; i < 36; i++)
		{
			out_ros_data.pose.covariance[i] = pose_covariance[i];
		}

		
	}
};

UCLASS()
class RCLUE_API UROS2PoseWithCovarianceStampedMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSPoseWithCovarianceStamped& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSPoseWithCovarianceStamped& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	geometry_msgs__msg__PoseWithCovarianceStamped pose_with_covariance_stamped_msg;
};