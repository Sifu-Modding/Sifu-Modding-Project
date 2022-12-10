#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "SCGameplayAbilityActorInfo.generated.h"

USTRUCT(BlueprintType)
struct FSCGameplayAbilityActorInfo : public FGameplayAbilityActorInfo {
    GENERATED_BODY()
public:
    SIFU_API FSCGameplayAbilityActorInfo();
};

