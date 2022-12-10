#include "AIWaveDirector.h"

class AActor;
class UPrimitiveComponent;

void AAIWaveDirector::OnPlayerOverlapSpawningVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool AAIWaveDirector::BPF_SpawnWaveByName(FName _WaveName, FName _preset) {
    return false;
}

bool AAIWaveDirector::BPF_SpawnNextWave(FName _preset) {
    return false;
}

int32 AAIWaveDirector::BPF_GetRemainingAIsInWaves() const {
    return 0;
}

AAIWaveDirector::AAIWaveDirector() {
    this->m_eFirstWaveSpawnMethod = EFirstWaveSpawnMethod::BeginPlay;
    this->m_iMaxNumberOfAIsSpawned = -1;
    this->m_iWaveIncrementalIndex = 0;
}

