#include "InteractiveDestructionComponent.h"

UInteractiveDestructionComponent::UInteractiveDestructionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_iHitByCharaDamage = 1;
    this->m_iHitByObjectDamage = 1;
    this->m_DestroyedStaticMesh = NULL;
    this->m_DestroyedSkeletalMesh = NULL;
    this->m_bUseCustomCollisionProfile = false;
    this->m_fChunkDeactivationDelay = 3.00f;
}

void UInteractiveDestructionComponent::OnReplaySystemRecordingChanged(bool _bIsRecording) {
}

int32 UInteractiveDestructionComponent::BPF_GetStateIndex() const {
    return 0;
}


