// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloques/Bloque_Puerta.h"

ABloque_Puerta::ABloque_Puerta()
{
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	Mesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaBloqueAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (Mesh) {
		Mesh->SetStaticMesh(MallaBloqueAsset.Object);
		Mesh->SetRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));
	}
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Rust.M_Metal_Rust'"));
	if (ObjetoMaterial.Succeeded())
	{
		Mesh->SetMaterial(0, ObjetoMaterial.Object);
	}

	bEsDestructible = false; // Set the block as destructible by default
	Timer = 0.0f;
	Interval = 2.0f; // tiempo entre cada rotación
	RotationSpeed = 0.9f; // grados por segundo aproximado
	TargetRotation = GetActorRotation();
}

void ABloque_Puerta::BeginPlay()
{
	Super::BeginPlay();
	TargetRotation = GetActorRotation();
	bEsDestructible = true;
	GetWorld()->GetTimerManager().SetTimer(TimerHandleExplosion, this, &ABloque_Puerta::DestruirBloque, DestructionTime, false);

}

void ABloque_Puerta::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Timer += DeltaTime;
	if (Timer >= Interval)
	{
		// Nueva rotación objetivo, sumando 90° en el eje Yaw
		TargetRotation.Yaw += 90.0f;
		Timer = 0.0f;
	}

	// Interpolación suave hacia la rotación objetivo
	FRotator CurrentRotation = GetActorRotation();
	FRotator NewRotation = FMath::RInterpTo(CurrentRotation, TargetRotation, DeltaTime, RotationSpeed);
	SetActorRotation(NewRotation);

}

void ABloque_Puerta::DestruirBloque()
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
