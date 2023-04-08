#pragma once
#include "CoreMinimal.h"
#include "TimerAndOffset.generated.h"

USTRUCT(BlueprintType)
struct FTimerAndOffset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fOffset;
    
    SIFU_API FTimerAndOffset();
};

