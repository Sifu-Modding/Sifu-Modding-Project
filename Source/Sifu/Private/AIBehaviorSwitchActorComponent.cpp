#include "AIBehaviorSwitchActorComponent.h"

UAIBehaviorSwitchActorComponent::UAIBehaviorSwitchActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_AlertOnPrimitiveOverlap = true;
    this->m_eNewBehavior = EGlobalBehaviors::Alerted;
}

void UAIBehaviorSwitchActorComponent::OnComponentStartOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void UAIBehaviorSwitchActorComponent::BPF_TriggerBehaviorChangeToAssociatedGroups(AActor* _actorTriggeringTheAlert, bool _bSkipBark) const {
}


