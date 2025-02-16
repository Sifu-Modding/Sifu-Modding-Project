#pragma once
#include "CoreMinimal.h"
#include "ESpeedState.h"
#include "OrderService.h"
#include "ForceSpeedStateOrderService.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UForceSpeedStateOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpeedState m_eForcedSpeedState;
    
    UForceSpeedStateOrderService();

};

