#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "DisableWalkOffLedgesOrderService.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UDisableWalkOffLedgesOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UDisableWalkOffLedgesOrderService();
};

