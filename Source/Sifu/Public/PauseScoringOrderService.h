#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "PauseScoringOrderService.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UPauseScoringOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPauseEfficiency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRestartEfficiencyTimers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPauseBonusMalus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRestartBonusMalusTimers;
    
    UPauseScoringOrderService();
};

