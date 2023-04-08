#pragma once
#include "CoreMinimal.h"
#include "CineCameraComponent.h"
#include "CineCameraComponent.h"
#include "ReplayCameraSettings.generated.h"

USTRUCT(BlueprintType)
struct FReplayCameraSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraLensSettings m_Lens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraFilmbackSettings m_Filmback;
    
    SIFU_API FReplayCameraSettings();
};

