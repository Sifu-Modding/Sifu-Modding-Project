#include "Killzone.h"

AKillzone::AKillzone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->m_BoxComponent = NULL;
}

void AKillzone::OnBoxTouched(UPrimitiveComponent* _OverlappedComp, AActor* _Other, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult) {
}

bool AKillzone::BPF_IsKillzoneActive_Implementation() {
    return false;
}



