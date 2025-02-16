#include "HitBoxComponent.h"

UHitBoxComponent::UHitBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_fMinVelocity = 0.00f;
    this->m_bRecoveryAfterDelay = false;
    this->m_fRecoveryAfterDelay = 10.00f;
    this->m_bRecoveryOnLeaveZone = false;
}

void UHitBoxComponent::BPF_SetOwningCharacter(AFightingCharacter* _owningCharacter) {
}


