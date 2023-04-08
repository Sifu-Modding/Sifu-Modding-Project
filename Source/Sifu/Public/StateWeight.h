#pragma once
#include "CoreMinimal.h"
#include "StateWeight.generated.h"

USTRUCT(BlueprintType)
struct FStateWeight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTargetWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fInDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fOutDuration;
    
    SIFU_API FStateWeight();
};

