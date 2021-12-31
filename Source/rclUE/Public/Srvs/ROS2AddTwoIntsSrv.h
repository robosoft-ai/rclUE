// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/AddTwoInts.srv - do not modify

#pragma once

#include <CoreMinimal.h>

#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"
#include "example_interfaces/srv/add_two_ints.h"

#include "ROS2AddTwoIntsSrv.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FROSAddTwoInts_Request
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 a;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 b;

	

	void SetFromROS2(const example_interfaces__srv__AddTwoInts_Request& in_ros_data)
	{
    	a = in_ros_data.a;

		b = in_ros_data.b;

		
	}

	void SetROS2(example_interfaces__srv__AddTwoInts_Request& out_ros_data) const
	{
    	out_ros_data.a = a;

		out_ros_data.b = b;

		
	}
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSAddTwoInts_Response
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 sum;

	

	void SetFromROS2(const example_interfaces__srv__AddTwoInts_Response& in_ros_data)
	{
    	sum = in_ros_data.sum;

		
	}

	void SetROS2(example_interfaces__srv__AddTwoInts_Response& out_ros_data) const
	{
    	out_ros_data.sum = sum;

		
	}
};

UCLASS()
class RCLUE_API UROS2AddTwoIntsSrv : public UROS2GenericSrv
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
	void SetRequest(const FROSAddTwoInts_Request& Request);
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void GetRequest(FROSAddTwoInts_Request& Request) const;
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void SetResponse(const FROSAddTwoInts_Response& Response);
	
	// used by client
  	UFUNCTION(BlueprintCallable)
	void GetResponse(FROSAddTwoInts_Response& Response) const;
	
	virtual void* GetRequest() override;
	virtual void* GetResponse() override;

private:
	virtual FString SrvRequestToString() const override;
	virtual FString SrvResponseToString() const override;

	example_interfaces__srv__AddTwoInts_Request AddTwoInts_req;
	example_interfaces__srv__AddTwoInts_Response AddTwoInts_res;
};