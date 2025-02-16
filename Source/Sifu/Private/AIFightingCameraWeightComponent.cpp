#include "AIFightingCameraWeightComponent.h"

UAIFightingCameraWeightComponent::UAIFightingCameraWeightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_fDamageValidityWindow = 5.00f;
    this->m_bIgnoreFriendlyDamage = true;
    this->m_WeightByDamageCurve = NULL;
}


