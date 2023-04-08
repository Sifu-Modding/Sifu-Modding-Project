#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AttackTicketConfig.h"
#include "AIAttackTicketData.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAIAttackTicketData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackTicketConfig m_Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iSerializeVersion;
    
    UAIAttackTicketData();
};

