#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AttackTicketConfig.h"
#include "AIAttackTicketData.generated.h"

UCLASS()
class SIFU_API UAIAttackTicketData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAttackTicketConfig m_Config;
    
    UPROPERTY()
    int32 m_iSerializeVersion;
    
    UAIAttackTicketData();
};

