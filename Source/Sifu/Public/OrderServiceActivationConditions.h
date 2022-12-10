#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OrderServiceActivationConditions.generated.h"

class ABaseCharacter;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SIFU_API UOrderServiceActivationConditions : public UObject {
    GENERATED_BODY()
public:
    UOrderServiceActivationConditions();
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool BPE_CanActivate(uint8 _uiOrderId, const ABaseCharacter* _owner) const;
    
};

