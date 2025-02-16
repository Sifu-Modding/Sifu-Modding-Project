#include "ReplayCineCameraActor.h"
#include "ReplayCineCameraComponent.h"

AReplayCineCameraActor::AReplayCineCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UReplayCineCameraComponent>(TEXT("CameraComponent"))) {
    const FProperty* p_CameraComponent = GetClass()->FindPropertyByName("CameraComponent");
    (*p_CameraComponent->ContainerPtrToValuePtr<UCameraComponent*>(this))->SetupAttachment(RootComponent);
}

UReplayCineCameraComponent* AReplayCineCameraActor::BPF_GetReplayCineCameraComponent() const {
    return NULL;
}


