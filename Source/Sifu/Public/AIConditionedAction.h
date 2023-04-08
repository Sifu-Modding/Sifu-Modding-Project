#pragma once
#include "CoreMinimal.h"
#include "SCAiActionClassInstance.h"
#include "AIConditionClassInstance.h"
#include "Templates/SubclassOf.h"
#include "AIConditionedAction.generated.h"

class UComboTransitionCondition;
class USCAiAction;

USTRUCT(BlueprintType)
struct SIFU_API FAIConditionedAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UComboTransitionCondition*> m_Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USCAiAction> m_ActionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIConditionClassInstance> m_ConditionsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCAiActionClassInstance m_Action;
    
    FAIConditionedAction();
};

