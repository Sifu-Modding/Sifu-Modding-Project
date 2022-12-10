#include "CheckPoint.h"
#include "Components/BoxComponent.h"

class AActor;
class UPrimitiveComponent;

void ACheckPoint::OnBeginOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult) {
}

void ACheckPoint::BPF_SetNewCheckPointInSave() {
}

ACheckPoint::ACheckPoint() {
    this->m_TriggerCheckpointEnter = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerCheckpoint"));
}

