#pragma once
#include "CoreMinimal.h"
#include "BaseUseCondition.h"
#include "EDefenseTactics.h"
#include "DefenseTacticUseCondition.generated.h"

UCLASS(Abstract, Blueprintable)
class SIFU_API UDefenseTacticUseCondition : public UBaseUseCondition {
    GENERATED_BODY()
public:
    UDefenseTacticUseCondition();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EDefenseTactics BPE_SelectBestDefenseTactic(bool& _bOutTriggerCounter);
    
};

