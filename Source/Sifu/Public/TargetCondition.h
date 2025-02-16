#pragma once
#include "CoreMinimal.h"
#include "BaseActorConditionInstance.h"
#include "BaseActorTargetCondition.h"
#include "TargetCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UTargetCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseActorConditionInstance m_condition;
    
    UTargetCondition();

};

