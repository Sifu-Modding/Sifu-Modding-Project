#pragma once
#include "CoreMinimal.h"
#include "AttackDataRow.h"
#include "AttackRequest.h"
#include "NetOrderStruct.h"
#include "NetOrderStructAttack.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructAttack : public FNetOrderStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackRequest m_AttackRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackDataRow m_AttackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsMirrorAnimToUse;
    
    SIFU_API FNetOrderStructAttack();
};

