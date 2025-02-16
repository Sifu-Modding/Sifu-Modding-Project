#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InputAction.h"
#include "InputPad.generated.h"

class UGenericInputData;

UCLASS(Blueprintable)
class SIFU_API UInputPad : public UObject {
    GENERATED_BODY()
public:
    UInputPad();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGenericInputData* BPF_GetInputDataForAction(InputAction _eAction) const;
    
};

