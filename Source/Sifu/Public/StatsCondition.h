#pragma once
#include "CoreMinimal.h"
#include "SCMathExpressionInteger.h"
#include "BaseActorCondition.h"
#include "ECharacterStat.h"
#include "StatsCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UStatsCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterStat m_eStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCMathExpressionInteger m_MathExpression;
    
    UStatsCondition();
};

