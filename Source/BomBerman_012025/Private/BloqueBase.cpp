// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueBase.h"

// Sets default values
ABloqueBase::ABloqueBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABloqueBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABloqueBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABloqueBase::DestruirBloque()
{
}

