// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CustomActor.generated.h"

UCLASS()
class ULTIMATE_API ACustomActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACustomActor(); // constructor

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	UPROPERTY(EditAnywhere, Category = "Components") //macro
	UStaticMeshComponent* StaticMesh; //Pointer called StaticMesh

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
