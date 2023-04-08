#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetCondition.h"
#include "BaseActorTargetConditionInstance.h"
#include "InverseActorTargetCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UInverseActorTargetCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseActorTargetConditionInstance m_condition;
    
    UInverseActorTargetCondition();
};

