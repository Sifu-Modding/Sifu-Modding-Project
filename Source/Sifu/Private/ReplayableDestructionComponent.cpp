#include "ReplayableDestructionComponent.h"
#include "Net/UnrealNetwork.h"

UReplayableDestructionComponent::UReplayableDestructionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bBroken = false;
}

void UReplayableDestructionComponent::OnRep_BrokenStateUpdate() {
}

void UReplayableDestructionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UReplayableDestructionComponent, m_bBroken);
}


