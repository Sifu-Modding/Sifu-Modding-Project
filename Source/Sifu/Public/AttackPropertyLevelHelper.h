#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AttackPropertyLevel.h"
#include "EHitBoxAttackProperties.h"
#include "AttackPropertyLevelHelper.generated.h"

UCLASS(BlueprintType)
class SIFU_API UAttackPropertyLevelHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAttackPropertyLevelHelper();
    UFUNCTION(BlueprintPure)
    static int32 BPF_GetAttackPropertyLevel(const FAttackPropertyLevel& _attackPropertyLevel, EHitBoxAttackProperties _eProperty);
    
};

