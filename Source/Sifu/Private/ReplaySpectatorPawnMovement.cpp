#include "ReplaySpectatorPawnMovement.h"

UReplaySpectatorPawnMovement::UReplaySpectatorPawnMovement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIgnoreTimeDilation = true;
}

void UReplaySpectatorPawnMovement::BPF_SetDirectionConstraintDelegate(FApplyDirectionConstraintSignature _delegate) {
}

FVector UReplaySpectatorPawnMovement::BPF_GetConstrainedDirection(const FVector& _vLeashOrigin, const FVector& _vLeashSize, const FVector& _vCurrentLocation, const FVector& _vDirection, bool& _bOutConstrained) const {
    return FVector{};
}


