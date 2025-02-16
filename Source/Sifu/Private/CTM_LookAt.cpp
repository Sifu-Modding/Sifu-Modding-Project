#include "CTM_LookAt.h"

UCTM_LookAt::UCTM_LookAt() {
}

FVector UCTM_LookAt::BPE_GetPositionToLook_Implementation(UCameraComponentThird* _cameraComponent) const {
    return FVector{};
}

bool UCTM_LookAt::BPE_CanLaunchLookAt_Implementation(UCameraComponentThird* _cameraComponent) const {
    return false;
}


