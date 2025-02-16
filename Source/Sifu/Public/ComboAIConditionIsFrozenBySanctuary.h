#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
#include "ComboAIConditionIsFrozenBySanctuary.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UComboAIConditionIsFrozenBySanctuary : public UAIComboCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInvert;
    
    UComboAIConditionIsFrozenBySanctuary();

};

