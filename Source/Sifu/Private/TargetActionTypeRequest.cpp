#include "TargetActionTypeRequest.h"

UTargetActionTypeRequest::UTargetActionTypeRequest() {
}

EActionType UTargetActionTypeRequest::BPE_GetTargetActionType_Implementation(const AActor* _owner) const {
    return EActionType::LockMove;
}


