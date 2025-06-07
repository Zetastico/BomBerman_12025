// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloques/Bloque_Madera.h"
#include "Materials/MaterialInterface.h"


ABloque_Madera::ABloque_Madera()
{
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	Mesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaBloqueAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (Mesh) {
		Mesh->SetStaticMesh(MallaBloqueAsset.Object);
		Mesh->SetRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));
	}
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("/Script/Engine.Material'/Game/Wooden_Pack/Material/M_Wood_07.M_Wood_07'"));
	if (ObjetoMaterial.Succeeded())
	{
		Mesh->SetMaterial(0, ObjetoMaterial.Object);
	}

	bEsDestructible = true; // Set the block as destructible by default
	MoveSpeed = 1.0f; // velocidad del movimiento
	Tolerance = 1.0f;   // cuán cerca debe estar para considerar que llegó al destino
}

void ABloque_Madera::BeginPlay()
{
	Super::BeginPlay();
	StartLocation = GetActorLocation();
	EndLocation = StartLocation + FVector(0, 500, 0); // se moverá 500 unidades en Y
	TargetLocation = EndLocation;
	bEsDestructible = true;
	GetWorld()->GetTimerManager().SetTimer(TimerHandleExplosion, this, &ABloque_Madera::DestruirBloque, DestructionTime, false);
}

void ABloque_Madera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector CurrentLocation = GetActorLocation();
	FVector NewLocation = FMath::VInterpTo(CurrentLocation, TargetLocation, DeltaTime, MoveSpeed);
	SetActorLocation(NewLocation);

	// Si está suficientemente cerca, cambiar dirección
	if (FVector::Dist(NewLocation, TargetLocation) <= Tolerance)
	{
		TargetLocation = (TargetLocation.Equals(EndLocation)) ? StartLocation : EndLocation;
	}
}

void ABloque_Madera::DestruirBloque()
{
	if (bEsDestructible)
	{
		// Destruir el bloque después de un pequeño retardo (por ejemplo, 0.1 segundos)
		Destroy();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Este bloque no es destructible."));
	}
}
