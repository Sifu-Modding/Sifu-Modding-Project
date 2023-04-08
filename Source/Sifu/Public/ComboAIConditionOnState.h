#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIComboCondition.h"
#include "ComboAIConditionOnState.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SIFU_API UComboAIConditionOnState : public UAIComboCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_RandomDelay;
    
public:
    UComboAIConditionOnState();
};

