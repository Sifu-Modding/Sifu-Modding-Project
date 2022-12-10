#pragma once
#include "CoreMinimal.h"
#include "TimerAndOffset.h"
#include "AITicketCooldowns.generated.h"

USTRUCT(BlueprintType)
struct FAITicketCooldowns {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FTimerAndOffset m_Cooldowns[4];
    
    SIFU_API FAITicketCooldowns();
};

