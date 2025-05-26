// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloques/BloqueTitilante.h"
#include "TimerManager.h"

ABloqueTitilante::ABloqueTitilante()
{
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	Mesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaBloqueAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (Mesh) {
		Mesh->SetStaticMesh(MallaBloqueAsset.Object);
		Mesh->SetRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));
	}

	bEsDestructible = true; // Set the block as destructible by default

}

void ABloqueTitilante::BeginPlay()
{
	GetWorldTimerManager().SetTimer(TimerHandle_Disappear, this, &ABloqueTitilante::OcultarBloque, 4.5f, false);
}

void ABloqueTitilante::OcultarBloque()
{
	Mesh->SetVisibility(false);
	Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// Reaparecer después de TimeBeforeReappear
	GetWorldTimerManager().SetTimer(TimerHandle_Reappear, this, &ABloqueTitilante::MostrarBloque, TiempoInvisible, false);
}

void ABloqueTitilante::MostrarBloque()
{
	Mesh->SetVisibility(true);
	Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	// Reiniciar el ciclo
	GetWorldTimerManager().SetTimer(TimerHandle_Disappear, this, &ABloqueTitilante::OcultarBloque, TiempoVisible, false);
}
