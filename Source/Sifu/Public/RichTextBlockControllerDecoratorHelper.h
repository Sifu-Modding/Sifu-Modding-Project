#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputAction.h"
#include "EControllerIconAxisTypes.h"
#include "EControllerIconStyles.h"
#include "RichTextBlockControllerDecoratorHelper.generated.h"

UCLASS(BlueprintType)
class URichTextBlockControllerDecoratorHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URichTextBlockControllerDecoratorHelper();
    UFUNCTION(BlueprintPure)
    static FString BPF_GetInputActionValueName(InputAction _eAction);
    
    UFUNCTION(BlueprintPure)
    static FString BPF_GetControllerIconStylesValueName(EControllerIconStyles _eStyle);
    
    UFUNCTION(BlueprintPure)
    static FString BPF_GetControllerIconAxisTypesValueName(EControllerIconAxisTypes _eAxis);
    
};

