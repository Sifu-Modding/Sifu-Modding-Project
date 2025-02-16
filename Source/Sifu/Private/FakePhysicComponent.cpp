#include "FakePhysicComponent.h"

UFakePhysicComponent::UFakePhysicComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_fZImpulse = 0.00f;
    this->m_fImpulseReduc = 0.00f;
    this->m_OverlappingComponent = NULL;
}

void UFakePhysicComponent::NotifyBeginOverlap(UPrimitiveComponent* _OverlappedComp, AActor* _Other, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _OverlapInfo) {
}

void UFakePhysicComponent::BPF_SetOverlappingComponent(UPrimitiveComponent* _primComp) {
}


