#include "SCVolume.h"

ASCVolume::ASCVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ParentVolume = NULL;
}

void ASCVolume::InternalOnComponentStartOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult) {
}

void ASCVolume::InternalOnComponentEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex) {
}

FVolumeInfo ASCVolume::GetVolumeInfo() const {
    return FVolumeInfo{};
}


