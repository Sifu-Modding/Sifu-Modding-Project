#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "BaseActorConditionInstance.h"
#include "EConditionGroupOperators.h"
#include "GroupCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UGroupCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConditionGroupOperators m_eOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBaseActorConditionInstance> m_Conditions;
    
    UGroupCondition();
};

