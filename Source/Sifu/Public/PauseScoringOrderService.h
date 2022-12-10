#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "PauseScoringOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UPauseScoringOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bPauseEfficiency;
    
    UPROPERTY(EditAnywhere)
    bool m_bRestartEfficiencyTimers;
    
    UPROPERTY(EditAnywhere)
    bool m_bPauseBonusMalus;
    
    UPROPERTY(EditAnywhere)
    bool m_bRestartBonusMalusTimers;
    
    UPauseScoringOrderService();
};

