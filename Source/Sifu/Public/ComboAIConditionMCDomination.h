#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
#include "ComboAIConditionMCDomination.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UComboAIConditionMCDomination : public UAIComboCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_uiMCDominationFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iSerializeVersion;
    
    UComboAIConditionMCDomination();
};

