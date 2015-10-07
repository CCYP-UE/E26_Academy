// Fill out your copyright notice in the Description page of Project Settings.

#include "E26Academy.h"
#include "Mission.h"


// Sets default values
AMission::AMission(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Range = ObjectInitializer.CreateDefaultSubobject<USphereComponent>(this, TEXT("Range"));
	Range->InitSphereRadius(250.0f);
	Range->AttachParent = RootComponent;
	Range->OnComponentBeginOverlap.AddDynamic(this, &AMission::OnOverlapBegin);       // set up a notification for when this component overlaps something
	Range->OnComponentEndOverlap.AddDynamic(this, &AMission::OnOverlapEnd);       // set up a notification for when this component overlaps something

}

// Called when the game starts or when spawned
void AMission::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMission::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void AMission::OnOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor && (OtherActor != this) && OtherComp)
    {
		BeginMission();
    }
}

void AMission::OnOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    if (OtherActor && (OtherActor != this) && OtherComp)
    {
        
    }
}

void AMission::BeginMission_Implementation(){
	//in Blueprint
}

