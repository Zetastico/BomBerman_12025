// Fill out your copyright notice in the Description page of Project Settings.


#include "2do_Parcial/2P_Prototype/P_Titilante.h"

// Sets default values
AP_Titilante::AP_Titilante()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	Mesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaBloqueAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (Mesh) {
		Mesh->SetStaticMesh(MallaBloqueAsset.Object);
		Mesh->SetRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));
	}
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold'"));
	if (ObjetoMaterial.Succeeded())
	{
		Mesh->SetMaterial(0, ObjetoMaterial.Object);
	}
}

UBloque_Prototype* AP_Titilante::Clone(const FVector& NuevaPosicion) const
{
	UWorld* World = GetWorld();
	if (!World) return nullptr;

	FActorSpawnParameters SpawnParams;

	AP_Titilante* NuevoBloque = World->SpawnActor<AP_Titilante>(GetClass(), NuevaPosicion, GetActorRotation(), SpawnParams);

	if (NuevoBloque)
	{
		NuevoBloque->SetParametroClon(this);
		return Cast<UBloque_Prototype>(NuevoBloque);
	}

	return nullptr;
}


// Called when the game starts or when spawned
void AP_Titilante::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AP_Titilante::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AP_Titilante::OcultarBloque()
{
	Mesh->SetVisibility(false);
	Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// Reaparecer después de TimeBeforeReappear
	GetWorldTimerManager().SetTimer(TimerHandle_Reappear, this, &AP_Titilante::MostrarBloque, TiempoInvisible, false);
}

void AP_Titilante::MostrarBloque()
{
	Mesh->SetVisibility(true);
	Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	// Reiniciar el ciclo
	GetWorldTimerManager().SetTimer(TimerHandle_Disappear, this, &AP_Titilante::OcultarBloque, TiempoVisible, false);
}

void AP_Titilante::SetParametroClon(const AP_Titilante* OtroBloque)
{
	TiempoVisible = OtroBloque->TiempoVisible;
	TiempoInvisible = OtroBloque->TiempoInvisible;
	bTitilar = OtroBloque->bTitilar;
	if (Mesh)
	{
		Mesh->SetRelativeScale3D(FVector(OtroBloque->tamanoBloque, OtroBloque->tamanoBloque, OtroBloque->tamanoBloque));
	}
	if (bTitilar) {
		GetWorldTimerManager().SetTimer(TimerHandle_Disappear, this, &AP_Titilante::OcultarBloque, TiempoVisible, false);
	}
	else {
		Mesh->SetVisibility(true);
		Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
}

void AP_Titilante::SetParametros(float TiempoA, float TiempoB, float tamano, bool titilar)
{
	TiempoVisible = TiempoA;
	TiempoInvisible = TiempoB;
	tamanoBloque = tamano;
	Mesh->SetRelativeScale3D(FVector(tamanoBloque, tamanoBloque, tamanoBloque));
	bTitilar = titilar; // Aseguramos que el bloque titile
	if (bTitilar) {
		GetWorldTimerManager().SetTimer(TimerHandle_Disappear, this, &AP_Titilante::OcultarBloque, TiempoVisible, false);
	}
	else {
		Mesh->SetVisibility(true);
		Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
}
