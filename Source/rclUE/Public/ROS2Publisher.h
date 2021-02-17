// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ROS2Node.h"
#include "ROS2Topic.h"
#include "ROS2Publisher.generated.h"


// Should this be an interface instead?
// Should use ROS2Topic
UCLASS( ClassGroup=(Custom), Blueprintable, abstract )
class RCLUE_API UROS2Publisher : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UROS2Publisher();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	UFUNCTION(BlueprintCallable)
	void SetTopic(UROS2Topic* InTopic);
	
	UFUNCTION(BlueprintCallable)
	UROS2Topic* GetTopic() const;
	
	UFUNCTION(BlueprintCallable)
	void SetPubFrequency(int32 PubFrequencyHz);
	
	UFUNCTION(BlueprintCallable)
	int32 GetPubFrequency() const;
	
	UFUNCTION(BlueprintNativeEvent)
	void InitializeMessage();
	
	UFUNCTION(BlueprintNativeEvent)
	void UpdateAndPublishMessage();
	
	UFUNCTION()
	virtual void Destroy();

protected:
	UFUNCTION(BlueprintCallable)
	void Publish();

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 PublicationFrequencyHz = 1000;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UROS2Topic* Topic;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	AROS2Node* ownerNode;

	const void* pub_msg;
	
	rcl_publisher_t pub;
	
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	FTimerHandle timerHandle;
};
