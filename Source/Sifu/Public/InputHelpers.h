#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputAction.h"
#include "InputHelpers.generated.h"

class ASCPlayerController;

UCLASS(Blueprintable)
class SIFU_API UInputHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInputHelpers();
    UFUNCTION(BlueprintCallable)
    static float BPF_GetInputActionPressedDurationNormalized(ASCPlayerController* _playerController, InputAction _eInputAction);
    
};

