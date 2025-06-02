// Fill out your copyright notice in the Description page of Project Settings.


#include "Factory/Enemigo_Factory.h"
#include "Enemigos/Enemigo_Bomb.h"
#include "Enemigos/Enemigo_Comandante.h"
#include "Enemigos/Enemigo_Rapido.h"
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

AEnemigo* AEnemigo_Factory::CrearEnemigo(FVector Posicion, FString Tipo)
{
	if (Tipo == "EnemigoBomb") {
		return GetWorld()->SpawnActor<AEnemigo_Bomb>(AEnemigo_Bomb::StaticClass(), Posicion, FRotator::ZeroRotator);
	}
	else if (Tipo == "EnemigoRapido") {
		return GetWorld()->SpawnActor<AEnemigo_Rapido>(AEnemigo_Rapido::StaticClass(), Posicion, FRotator::ZeroRotator);
	}
	else if (Tipo == "Comandante") {
		return GetWorld()->SpawnActor<AEnemigo_Comandante>(AEnemigo_Comandante::StaticClass(), Posicion, FRotator::ZeroRotator);
	}
	else {
		return nullptr;
	}
}

