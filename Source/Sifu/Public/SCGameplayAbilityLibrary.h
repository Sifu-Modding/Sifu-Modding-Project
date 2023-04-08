#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AttributeSet.h"
#include "SCGameplayAbilityLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class USCGameplayAbilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCGameplayAbilityLibrary();
    UFUNCTION(BlueprintCallable)
    static void BPF_SetFloatAttribute(const AActor* _actor, FGameplayAttribute _attribute, float _fDefaultValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BPF_GetFloatAttribute(const AActor* _actor, FGameplayAttribute _attribute, float _fDefaultValue);
    
};

