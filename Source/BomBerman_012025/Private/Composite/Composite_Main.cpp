// Fill out your copyright notice in the Description page of Project Settings.


#include "Composite/Composite_Main.h"
#include "Composite/Bloque_Simple.h"
#include "Composite/Grupo_Bloques.h"
#include "Composite/Bloque_Base_Composite.h"

// Sets default values
AComposite_Main::AComposite_Main()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AComposite_Main::BeginPlay()
{
	Super::BeginPlay();
	// Creamos un grupo de bloques y agregamos bloques simples a él
	//GrupoP es el grupo principal que contiene otros grupos de bloques
	AGrupo_Bloques* GrupoP = GetWorld()->SpawnActor<AGrupo_Bloques>();
	AGrupo_Bloques* Grupo1 = GetWorld()->SpawnActor<AGrupo_Bloques>();
	AGrupo_Bloques* Grupo2 = GetWorld()->SpawnActor<AGrupo_Bloques>();

	//Creamos bloques para el conjuto 1
	for (int i = 0; i < 10; i++) {
		ABloque_Simple* B1 = GetWorld()->SpawnActor<ABloque_Simple>(ABloque_Simple::StaticClass(), FVector(1000 + i * 100, 1000 + i * 100,-10), FRotator::ZeroRotator);
		B1->Tipo = "Destructible";
		Grupo1->AgregarBloque(B1);
	}
	//Creamos bloques para el conjuto 2
	for (int i = 10; i < 15; i++) {
		ABloque_Simple* B1 = GetWorld()->SpawnActor<ABloque_Simple>(ABloque_Simple::StaticClass(), FVector(1000 + i * 100, 1000 - 100, -10), FRotator::ZeroRotator);
		B1->Tipo = "Destructible";
		Grupo2->AgregarBloque(B1);
	}

	// Agregamos los grupos de bloques al grupo principal
	GrupoP->AgregarBloque(Grupo1);
	GrupoP->AgregarBloque(Grupo2);
	// Llamamos a la explosión
	GrupoP->AfectarPorExplosion();

	
}

// Called every frame
void AComposite_Main::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

