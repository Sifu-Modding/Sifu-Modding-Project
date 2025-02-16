#include "ReplayablePhysicsComponent.h"
#include "Net/UnrealNetwork.h"

UReplayablePhysicsComponent::UReplayablePhysicsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_SkeletalMeshComp = NULL;
    this->m_bActive = false;
}

void UReplayablePhysicsComponent::OnReplaySystemRecordingChanged(bool _bIsRecording) {
}

void UReplayablePhysicsComponent::OnRep_LastPoseSnapshot() {
}

void UReplayablePhysicsComponent::OnRep_Active() {
}

void UReplayablePhysicsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UReplayablePhysicsComponent, m_LastPoseSnapshot);
    DOREPLIFETIME(UReplayablePhysicsComponent, m_bActive);
}


