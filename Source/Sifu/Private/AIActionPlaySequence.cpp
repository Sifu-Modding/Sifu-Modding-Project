#include "AIActionPlaySequence.h"

class AActor;

void UAIActionPlaySequence::OnCreatedSequenceActorEndedPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason) {
}

UAIActionPlaySequence::UAIActionPlaySequence() {
    this->m_CreatedLevelSequenceActor = NULL;
}

