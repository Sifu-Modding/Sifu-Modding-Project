#pragma once
#include "CoreMinimal.h"
#include "ReplayKeyDataFocusSettings.h"
#include "ReplayKeyDataLensSettings.h"
#include "ReplayKeyDataCameraSettings.generated.h"

USTRUCT(BlueprintType)
struct FReplayKeyDataCameraSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayKeyDataFocusSettings m_FocusSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayKeyDataLensSettings m_LensSettings;
    
    SIFU_API FReplayKeyDataCameraSettings();
};

