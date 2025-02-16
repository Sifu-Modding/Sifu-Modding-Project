#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "BaseActorConditionInstance.h"
#include "InverseActorCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UInverseActorCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseActorConditionInstance m_condition;
    
    UInverseActorCondition();

};

