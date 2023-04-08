#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetCondition.h"
#include "BaseActorTargetConditionInstance.h"
#include "EConditionGroupOperators.h"
#include "GroupTargetCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UGroupTargetCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConditionGroupOperators m_eOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBaseActorTargetConditionInstance> m_Conditions;
    
    UGroupTargetCondition();
};

