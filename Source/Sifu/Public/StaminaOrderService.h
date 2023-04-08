#pragma once
#include "CoreMinimal.h"
#include "EStaminaImpactType.h"
#include "OrderService.h"
#include "StaminaOrderService.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UStaminaOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStaminaImpactType m_eImpactOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fImpactCostOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStaminaImpactType m_eImpactOnStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fImpactCostOnStop;
    
    UStaminaOrderService();
};

