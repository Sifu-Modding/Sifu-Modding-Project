#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "UntargettableByCameraOrderService.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UUntargettableByCameraOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UUntargettableByCameraOrderService();
};

