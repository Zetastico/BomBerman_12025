// Fill out your copyright notice in the Description page of Project Settings.


#include "State/StateAtacar.h"
#include "State/Enemigo_State.h"
#include "State/State_Patrullar.h"
#include "GameFramework/CharacterMovementComponent.h"
// Sets default values
AStateAtacar::AStateAtacar()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AStateAtacar::BeginPlay()
{
}

void AStateAtacar::Tick(float DeltaTime)
{
    if (!EnemigoState->AIController || !EnemigoState->PlayerActor) return;

    float Dist = FVector::Dist(EnemigoState->GetActorLocation(), EnemigoState->PlayerActor->GetActorLocation());

    if (Dist > 600.f)
    {
        EnemigoState->CambiarEstado(EnemigoState->GetSPatrullar());
        return;
    }

    EnemigoState->AIController->MoveToActor(EnemigoState->PlayerActor, 15.0f);
}

void AStateAtacar::Activar()
{
    EnemigoState->GetCharacterMovement()->MaxWalkSpeed = 50.0f;
}

void AStateAtacar::SetEnemigoState(AEnemigo_State* Enemigo)
{
    EnemigoState = Enemigo;
}

//void AStateAtacar::OnEnter(AEnemigo_State* Enemigo)
//{
//	
//}

