#pragma once
#include "CoreMinimal.h"
#include "PlayOrderInfos.generated.h"

USTRUCT(BlueprintType)
struct FPlayOrderInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiAfterOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDelay;
    
    SIFU_API FPlayOrderInfos();
};

