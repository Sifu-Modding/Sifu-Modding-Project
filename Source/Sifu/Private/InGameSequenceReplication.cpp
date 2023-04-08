#include "InGameSequenceReplication.h"
#include "Net/UnrealNetwork.h"

class ULevelSequence;
class UObject;

void UInGameSequenceReplication::OnRep_InGameSequenceReplicationInfo() {
}

void UInGameSequenceReplication::BPF_RecordInGameSequence(const UObject* _worldContextObject, ULevelSequence* _sequence, FMovieSceneSequencePlaybackParams _playbackParams, ESequenceState _eState) {
}

void UInGameSequenceReplication::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInGameSequenceReplication, m_InGameSequenceReplicationInfo);
}

UInGameSequenceReplication::UInGameSequenceReplication() {
}

