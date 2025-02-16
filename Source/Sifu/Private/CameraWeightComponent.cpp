#include "CameraWeightComponent.h"

UCameraWeightComponent::UCameraWeightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

float UCameraWeightComponent::BPE_GetWeight_Implementation() const {
    return 0.0f;
}


