#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
#include "Templates/SubclassOf.h"
#include "ComboAIConditionCanPerformAction.generated.h"

class USCAiAction;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UComboAIConditionCanPerformAction : public UAIComboCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USCAiAction> m_Action;
    
public:
    UComboAIConditionCanPerformAction();

};

