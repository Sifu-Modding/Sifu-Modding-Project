#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetConditionInstance.h"
#include "EvaluateTargetCondition.h"
#include "TC_GenericCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UTC_GenericCondition : public UEvaluateTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseActorTargetConditionInstance m_condition;
    
    UTC_GenericCondition();

};

