#include "FightingCameraWeightComponent.h"

UFightingCameraWeightComponent::UFightingCameraWeightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bClampAdditiveWeight = false;
    this->m_fMaxAbsAdditiveWeight = 1.00f;
    this->m_fDialogInvolvedAdditiveWeight = 0.00f;
    this->m_fDialogSpeakerAdditiveWeight = 1.00f;
}

void UFightingCameraWeightComponent::OnGlobalBehaviorChanged(EGlobalBehaviors _eNewBehavior, const bool _bFromDialog) {
}


