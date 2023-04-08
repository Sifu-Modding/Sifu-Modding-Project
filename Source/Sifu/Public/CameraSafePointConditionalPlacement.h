#pragma once
#include "CoreMinimal.h"
#include "CameraSafePointCondition.h"
#include "CameraSafePointPlacement.h"
#include "CameraSafePointConditionalPlacement.generated.h"

USTRUCT(BlueprintType)
struct FCameraSafePointConditionalPlacement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraSafePointCondition m_condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraSafePointPlacement m_placement;
    
    SIFU_API FCameraSafePointConditionalPlacement();
};

