#include "BaseEnvironmentalInteractionComponent.h"

UBaseEnvironmentalInteractionComponent::UBaseEnvironmentalInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bActive = true;
    this->m_eReaction = EPushObstacleReaction::WallSplash;
    this->m_uiAllowedInteractionTypes = 3;
}


EPushObstacleReaction UBaseEnvironmentalInteractionComponent::BPE_GetPushReaction_Implementation(const AFightingCharacter* _Instigator, const AFightingCharacter* _takenDown) {
    return EPushObstacleReaction::WallSplash;
}

bool UBaseEnvironmentalInteractionComponent::BPE_CanTakeDown_Implementation(AFightingCharacter* _Instigator, AFightingCharacter* _takenDown) {
    return false;
}


