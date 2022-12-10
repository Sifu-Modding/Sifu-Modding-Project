#include "ReplayablePhysicsComponent.h"
#include "Net/UnrealNetwork.h"

void UReplayablePhysicsComponent::OnReplaySystemRecordingChanged(bool _bIsRecording) {
}

void UReplayablePhysicsComponent::OnRep_LastPoseSnapshot() {
}

void UReplayablePhysicsComponent::OnRep_Active() {
}

void UReplayablePhysicsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
  /*  DOREPLIFETIME(UReplayablePhysicsComponent, m_LastPoseSnapshot);
    DOREPLIFETIME(UReplayablePhysicsComponent, m_bActive);*/
}

UReplayablePhysicsComponent::UReplayablePhysicsComponent() {
    this->m_SkeletalMeshComp = NULL;
    this->m_bActive = false;
}

