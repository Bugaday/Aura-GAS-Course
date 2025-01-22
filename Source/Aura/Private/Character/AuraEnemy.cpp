// Copyright Invert Look


#include "Character/AuraEnemy.h"

void AAuraEnemy::HighlightActor()
{
	bHighlighted = true;
	//DrawDebugSphere(GetWorld(),GetActorLocation(),100.0f,12,FColor::Yellow,false,-1,0.0f,1.0f);
	UE_LOG(LogTemp,Warning,TEXT("Highlighting Actor!"));
}

void AAuraEnemy::UnHighlightActor()
{
	bHighlighted = false;
	//DrawDebugSphere(GetWorld(),GetActorLocation(),100.0f,12,FColor::Red,false,-1,0.0f,1.0f);
	UE_LOG(LogTemp,Warning,TEXT("Unhighlighting Actor!"));
}