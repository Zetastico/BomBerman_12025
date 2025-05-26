// Fill out your copyright notice in the Description page of Project Settings.


#include "Bombas/BombaBase.h"
#include "Kismet/GameplayStatics.h"
#include "BloqueBase.h"
// Sets default values
ABombaBase::ABombaBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	Mesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaBloqueAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));

	if (Mesh) {
		Mesh->SetStaticMesh(MallaBloqueAsset.Object);
		Mesh->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
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

// Called when the game starts or when spawned
void ABombaBase::BeginPlay()
{
	Super::BeginPlay();
	
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_Explosion, this, &ABombaBase::Explotar, TiempoParaExplotar, false);
}

void ABombaBase::Explotar()
{
	if (EfectoExplosion)
	{
		// Efecto de explosión en el centro de la bomba
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(
			GetWorld(),
			EfectoExplosion,
			GetActorLocation(),
			FRotator::ZeroRotator
		);
	}

	ExplorarEnDireccion(FVector(1, 0, 0));   // Derecha
	ExplorarEnDireccion(FVector(-1, 0, 0));  // Izquierda
	ExplorarEnDireccion(FVector(0, 1, 0));   // Adelante
	ExplorarEnDireccion(FVector(0, -1, 0));  // Atrás

	Destroy(); // Destruir la bomba
}

void ABombaBase::ExplorarEnDireccion(FVector Direccion)
{
	FVector Posicion = GetActorLocation();

	for (int i = 1; i <= RangoExplosion; ++i)
	{
		FVector CheckPos = Posicion + Direccion * i * 100.0f; // Tamaño de celda

		// 🔥 Spawnea efecto visual en esa posición
		if (EfectoExplosion)
		{
			UNiagaraFunctionLibrary::SpawnSystemAtLocation(
				GetWorld(),
				EfectoExplosion,
				CheckPos,
				FRotator::ZeroRotator
			);
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
				break; // Rompible o no, se detiene la explosión
			}
			else
			{
				break; // Cualquier otro obstáculo también bloquea
			}
		}
	}
}


// Called every frame
void ABombaBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

