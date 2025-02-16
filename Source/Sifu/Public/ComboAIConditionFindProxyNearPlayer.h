#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
#include "ComboAIConditionFindProxyNearPlayer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UComboAIConditionFindProxyNearPlayer : public UAIComboCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinimumDistance;
    
    UComboAIConditionFindProxyNearPlayer();

};

