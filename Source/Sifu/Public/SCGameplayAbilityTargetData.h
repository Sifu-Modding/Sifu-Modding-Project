#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "SCGameplayAbilityTargetData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSCGameplayAbilityTargetData : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> m_Target;
    
    SIFU_API FSCGameplayAbilityTargetData();
};

