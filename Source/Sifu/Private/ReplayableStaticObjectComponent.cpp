#include "ReplayableStaticObjectComponent.h"

UReplayableStaticObjectComponent::UReplayableStaticObjectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_RootPrimComp = NULL;
}


