#include "SCVolume.h"

class AActor;
class UPrimitiveComponent;

void ASCVolume::InternalOnComponentStartOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult) {
}

void ASCVolume::InternalOnComponentEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex) {
}

FVolumeBounds ASCVolume::GetVolumeBounds() const {
    return FVolumeBounds{};
}

void ASCVolume::CacheBounds() {
}

ASCVolume::ASCVolume() {
    this->m_ParentVolume = NULL;
}

