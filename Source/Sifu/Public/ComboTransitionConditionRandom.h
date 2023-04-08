#pragma once
#include "CoreMinimal.h"
#include "ComboTransitionCondition.h"
#include "ComboTransitionConditionRandom.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UComboTransitionConditionRandom : public UComboTransitionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTrueProbability;
    
    UComboTransitionConditionRandom();
};

