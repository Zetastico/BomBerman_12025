// Fill out your copyright notice in the Description page of Project Settings.


#include "2do_Parcial/2P_Prototype/P_Titilante.h"

// Sets default values
AP_Titilante::AP_Titilante()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Le damos malla al bloque
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	Mesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaBloqueAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (Mesh) {
		Mesh->SetStaticMesh(MallaBloqueAsset.Object);
		Mesh->SetRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));
	}

	//Le damos material al bloque
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold'"));
	if (ObjetoMaterial.Succeeded())
	{
		Mesh->SetMaterial(0, ObjetoMaterial.Object);
	}
}

//Metodo para clonar los bloques de tipo titilante
UBloque_Prototype* AP_Titilante::Clone(const FVector& NuevaPosicion) const
{
	UWorld* World = GetWorld();
	if (!World) return nullptr;

	FActorSpawnParameters SpawnParams;

	//Spawneamos un nuevo bloque en la posicion indicada
	AP_Titilante* NuevoBloque = World->SpawnActor<AP_Titilante>(GetClass(), NuevaPosicion, GetActorRotation(), SpawnParams);

	if (NuevoBloque)
	{
		//Clonamos los parametros del bloque original al nuevo bloque
		NuevoBloque->SetParametroClon(this);
		//Devolvemos el nuevo bloque como un UBloque_Prototype
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

//Metodos para ocultar y mostrar el bloque
void AP_Titilante::OcultarBloque()
{
	Mesh->SetVisibility(false);
	Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// Reaparecer después de TimeBeforeReappear
	GetWorldTimerManager().SetTimer(TimerHandle_Reappear, this, &AP_Titilante::MostrarBloque, TiempoInvisible, false);
}
//Metodos para ocultar y mostrar el bloque
void AP_Titilante::MostrarBloque()
{
	Mesh->SetVisibility(true);
	Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	// Reiniciar el ciclo
	GetWorldTimerManager().SetTimer(TimerHandle_Disappear, this, &AP_Titilante::OcultarBloque, TiempoVisible, false);
}

//Metodo para establecer los parametros del bloque clonado
void AP_Titilante::SetParametroClon(const AP_Titilante* OtroBloque)
{
	//Asiganmos las variables del bloque original al nuevo clon
	TiempoVisible = OtroBloque->TiempoVisible;
	TiempoInvisible = OtroBloque->TiempoInvisible;
	bTitilar = OtroBloque->bTitilar;
	//Le damos en nuevo tamano al bloque clon
	if (Mesh)
	{
		Mesh->SetRelativeScale3D(FVector(OtroBloque->tamanoBloque, OtroBloque->tamanoBloque, OtroBloque->tamanoBloque));
	}
	//Si el bloque es titilante, iniciamos el temporizador para ocultarlo
	if (bTitilar) {
		GetWorldTimerManager().SetTimer(TimerHandle_Disappear, this, &AP_Titilante::OcultarBloque, TiempoVisible, false);
	}
	else {
		Mesh->SetVisibility(true);
		Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
}

//Metodo para establecer los parametros del bloque
void AP_Titilante::SetParametros(float TiempoA, float TiempoB, float tamano, bool titilar)
{
	//Se pueden aumentar mas parametros
	TiempoVisible = TiempoA;
	TiempoInvisible = TiempoB;
	tamanoBloque = tamano;
	//Le damos el tamano indicado
	Mesh->SetRelativeScale3D(FVector(tamanoBloque, tamanoBloque, tamanoBloque));
	bTitilar = titilar;
	if (bTitilar) {
		GetWorldTimerManager().SetTimer(TimerHandle_Disappear, this, &AP_Titilante::OcultarBloque, TiempoVisible, false);
	}
	else {
		Mesh->SetVisibility(true);
		Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
}
//Implementacion en el GameMode