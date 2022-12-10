#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "Engine/EngineTypes.h"
#include "MovementModeOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UMovementModeOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMovementMode> m_eMovementMode;
    
    UMovementModeOrderService();
};

