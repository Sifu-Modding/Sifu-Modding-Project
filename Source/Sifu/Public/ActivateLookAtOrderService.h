#pragma once
#include "CoreMinimal.h"
#include "LookAtLimits.h"
#include "OrderService.h"
#include "ActivateLookAtOrderService.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UActivateLookAtOrderService : public UOrderService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLookAtLimits m_lookAtLimit;
    
public:
    UActivateLookAtOrderService();

};

