// Copyright PrimitiveGoat Games


#include "Character/AuraCharacterBase.h"


AAuraCharacterBase::AAuraCharacterBase()
{
 
	PrimaryActorTick.bCanEverTick = false;

}

void AAuraCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("AAuraCharacterBase::BeginPlay()"));
}

