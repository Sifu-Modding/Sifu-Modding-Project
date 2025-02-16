#pragma once
#include "CoreMinimal.h"
#include "EQuadrantTypes.h"
#include "OrderService.h"
#include "ForceQuadrantOrderService.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UForceQuadrantOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForceBackFrontOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForceFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuadrantTypes m_eQuadrantToTarget;
    
    UForceQuadrantOrderService();

};

