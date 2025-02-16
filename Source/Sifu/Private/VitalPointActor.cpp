#include "VitalPointActor.h"
#include "Components/SceneComponent.h"

AVitalPointActor::AVitalPointActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("rootSceneComponent"));
}

void AVitalPointActor::OnBillBoardSelectionChanged(bool _bSelected, AAimingBillboardActor* _billboard) {
}

FVitalPointDataDefinition AVitalPointActor::BPF_GetDefinition() const {
    return FVitalPointDataDefinition{};
}

AActor* AVitalPointActor::BPF_GetActorOwner() const {
    return NULL;
}


