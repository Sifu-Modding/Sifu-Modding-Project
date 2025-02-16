#include "LevelSequenceAnimReplicationComponent.h"
#include "Net/UnrealNetwork.h"

ULevelSequenceAnimReplicationComponent::ULevelSequenceAnimReplicationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_fCinematicSlotWeight = 0.00f;
    this->m_iPlayingSequenceId = -1;
}

void ULevelSequenceAnimReplicationComponent::OnReplaySystemRecordingChanged(bool _bIsRecording) {
}

void ULevelSequenceAnimReplicationComponent::OnRep_SequencerMontagesPosition() {
}

void ULevelSequenceAnimReplicationComponent::OnRep_CinematicSlotWeight() {
}

void ULevelSequenceAnimReplicationComponent::BPF_OnSequenceRegisterActor(ALevelSequenceActor* _levelSequenceActor, ULevelSequenceDirector* _director) {
}

void ULevelSequenceAnimReplicationComponent::BPF_OnSequenceFinished(ALevelSequenceActor* _levelSequenceActor) {
}

void ULevelSequenceAnimReplicationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ULevelSequenceAnimReplicationComponent, m_SequencerMontages);
    DOREPLIFETIME(ULevelSequenceAnimReplicationComponent, m_SequencerAnimMontagesPosition);
    DOREPLIFETIME(ULevelSequenceAnimReplicationComponent, m_fCinematicSlotWeight);
    DOREPLIFETIME(ULevelSequenceAnimReplicationComponent, m_iPlayingSequenceId);
}


