#include "TraversalNavLinkCustomComponent.h"

UTraversalNavLinkCustomComponent::UTraversalNavLinkCustomComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_uiCurrentTraversalVersion = 0;
    this->m_eExternalLinkBehavior = ELinkWithExternalBehavior::ActiveIfExternalActive;
}


