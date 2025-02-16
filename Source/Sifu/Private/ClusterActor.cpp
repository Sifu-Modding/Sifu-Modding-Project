#include "ClusterActor.h"

AClusterActor::AClusterActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_fTimeBeforeSpawningThrowable = 0.20f;
    this->m_bCanBeTargeted = false;
    this->m_fSoundNoiseRadius = 1000.00f;
}

void AClusterActor::BPF_SpawnActorFromMesh() {
}

void AClusterActor::BPF_MakeNoise(AActor* _noiseSource, FVector _vLocationOverride) {
}

FVector AClusterActor::BPF_GetImpulseVector() const {
    return FVector{};
}


