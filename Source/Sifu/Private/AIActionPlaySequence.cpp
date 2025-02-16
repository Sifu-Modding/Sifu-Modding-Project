#include "AIActionPlaySequence.h"

UAIActionPlaySequence::UAIActionPlaySequence() {
    this->m_CreatedLevelSequenceActor = NULL;
}

void UAIActionPlaySequence::OnCreatedSequenceActorEndedPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason) {
}


