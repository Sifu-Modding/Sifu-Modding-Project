#include "AnimInstanceReplicationComponent.h"
#include "Net/UnrealNetwork.h"

UAnimInstanceReplicationComponent::UAnimInstanceReplicationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_uiReplicatedAnimGraphVersionHash = 0;
    this->m_AllowedReplicatedTypes.AddDefaulted(3);
    this->m_AnimInstance = NULL;
}

void UAnimInstanceReplicationComponent::OnReplaySystemRecordingChanged(bool _bIsRecording) {
}

void UAnimInstanceReplicationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAnimInstanceReplicationComponent, m_uiReplicatedAnimGraphVersionHash);
    DOREPLIFETIME(UAnimInstanceReplicationComponent, m_ReplicatedStateMachineSnapshots);
    DOREPLIFETIME(UAnimInstanceReplicationComponent, m_ReplicatedAnimInstancePlayerAssets);
    DOREPLIFETIME(UAnimInstanceReplicationComponent, m_ReplicatedSubAnimInstances);
    DOREPLIFETIME(UAnimInstanceReplicationComponent, m_AnimInstance);
}


