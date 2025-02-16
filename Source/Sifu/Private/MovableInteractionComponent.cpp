#include "MovableInteractionComponent.h"

UMovableInteractionComponent::UMovableInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_fShowInteractionRange = 300.00f;
}


