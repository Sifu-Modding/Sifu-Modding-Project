#pragma once
#include "CoreMinimal.h"
#include "ESCMathConditionValueType.h"
#include "SCMathConditionGroup.h"
#include "SCMathExpression.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCMathExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCMathConditionValueType m_eValueType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSCMathConditionGroup> m_ConditionGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxDepth;
    
    FSCMathExpression();
};

