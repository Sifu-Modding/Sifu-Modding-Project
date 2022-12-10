#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
#include "ComboAIConditionMCDomination.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UComboAIConditionMCDomination : public UAIComboCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 m_uiMCDominationFlags;
    
    UPROPERTY()
    int32 m_iSerializeVersion;
    
    UComboAIConditionMCDomination();
};

