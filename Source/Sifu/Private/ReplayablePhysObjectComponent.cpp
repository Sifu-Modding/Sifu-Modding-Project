#include "ReplayablePhysObjectComponent.h"
#include "Net/UnrealNetwork.h"

class UPrimitiveComponent;

void UReplayablePhysObjectComponent::OnReplaySystemRecordingChanged(bool _bIsRecording) {
}

void UReplayablePhysObjectComponent::OnRep_IsReplicatingMovement() {
}

void UReplayablePhysObjectComponent::OnRep_AttachmentChanged() {
}

void UReplayablePhysObjectComponent::OnComponentWake(UPrimitiveComponent* _wakingComponent, FName _boneName) {
}

void UReplayablePhysObjectComponent::OnComponentSleep(UPrimitiveComponent* _wakingComponent, FName _boneName) {
}

void UReplayablePhysObjectComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UReplayablePhysObjectComponent, m_bIsReplicatingMovement);
    DOREPLIFETIME(UReplayablePhysObjectComponent, m_AttachedActor);
}

UReplayablePhysObjectComponent::UReplayablePhysObjectComponent() {
    this->m_bIsReplicatingMovement = false;
    this->m_bDebugDisabled = false;
    this->m_bForceNetUpdateOnBodyAwake = true;
    this->m_AttachedActor = NULL;
}

