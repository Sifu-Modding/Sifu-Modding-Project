#pragma once
#include "CoreMinimal.h"
#include "CineCameraComponent.h"
#include "CineCameraComponent.h"
#include "ReplayCameraSettings.generated.h"

USTRUCT(BlueprintType)
struct FReplayCameraSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FCameraLensSettings m_Lens;
    
    UPROPERTY(EditDefaultsOnly)
    FCameraFilmbackSettings m_Filmback;
    
    SIFU_API FReplayCameraSettings();
};

