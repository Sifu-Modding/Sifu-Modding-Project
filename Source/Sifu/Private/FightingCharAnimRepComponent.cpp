#include "FightingCharAnimRepComponent.h"

UFightingCharAnimRepComponent::UFightingCharAnimRepComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_AllowedReplicatedTypes.AddDefaulted(3);
}


