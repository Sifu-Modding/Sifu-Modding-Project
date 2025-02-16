#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
#include "InputAction.h"
#include "ComboAIConditionIsInputActionAvailable.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UComboAIConditionIsInputActionAvailable : public UAIComboCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    InputAction m_eInput;
    
public:
    UComboAIConditionIsInputActionAvailable();

};

