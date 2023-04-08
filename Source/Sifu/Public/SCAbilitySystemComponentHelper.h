#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "OnAbilitySystemComponentTagsChangedDelegateDelegate.h"
#include "SCAbilitySystemComponentHelper.generated.h"

UCLASS(Blueprintable)
class SIFU_API USCAbilitySystemComponentHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCAbilitySystemComponentHelper();
    UFUNCTION(BlueprintCallable)
    static void BPF_AssignOnPlayerTagsChangedDelegate(const FGameplayTag& _matching, const FOnAbilitySystemComponentTagsChangedDelegate& _delegate);
    
};

