#pragma once
#include "CoreMinimal.h"
#include "InteractionHintInfo.generated.h"

USTRUCT(BlueprintType)
struct FInteractionHintInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsUsable;
    
    SIFU_API FInteractionHintInfo();
};

