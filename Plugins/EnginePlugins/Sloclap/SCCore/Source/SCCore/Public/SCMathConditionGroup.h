#pragma once
#include "CoreMinimal.h"
#include "ESCMathConditionExpression.h"
#include "ESCMathConditionValueType.h"
#include "SCMathCondition.h"
#include "SCMathConditionGroup.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCMathConditionGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCMathConditionValueType m_eValueType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCMathConditionExpression m_eType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_SubGroupIndexes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSCMathCondition> m_Conditions;
    
    FSCMathConditionGroup();
};

