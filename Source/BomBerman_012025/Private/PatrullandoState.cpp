// Fill out your copyright notice in the Description page of Project Settings.


#include "PatrullandoState.h"

// Sets default values
APatrullandoState::APatrullandoState()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APatrullandoState::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APatrullandoState::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APatrullandoState::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

