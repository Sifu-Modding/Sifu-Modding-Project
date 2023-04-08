#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OrderServiceFrameRangeRequest.h"
#include "Templates/SubclassOf.h"
#include "UseFrameRangeFromOrderService.generated.h"

class UOrderService;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UUseFrameRangeFromOrderService : public UOrderServiceFrameRangeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOnTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_DefaultRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bKeepDefaultLowerRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bKeepDefaultUpperRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOrderService> m_OrderSerice;
    
    UUseFrameRangeFromOrderService();
};

