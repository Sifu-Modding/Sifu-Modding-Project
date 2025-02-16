#include "PushedObstacleComponent.h"

UPushedObstacleComponent::UPushedObstacleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bActive = true;
    this->m_ePushReaction = EPushObstacleReaction::ObstacleDestructionByHitbox;
}


EPushObstacleReaction UPushedObstacleComponent::BPE_GetPushReaction_Implementation(AFightingCharacter* _pushedPlayer) {
    return EPushObstacleReaction::WallSplash;
}

bool UPushedObstacleComponent::BPE_GetPushInterruptionHit_Implementation(AFightingCharacter* _interruptedCharacter, FHitBox& _inOutResult) {
    return false;
}


