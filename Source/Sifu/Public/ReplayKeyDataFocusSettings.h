#pragma once
#include "CoreMinimal.h"
#include "EReplayKeyCameraFocus.h"
#include "ReplayKeyDataWorldTarget.h"
#include "ReplayKeyDataFocusSettings.generated.h"

USTRUCT(BlueprintType)
struct FReplayKeyDataFocusSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReplayKeyCameraFocus m_eFocusMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAperture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFocusDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayKeyDataWorldTarget m_Target;
    
    SIFU_API FReplayKeyDataFocusSettings();
};

