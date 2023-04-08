#pragma once
#include "CoreMinimal.h"
#include "SCFloatRange.generated.h"

USTRUCT(BlueprintType)
struct FSCFloatRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMax;
    
    SIFU_API FSCFloatRange();
};

