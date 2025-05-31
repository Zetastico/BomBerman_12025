// Fill out your copyright notice in the Description page of Project Settings.


#include "Factory/Enemigo_Factory.h"

// Sets default values
AEnemigo_Factory::AEnemigo_Factory()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemigo_Factory::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigo_Factory::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

