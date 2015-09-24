// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Door.generated.h"

UCLASS()
class E26ACADEMY_API ADoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoor(const FObjectInitializer& ObjectInitializer);

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	//collision sphere primitive to use as root component
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Door")
	class UBoxComponent* BaseCollisionComponent;

	//static mesh of the door
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Door")
	class USkeletalMeshComponent* PickupMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Door")
	FString map;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Door")
	bool isActive;

	UFUNCTION(BlueprintNativeEvent)
	void DoorAnimation();

	UFUNCTION(BlueprintCallable, Category = Door)
	void LoadLevel();

};
