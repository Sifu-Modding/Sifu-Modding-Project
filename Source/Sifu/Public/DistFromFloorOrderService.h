#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "DistFromFloorOrderService.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UDistFromFloorOrderService : public UOrderService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinFloorDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxFloorDist;
    
public:
    UDistFromFloorOrderService();

};

