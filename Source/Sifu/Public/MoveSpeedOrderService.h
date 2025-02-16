#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "MoveSpeedOrderService.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UMoveSpeedOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_CurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSpeedStateBlendDuration;
    
    UMoveSpeedOrderService();

};

