// Fill out your copyright notice in the Description page of Project Settings.


#include "State/State_Patrullar.h"
#include "State/Enemigo_State.h"
#include "State/StateAtacar.h"// Sets default values
AState_Patrullar::AState_Patrullar()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AState_Patrullar::Tick(float DeltaTime)
{
    if (!EnemigoState->PlayerActor) return;

    float Dist = FVector::Dist(EnemigoState->GetActorLocation(), EnemigoState->PlayerActor->GetActorLocation());
    FVector Dir = (EnemigoState->PlayerActor->GetActorLocation() - EnemigoState->GetActorLocation()).GetSafeNormal();
    float Dot = FVector::DotProduct(EnemigoState->GetActorForwardVector(), Dir);
    float Ang = FMath::RadiansToDegrees(acosf(Dot));

    if (Dist <= 400.f && Ang <= 30.f)
    {
        EnemigoState->CambiarEstado(EnemigoState->GetSAtacar());
    }
    //Lógica para continuar patrullando
    if (!EnemigoState->bEsperando && EnemigoState->AIController && EnemigoState->PuntosDePatrulla.Num() > 0)
    {
        EnemigoState->bEsperando = true;
        EnemigoState->GetWorldTimerManager().SetTimer(EnemigoState->TimerEspera, EnemigoState, &AEnemigo_State::IrAlSiguientePunto, EnemigoState->TiempoEspera, false);
    }
}

void AState_Patrullar::Activar()
{
    EnemigoState->IrAlSiguientePunto();
}

void AState_Patrullar::SetEnemigoState(AEnemigo_State* Enemigo)
{
    EnemigoState = Enemigo;
}

//void AState_Patrullar::OnEnter(AEnemigo_State* Enemigo)
//{
//	Enemigo->IrAlSiguientePunto();
//}