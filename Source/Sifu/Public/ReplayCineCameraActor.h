#pragma once
#include "CoreMinimal.h"
#include "CineCameraActor.h"
#include "ReplayCineCameraActor.generated.h"

class UReplayCineCameraComponent;

UCLASS(Blueprintable)
class SIFU_API AReplayCineCameraActor : public ACineCameraActor {
    GENERATED_BODY()
public:
    AReplayCineCameraActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReplayCineCameraComponent* BPF_GetReplayCineCameraComponent() const;
    
};

