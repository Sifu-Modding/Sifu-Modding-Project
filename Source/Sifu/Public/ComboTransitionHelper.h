#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EComboTransition.h"
#include "InputAction.h"
#include "ComboTransitionHelper.generated.h"

UCLASS(Blueprintable)
class SIFU_API UComboTransitionHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UComboTransitionHelper();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EComboTransition BPF_GetTransitionFromInput(InputAction _eInput);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static InputAction BPF_GetInputFromTransition(EComboTransition _eTransition);
    
};

