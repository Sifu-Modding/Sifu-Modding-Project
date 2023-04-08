#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AITicketCooldowns.h"
#include "EPassiveTicketBehaviorAginstJoker.h"
#include "ESCAICombatRoles.h"
#include "FAttackTicketBehavior.h"
#include "SCAITicketEnum.h"
#include "TimerAndOffset.h"
#include "AttackTicketConfig.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FAttackTicketConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackTicketBehavior m_eBehavior;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bTicketIsAlwaysAvailable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCAICombatRoles m_eCombatRole;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_eCombatRolesMask;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iCount;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerAndOffset m_Cooldowns[4];
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUsePerDifficultyCounters;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iCountPerDifficulty[3];
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAITicketCooldowns m_CooldownsPerDifficulty[3];
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCooldownOffsetOnSynchedFires;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCooldownSynchFiresTolerance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fForcedCooldownOnDirectOpponentDeath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsRepeated;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Range m_Repeats;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseMinDistanceToPosition;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinDistanceToPosition;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableIneligibleTimerOnRelease;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsNotUsedInCombo;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMoveToTimeoutValue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPassiveTicketBehaviorAginstJoker m_eBehaviorAgainstJoker;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCAITicketEnum m_FallbackTicket;
    
    FAttackTicketConfig();
};

