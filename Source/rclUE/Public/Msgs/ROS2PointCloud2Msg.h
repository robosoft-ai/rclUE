// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/PointCloud2.msg - do not modify

#pragma once

#include "CoreMinimal.h"

#include "sensor_msgs/msg/point_cloud2.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2PointCloud2Msg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSPointCloud2
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int header_stamp_sec;

	unsigned int header_stamp_nanosec;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString header_frame_id;

	unsigned int height;

	unsigned int width;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> fields_name;

	TArray<unsigned int> fields_offset;

	TArray<uint8> fields_datatype;

	TArray<unsigned int> fields_count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool is_bigendian;

	unsigned int point_step;

	unsigned int row_step;

	TArray<uint8> data;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool is_dense;

	

	void SetFromROS2(sensor_msgs__msg__PointCloud2 rosdata)
	{
    	header_stamp_sec = rosdata.header.stamp.sec;

		header_stamp_nanosec = rosdata.header.stamp.nanosec;

		header_frame_id.AppendChars(rosdata.header.frame_id.data, rosdata.header.frame_id.size);

		height = rosdata.height;

		width = rosdata.width;

		for (int i = 0; i < rosdata.fields.size; i++)
		{
			fields_name[i].AppendChars(rosdata.fields.data[i].name.data,rosdata.fields.data[i].name.size);
		}

		for (int i = 0; i < rosdata.fields.size; i++)
		{
			fields_offset[i] = rosdata.fields.data[i].offset;
		}

		for (int i = 0; i < rosdata.fields.size; i++)
		{
			fields_datatype[i] = rosdata.fields.data[i].datatype;
		}

		for (int i = 0; i < rosdata.fields.size; i++)
		{
			fields_count[i] = rosdata.fields.data[i].count;
		}

		is_bigendian = rosdata.is_bigendian;

		point_step = rosdata.point_step;

		row_step = rosdata.row_step;

		for (int i = 0; i < rosdata.data.size; i++)
		{
			data[i] = rosdata.data.data[i];
		}

		is_dense = rosdata.is_dense;

		
	}

	void SetROS2(sensor_msgs__msg__PointCloud2& rosdata) const
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

		rosdata.height = height;

		rosdata.width = width;

		for (int i = 0; i < fields_name.Num(); i++)
		{
			if (rosdata.fields.data[i].name.data != nullptr)
			{
				free(rosdata.fields.data[i].name.data);
			}
			rosdata.fields.data[i].name.data = (char*)malloc((fields_name[i].Len()+1)*sizeof(char));
			memcpy(rosdata.fields.data[i].name.data, TCHAR_TO_ANSI(*fields_name[i]), (fields_name[i].Len()+1)*sizeof(char));
			rosdata.fields.data[i].name.size = fields_name[i].Len();
			rosdata.fields.data[i].name.capacity = fields_name[i].Len() + 1;
		}

		for (int i = 0; i < fields_offset.Num(); i++)
		{
			rosdata.fields.data[i].offset = fields_offset[i];
		}

		for (int i = 0; i < fields_datatype.Num(); i++)
		{
			rosdata.fields.data[i].datatype = fields_datatype[i];
		}

		for (int i = 0; i < fields_count.Num(); i++)
		{
			rosdata.fields.data[i].count = fields_count[i];
		}

		rosdata.is_bigendian = is_bigendian;

		rosdata.point_step = point_step;

		rosdata.row_step = row_step;

		for (int i = 0; i < data.Num(); i++)
		{
			rosdata.data.data[i] = data[i];
		}

		rosdata.is_dense = is_dense;

		
	}
};

UCLASS()
class RCLUE_API UROS2PointCloud2Msg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSPointCloud2 Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSPointCloud2& Output);
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	sensor_msgs__msg__PointCloud2 point_cloud2_msg;
};