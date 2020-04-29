// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomActor.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ACustomActor::ACustomActor() //constructor
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComponent"); // CreateDefaultSubObject - how we create components and add them to our actor. UStaticMeshComponent - the type (similar to data type in C++). In the " " is the name of the component, name it anything.

}

// Called when the game starts or when spawned
void ACustomActor::BeginPlay()
{
	Super::BeginPlay();

	StaticMesh->SetWorldScale3D(FMath::VRand()); // sets the actor to a random size every time it begins play
	
}

// Called every frame
void ACustomActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

