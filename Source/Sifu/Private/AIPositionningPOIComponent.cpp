#include "AIPositionningPOIComponent.h"

UAIPositionningPOIComponent::UAIPositionningPOIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
}

void UAIPositionningPOIComponent::BPF_SetData(const FAIPositionningPOI& _data, const TArray<AAISpawner*>& _allowedSpawners) {
}

AFightingCharacter* UAIPositionningPOIComponent::BPF_GetOccupant() const {
    return NULL;
}


