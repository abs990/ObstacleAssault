// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	int NumberOfApples = 10;
	float NumberOfHours = 1.5f;
	FString MyName = "Abhishek";

	UE_LOG(LogTemp, Display, TEXT("NumberOfApples: %d, NumberOfHours: %.2f, MyName: %s"), NumberOfApples, NumberOfHours, *MyName);
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

