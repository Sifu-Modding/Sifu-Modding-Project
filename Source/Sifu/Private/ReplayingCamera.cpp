#include "ReplayingCamera.h"
#include "Components/SceneComponent.h"

AReplayingCamera::AReplayingCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
}


