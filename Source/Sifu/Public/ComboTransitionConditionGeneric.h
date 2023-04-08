#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetConditionInstance.h"
#include "ComboTransitionCondition.h"
#include "ComboTransitionConditionGeneric.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UComboTransitionConditionGeneric : public UComboTransitionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseActorTargetConditionInstance m_condition;
    
    UComboTransitionConditionGeneric();
};

