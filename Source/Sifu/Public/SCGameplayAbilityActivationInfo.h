#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayAbilitySpec.h"
#include "SCGameplayAbilityActorInfo.h"
#include "GameplayAbilitySpec.h"
#include "SCGameplayAbilityActivationInfo.generated.h"

class AActor;
class UAbilityPayload;

USTRUCT(BlueprintType)
struct SIFU_API FSCGameplayAbilityActivationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FGameplayAbilitySpecHandle m_Handle;
    
    UPROPERTY(BlueprintReadOnly)
    FSCGameplayAbilityActorInfo m_ActorInfos;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAbilityActivationInfo m_ActivationInfo;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayEventData m_EventData;
    
    UPROPERTY(BlueprintReadOnly)
    UAbilityPayload* m_Payload;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AActor> m_Target;
    
    FSCGameplayAbilityActivationInfo();
};

