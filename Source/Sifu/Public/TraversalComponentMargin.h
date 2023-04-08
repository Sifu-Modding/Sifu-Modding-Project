#pragma once
#include "CoreMinimal.h"
#include "TraversalComponentMargin.generated.h"

USTRUCT(BlueprintType)
struct FTraversalComponentMargin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fNegAxisMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPosAxisMargin;
    
    SIFU_API FTraversalComponentMargin();
};

