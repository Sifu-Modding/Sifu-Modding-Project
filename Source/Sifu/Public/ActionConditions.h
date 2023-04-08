#pragma once
#include "CoreMinimal.h"
#include "ActionConditions.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FActionConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowedOnEmptyGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowedOnBrokenGuard;
    
    FActionConditions();
};

