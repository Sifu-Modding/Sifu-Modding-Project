#include "ReplayFightingCharacterComponent.h"
#include "Net/UnrealNetwork.h"

UReplayFightingCharacterComponent::UReplayFightingCharacterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_CameraDummy = NULL;
}

void UReplayFightingCharacterComponent::OnRep_VoiceInfos() const {
}

void UReplayFightingCharacterComponent::OnRep_CameraTransform() {
}

void UReplayFightingCharacterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UReplayFightingCharacterComponent, m_VoiceInfos);
    DOREPLIFETIME(UReplayFightingCharacterComponent, m_CameraTransform);
}


