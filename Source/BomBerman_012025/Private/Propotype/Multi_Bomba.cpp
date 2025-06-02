// Fill out your copyright notice in the Description page of Project Settings.


#include "Propotype/Multi_Bomba.h"
#include "Kismet/GameplayStatics.h"
#include "BloqueBase.h"
#include "Propotype/Bomba_Prototype.h"
// Sets default values
#include "Propotype/Multi_Bomba.h"
#include "Kismet/GameplayStatics.h"
#include "BloqueBase.h"
#include "NiagaraFunctionLibrary.h"
#include "Engine/World.h"

AMulti_Bomba::AMulti_Bomba()
{
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaBloqueAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	if (MallaBloqueAsset.Succeeded())
	{
		Mesh->SetStaticMesh(MallaBloqueAsset.Object);
		Mesh->SetRelativeScale3D(FVector(0.5f));
	}

	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Tech_Hex_Tile.M_Tech_Hex_Tile'"));
	if (ObjetoMaterial.Succeeded())
	{
		Mesh->SetMaterial(0, ObjetoMaterial.Object);
	}

	static ConstructorHelpers::FObjectFinder<UNiagaraSystem> EfectoNiagaraAsset(TEXT("/Script/Niagara.NiagaraSystem'/Game/Niagara_System/NS_Explosion.NS_Explosion'"));
	if (EfectoNiagaraAsset.Succeeded())
	{
		EfectoExplosion = EfectoNiagaraAsset.Object;
	}
}

void AMulti_Bomba::BeginPlay()
{
	Super::BeginPlay();

	
}

void AMulti_Bomba::AplicarDatos(const FBombaData& Datos)
{
	DatosBomba = Datos;
}

void AMulti_Bomba::PrepararExplosion()
{
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_Explosion, this, &AMulti_Bomba::Explotar, DatosBomba.TiempoParaExplotar, false);
}

UBomba_Prototype* AMulti_Bomba::Clone() const
{
	UWorld* World = GetWorld();
	if (!World) return nullptr;

	FActorSpawnParameters SpawnParams;

	FVector NuevaPos = GetActorLocation() + FVector(100, 0, 0); // posición arbitraria para prueba

	AMulti_Bomba* NuevaBomba = World->SpawnActor<AMulti_Bomba>(GetClass(), NuevaPos, GetActorRotation(), SpawnParams);
	if (NuevaBomba)
	{
		NuevaBomba->AplicarDatos(DatosBomba); // ✅ clonar datos automáticamente
	}

	return Cast<UBomba_Prototype>(NuevaBomba);
}

void AMulti_Bomba::Explotar()
{
	if (EfectoExplosion)
	{
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), EfectoExplosion, GetActorLocation(), FRotator::ZeroRotator);
	}

	ExplorarEnDireccion(FVector(1, 0, 0));
	ExplorarEnDireccion(FVector(-1, 0, 0));
	ExplorarEnDireccion(FVector(0, 1, 0));
	ExplorarEnDireccion(FVector(0, -1, 0));

	Destroy();
}

void AMulti_Bomba::ExplorarEnDireccion(FVector Direccion)
{
	FVector Posicion = GetActorLocation();

	for (int i = 1; i <= DatosBomba.RangoExplosion; ++i)
	{
		FVector CheckPos = Posicion + Direccion * i * 100.0f;

		if (EfectoExplosion)
		{
			UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), EfectoExplosion, CheckPos, FRotator::ZeroRotator);
		}

		FHitResult Hit;
		FCollisionQueryParams Params;
		Params.AddIgnoredActor(this);

		if (GetWorld()->LineTraceSingleByChannel(Hit, Posicion, CheckPos, ECC_Visibility, Params))
		{
			ABloqueBase* Bloque = Cast<ABloqueBase>(Hit.GetActor());
			if (Bloque)
			{
				if (Bloque->bEsDestructible)
				{
					Bloque->Destroy();
				}
				break;
			}
			else
			{
				break;
			}
		}
	}
}

void AMulti_Bomba::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AplicarDatos(FBombaData()); // Aplicar datos por defecto
	PrepararExplosion();
}
