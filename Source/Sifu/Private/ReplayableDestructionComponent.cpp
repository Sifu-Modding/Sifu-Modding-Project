#include "ReplayableDestructionComponent.h"
#include "Net/UnrealNetwork.h"

void UReplayableDestructionComponent::OnRep_BrokenStateUpdate() {
}

void UReplayableDestructionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UReplayableDestructionComponent, m_bBroken);
}

UReplayableDestructionComponent::UReplayableDestructionComponent() {
    this->m_bBroken = false;
}

