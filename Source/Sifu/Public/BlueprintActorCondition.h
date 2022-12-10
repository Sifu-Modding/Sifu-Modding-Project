#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "BlueprintActorCondition.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class SIFU_API UBlueprintActorCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UBlueprintActorCondition();
    UFUNCTION(BlueprintNativeEvent)
    bool BPE_Evaluate(const AActor* _actor) const;
    
};

