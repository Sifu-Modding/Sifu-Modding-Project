#include "ArenaHardpointAreaActor.h"
#include "Components/SceneComponent.h"

class UCharacterHealthComponent;
class ASCVolume;
class AAISituationActor;
class AActor;
class UPrimitiveComponent;

void AArenaHardpointAreaActor::OnOverlappingEnemyDown(UCharacterHealthComponent* _healthComponent, EDownState _eState) {
}

void AArenaHardpointAreaActor::OnHardpointSituationResolved(AAISituationActor* _situationChanged) {
}

void AArenaHardpointAreaActor::OnChildComponentStartOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult) {
}

void AArenaHardpointAreaActor::OnChildComponentEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex) {
}

TArray<ASCVolume*> AArenaHardpointAreaActor::GetAreaVolumes() const {
    return TArray<ASCVolume*>();
}

bool AArenaHardpointAreaActor::BPF_HasBeenCaptured() const {
    return false;
}

bool AArenaHardpointAreaActor::BPF_GetIsActive() const {
    return false;
}

float AArenaHardpointAreaActor::BPF_GetCurrentCaptureRatio() const {
    return 0.0f;
}

float AArenaHardpointAreaActor::BPF_GetCaptureValue() const {
    return 0.0f;
}

FName AArenaHardpointAreaActor::BPF_GetAreaName() const {
    return NAME_None;
}








AArenaHardpointAreaActor::AArenaHardpointAreaActor() {
    this->m_bIsActive = false;
    this->m_fCurrentScoreMultiplier = 1.00f;
    this->m_bIsAnyEnemyInsideHardpoint = false;
    this->m_RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Scene Component"));
}

