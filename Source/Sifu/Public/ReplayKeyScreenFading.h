#pragma once
#include "CoreMinimal.h"
#include "EReplayKeyFadeType.h"
#include "ReplayKeyScreenFading.generated.h"

USTRUCT(BlueprintType)
struct FReplayKeyScreenFading {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReplayKeyFadeType m_bFadingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFadingTime;
    
    SIFU_API FReplayKeyScreenFading();
};

