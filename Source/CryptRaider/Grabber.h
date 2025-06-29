// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Grabber.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CRYPTRAIDER_API UGrabber : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGrabber();
	UPhysicsHandleComponent *GetPhysicsHandle() const;
	bool getHit(FHitResult& outHit);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY (EditAnywhere)
	float maxGrabDistance;	

	UPROPERTY (EditAnywhere)
	float grabRadius = 100;		

	UPROPERTY (EditAnywhere)
	float holdDistance = 100;		

	UFUNCTION (BlueprintCallable)
	void Release();

	UFUNCTION (BlueprintCallable)
	void Grab();


};
