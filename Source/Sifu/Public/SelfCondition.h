#pragma once
#include "CoreMinimal.h"
#include "BaseActorConditionInstance.h"
#include "BaseActorTargetCondition.h"
#include "SelfCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API USelfCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseActorConditionInstance m_condition;
    
    USelfCondition();

};

