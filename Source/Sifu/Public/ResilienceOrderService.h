#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "ResilienceOrderService.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UResilienceOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iBonus;
    
    UResilienceOrderService();
};

