#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpec.h"
#include "GameplayAbilitySpec.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "SCGameplayAbilityActorInfo.h"
#include "SCGameplayAbilityActivationInfo.generated.h"

class AActor;
class UAbilityPayload;

USTRUCT(BlueprintType)
struct SIFU_API FSCGameplayAbilityActivationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAbilitySpecHandle m_Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCGameplayAbilityActorInfo m_ActorInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAbilityActivationInfo m_ActivationInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEventData m_EventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilityPayload* m_Payload;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> m_Target;
    
    FSCGameplayAbilityActivationInfo();
};

