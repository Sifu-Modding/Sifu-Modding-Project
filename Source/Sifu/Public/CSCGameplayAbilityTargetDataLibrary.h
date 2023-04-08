#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "CSCGameplayAbilityTargetDataLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class UCSCGameplayAbilityTargetDataLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCSCGameplayAbilityTargetDataLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAbilityTargetDataHandle BP_AbilityTargetDataWithTarget(AActor* _target);
    
};

