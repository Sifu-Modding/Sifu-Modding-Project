#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "MovementCapsuleOrderService.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UMovementCapsuleOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTargetHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTargetRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_Blend;
    
    UMovementCapsuleOrderService();
};

