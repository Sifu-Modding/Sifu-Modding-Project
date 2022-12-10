#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "CSCGameplayAbilityTargetDataLibrary.generated.h"

class AActor;

UCLASS(BlueprintType)
class UCSCGameplayAbilityTargetDataLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCSCGameplayAbilityTargetDataLibrary();
    UFUNCTION(BlueprintPure)
    static FGameplayAbilityTargetDataHandle BP_AbilityTargetDataWithTarget(AActor* _target);
    
};

