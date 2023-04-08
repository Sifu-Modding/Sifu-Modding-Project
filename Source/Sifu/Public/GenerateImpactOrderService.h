#pragma once
#include "CoreMinimal.h"
#include "HitBox.h"
#include "OrderService.h"
#include "GenerateImpactOrderService.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UGenerateImpactOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitBox m_HitGenerated;
    
    UGenerateImpactOrderService();
};

