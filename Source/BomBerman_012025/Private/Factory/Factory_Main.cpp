// Fill out your copyright notice in the Description page of Project Settings.


#include "Factory/Factory_Main.h"
#include "BloqueBase.h"
#include "Factory/Mapa_Factory.h"
#include "Factory/Bomba_Factory.h"
#include "Factory/Enemigo_Factory.h"
#include "Propotype/Bomba_Prototype.h"
#include "Propotype/Multi_Bomba.h"
#include "Enemigos/Enemigo_Bomb.h"
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

	//Creamos las fabricas que tenemos creadas
	AMapa_Factory* FabricaMapa = GetWorld()->SpawnActor<AMapa_Factory>(AMapa_Factory::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);
	ABomba_Factory* FabricaBomba = GetWorld()->SpawnActor<ABomba_Factory>(ABomba_Factory::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);;
	AEnemigo_Factory* FabricaEnemigo = GetWorld()->SpawnActor<AEnemigo_Factory>(AEnemigo_Factory::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);
	//Crea los bloques y los guarda en el array
	ABloqueBase* Bloque;
	for (int i = 0; i <= 5; i++) {
		Bloque = FabricaMapa->CrearBloque("BloqueTitilante", FVector(1000 + i * 100, 1000, 100));
		Bloques.Add(Bloque);
	}
	//ABloqueBase* Bloque = FabricaMapa->CrearBloque("BloqueTitilante", FVector(1000, 1000, 100));
	// Bloque = FabricaMapa->CrearBloque("BloqueTitilante", FVector(1100, 1000, 100));
	 //Bloque = FabricaMapa->CrearBloque("BloqueTitilante", FVector(1200, 1000, 100));

	//Crea otros objetos
	 IBomba_Prototype* BombaPrototype = FabricaBomba->CrearBomba(FVector(1500, 1000, 100), "Multi Bomba");
	 BombaPrototype = FabricaBomba->CrearBomba(FVector(1150, 1100, 100), "Multi Bomba");

	 AEnemigo* Enemigo = FabricaEnemigo->CrearEnemigo(FVector(2000, 1000, 100), "EnemigoBomb");
}

// Called every frame
void AFactory_Main::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

