#include "EnvironmentalInteractionZone.h"

AEnvironmentalInteractionZone::AEnvironmentalInteractionZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bFallEnabled = true;
    this->m_bEnvironmentalTakedownEnabled = true;
}


