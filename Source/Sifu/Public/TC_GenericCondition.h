#pragma once
#include "CoreMinimal.h"
#include "EvaluateTargetCondition.h"
#include "BaseActorTargetConditionInstance.h"
#include "TC_GenericCondition.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UTC_GenericCondition : public UEvaluateTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBaseActorTargetConditionInstance m_condition;
    
    UTC_GenericCondition();
};

