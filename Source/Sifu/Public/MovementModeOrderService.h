#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "OrderService.h"
#include "MovementModeOrderService.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UMovementModeOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> m_eMovementMode;
    
    UMovementModeOrderService();
};

