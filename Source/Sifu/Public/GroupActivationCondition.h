#pragma once
#include "CoreMinimal.h"
#include "EConditionGroupOperators.h"
#include "OrderServiceActivationConditions.h"
#include "GroupActivationCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UGroupActivationCondition : public UOrderServiceActivationConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConditionGroupOperators m_eOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UOrderServiceActivationConditions*> m_Conditions;
    
    UGroupActivationCondition();
};

