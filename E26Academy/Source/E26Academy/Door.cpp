// Fill out your copyright notice in the Description page of Project Settings.

#include "E26Academy.h"
#include "Engine.h"
#include "Door.h"


// Sets default values
ADoor::ADoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//create root sphere component that is collision
	BaseCollisionComponent = ObjectInitializer.CreateDefaultSubobject<UBoxComponent>(this, TEXT("HitboxForDoor"));

	//Set Box component as root

	RootComponent = BaseCollisionComponent;

	//create static mesh component
	PickupMesh = ObjectInitializer.CreateDefaultSubobject<USkeletalMeshComponent>(this, TEXT("DoorMesh"));

	//Turn physics on for static mesh
	PickupMesh->SetSimulatePhysics(true);

	//Attach the StaticMeshComponent to the root component
	PickupMesh->AttachTo(RootComponent);

	map = "";

	isActive = false;

}

// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADoor::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void ADoor::DoorAnimation_Implementation(){
	//Play animation in Blueprint
}

void ADoor::LoadLevel(){
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Enter..."));
	GetWorld()->ServerTravel("/Game/Maps/"+map);
}

