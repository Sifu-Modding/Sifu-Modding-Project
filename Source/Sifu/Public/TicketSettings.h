#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AIAttackJokerSituationConfigsPerDominationStep.h"
#include "EAIAttackTicketJokerSituation.h"
#include "EAIWuguanTicketEvaluation.h"
#include "SCAITicketEnum.h"
#include "TicketSettings.generated.h"

class UAIAttackTicketData;
class UOrderDB;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=WuguanAI)
class SIFU_API UTicketSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iSerializeVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAIWuguanTicketEvaluation, float> m_AttackTicketScoreFactors;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAIWuguanTicketEvaluation, float> m_PositionTicketScoreFactors;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAIWuguanTicketEvaluation, float> m_WeaponTicketScoreFactors;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAIAttackTicketJokerSituation, FAIAttackJokerSituationConfigsPerDominationStep> m_AttackTicketJokerSituationsConfigs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<UOrderDB>, EAIAttackTicketJokerSituation> m_OrderDBToJokerSituationMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bActivateWeaponTicketManager;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDefaultWeaponTicketCooldown;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWeaponTicketCooldownIncreaseValue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWeaponTicketCooldownDecreaseValue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDefaultMaxDistanceToWeapon;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinDistanceForCandidateAttackCancel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinDistanceForAttackTicketTimeOut;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPathHeightTolerance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPathFallHeightTolerance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPathHeightDifferenceWeight;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPathNavlinkWeight;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSCAITicketEnum, TSoftObjectPtr<UAIAttackTicketData>> m_AttackTicketsMap;
    
public:
    UTicketSettings();
};

