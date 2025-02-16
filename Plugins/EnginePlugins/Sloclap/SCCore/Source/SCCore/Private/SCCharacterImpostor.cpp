#include "SCCharacterImpostor.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "SCStreamingActorComponent.h"

ASCCharacterImpostor::ASCCharacterImpostor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("SkeletalMesh"));
    this->m_SpawnTransformType = EImposterSpawnTransformType::Actor;
    this->m_RagdollConfig = NULL;
    this->m_Mesh = (USkeletalMeshComponentBudgeted*)RootComponent;
    this->m_StreamingComponent = CreateDefaultSubobject<USCStreamingActorComponent>(TEXT("StreamingActorComponent"));
    this->m_AnimInstance = NULL;
}

ASCCharacter* ASCCharacterImpostor::GetCharacterToMimic() const {
    return NULL;
}

void ASCCharacterImpostor::BPF_Show() {
}

void ASCCharacterImpostor::BPF_Hide() {
}

void ASCCharacterImpostor::BPE_OnHideDueToDisplayLimit_Implementation() {
}



