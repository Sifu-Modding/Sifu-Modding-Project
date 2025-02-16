#include "LDCameraActor.h"
#include "Components/SceneComponent.h"

ALDCameraActor::ALDCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("rootSceneComponent"));
}


