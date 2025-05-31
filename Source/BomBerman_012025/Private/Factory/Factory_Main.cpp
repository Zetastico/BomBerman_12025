// Fill out your copyright notice in the Description page of Project Settings.


#include "Factory/Factory_Main.h"
#include "BloqueBase.h"
#include "Factory/Mapa_Factory.h"
#include "Factory/Bomba_Factory.h"
#include "Propotype/Bomba_Prototype.h"
#include "Propotype/Multi_Bomba.h"

// Sets default values
AFactory_Main::AFactory_Main()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFactory_Main::BeginPlay()
{
	Super::BeginPlay();

	AMapa_Factory* FabricaMapa = GetWorld()->SpawnActor<AMapa_Factory>(AMapa_Factory::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);
	ABomba_Factory* FabricaBomba = GetWorld()->SpawnActor<ABomba_Factory>(ABomba_Factory::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);;

	//ABloqueBase* Bloque = FabricaMapa->CrearBloque("BloqueTitilante", FVector(1000, 1000, 100));
	// Bloque = FabricaMapa->CrearBloque("BloqueTitilante", FVector(1100, 1000, 100));
	 //Bloque = FabricaMapa->CrearBloque("BloqueTitilante", FVector(1200, 1000, 100));

	 IBomba_Prototype* BombaPrototype = FabricaBomba->CrearBomba(FVector(1500, 1000, 100), "Multi Bomba");
	 BombaPrototype = FabricaBomba->CrearBomba(FVector(1150, 1100, 100), "Multi Bomba");
}

// Called every frame
void AFactory_Main::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

