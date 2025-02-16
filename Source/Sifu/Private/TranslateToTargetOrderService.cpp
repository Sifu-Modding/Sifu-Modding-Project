#include "TranslateToTargetOrderService.h"

UTranslateToTargetOrderService::UTranslateToTargetOrderService() {
    this->m_bUseAnimRootMotion = false;
}

FVector UTranslateToTargetOrderService::BPE_GetTarget_Implementation(const FBPOrderServiceInstance& _instance) const {
    return FVector{};
}


