#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "SCGameplayAbilityTargetData.generated.h"

class AActor;

USTRUCT()
struct FSCGameplayAbilityTargetData : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<AActor> m_Target;
    
    SIFU_API FSCGameplayAbilityTargetData();
};

