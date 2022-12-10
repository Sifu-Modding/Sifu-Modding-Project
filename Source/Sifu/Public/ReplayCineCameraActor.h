#pragma once
#include "CoreMinimal.h"
#include "CineCameraActor.h"
#include "ReplayCineCameraActor.generated.h"

class UReplayCineCameraComponent;

UCLASS()
class SIFU_API AReplayCineCameraActor : public ACineCameraActor {
    GENERATED_BODY()
public:
   /* AReplayCineCameraActor();*/
    UFUNCTION(BlueprintPure)
    UReplayCineCameraComponent* BPF_GetReplayCineCameraComponent() const;
    
};

