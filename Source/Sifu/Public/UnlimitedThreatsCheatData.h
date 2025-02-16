#pragma once
#include "CoreMinimal.h"
#include "CheatData.h"
#include "AIAttackJokerSituationConfigsPerDominationStep.h"
#include "EAIAttackTicketJokerSituation.h"
#include "SCAITicketEnum.h"
#include "UnlimitedThreatsCheatData.generated.h"

class UAIAttackTicketData;

UCLASS(Blueprintable)
class SIFU_API UUnlimitedThreatsCheatData : public UCheatData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSCAITicketEnum, TSoftObjectPtr<UAIAttackTicketData>> m_AttackTicketsMapToOverride;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MaxIndirectOpponentPerDominationGauge[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAIAttackTicketJokerSituation, FAIAttackJokerSituationConfigsPerDominationStep> m_AttackTicketJokerSituationsOverride;
    
public:
    UUnlimitedThreatsCheatData();

};

