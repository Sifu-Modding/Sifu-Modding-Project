#include "AimingBillboardActor.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AAimingBillboardActor::AAimingBillboardActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("rootSceneComponent"));
    this->m_BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->m_bDebug = false;
    this->m_BoxComponent->SetupAttachment(RootComponent);
}

float AAimingBillboardActor::BPF_GetScore() const {
    return 0.0f;
}

AActor* AAimingBillboardActor::BPF_GetActorOwner() const {
    return NULL;
}

FVector2D AAimingBillboardActor::BPE_ComputeSize_Implementation() const {
    return FVector2D{};
}

float AAimingBillboardActor::BPE_ComputeScore_Implementation(FVector _v3DPointToTest) const {
    return 0.0f;
}


