#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
#include "AIConditionClassInstance.h"
#include "EComboAIConditionGroupOperator.h"
#include "ComboAIConditionGroup.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UComboAIConditionGroup : public UAIComboCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComboAIConditionGroupOperator m_eOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForceTestAllConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIConditionClassInstance> m_Conditions;
    
    UComboAIConditionGroup();
};

