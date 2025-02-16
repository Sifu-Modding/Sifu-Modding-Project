#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "DisableCamFadeOnOwnerOrderService.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UDisableCamFadeOnOwnerOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UDisableCamFadeOnOwnerOrderService();

};

