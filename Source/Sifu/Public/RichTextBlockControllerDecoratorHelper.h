#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EControllerIconAxisTypes.h"
#include "EControllerIconStyles.h"
#include "InputAction.h"
#include "RichTextBlockControllerDecoratorHelper.generated.h"

UCLASS(Blueprintable)
class URichTextBlockControllerDecoratorHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URichTextBlockControllerDecoratorHelper();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BPF_GetInputActionValueName(InputAction _eAction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BPF_GetControllerIconStylesValueName(EControllerIconStyles _eStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BPF_GetControllerIconAxisTypesValueName(EControllerIconAxisTypes _eAxis);
    
};

