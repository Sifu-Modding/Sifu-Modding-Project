#pragma once
#include "CoreMinimal.h"
#include "EAIDefendedAttackType.h"
#include "AIDefenseTargetAttackInfos.generated.h"

USTRUCT(BlueprintType)
struct FAIDefenseTargetAttackInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIDefendedAttackType m_eType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiHitBoxIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiOrderID;
    
    SIFU_API FAIDefenseTargetAttackInfos();
};

