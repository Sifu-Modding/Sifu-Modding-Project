#pragma once
#include "CoreMinimal.h"
#include "EAIJokerBehaviorAgainstAttacks.h"
#include "SCAITicketEnum.h"
#include "AIAttackJokerSituationConfig.generated.h"

USTRUCT(BlueprintType)
struct FAIAttackJokerSituationConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fJokerDuration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCooldown;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bShouldBeDeactivatedByTargetAttack;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIJokerBehaviorAgainstAttacks m_eJokerBehaviorOnAIAttacks;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCAITicketEnum m_FallbackTicket;
    
    SIFU_API FAIAttackJokerSituationConfig();
};

