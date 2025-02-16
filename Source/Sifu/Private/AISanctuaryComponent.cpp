#include "AISanctuaryComponent.h"

UAISanctuaryComponent::UAISanctuaryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bSanctuaryHasLimitedDuration = false;
    this->m_fSanctuaryDuration = 30.00f;
    this->m_bSendBarkEventWhenSanctuaryIsSafe = true;
}


