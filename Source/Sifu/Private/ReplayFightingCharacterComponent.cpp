#include "ReplayFightingCharacterComponent.h"
#include "Net/UnrealNetwork.h"

void UReplayFightingCharacterComponent::OnRep_VoiceInfos() const {
}

void UReplayFightingCharacterComponent::OnRep_CameraTransform() {
}

void UReplayFightingCharacterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UReplayFightingCharacterComponent, m_VoiceInfos);
    DOREPLIFETIME(UReplayFightingCharacterComponent, m_CameraTransform);
}

UReplayFightingCharacterComponent::UReplayFightingCharacterComponent() {
    this->m_CameraDummy = NULL;
}

