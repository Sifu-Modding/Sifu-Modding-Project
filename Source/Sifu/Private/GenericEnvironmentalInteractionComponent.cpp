#include "GenericEnvironmentalInteractionComponent.h"

UGenericEnvironmentalInteractionComponent::UGenericEnvironmentalInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bIgnoreNavMesh = false;
    this->m_eWallSide = EWallSide::AnyDirection;
    this->m_Settings = NULL;
}


