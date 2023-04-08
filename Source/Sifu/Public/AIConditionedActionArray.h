#pragma once
#include "CoreMinimal.h"
#include "AIConditionedAction.h"
#include "AIConditionedActionArray.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FAIConditionedActionArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIConditionedAction> m_Actions;
    
    FAIConditionedActionArray();
};

