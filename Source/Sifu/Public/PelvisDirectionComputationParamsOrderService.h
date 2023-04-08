#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "PelvisDirectionComputationParams.h"
#include "PelvisDirectionComputationParamsOrderService.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UPelvisDirectionComputationParamsOrderService : public UOrderService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseLastFrameLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPelvisDirectionComputationParams m_Params;
    
public:
    UPelvisDirectionComputationParamsOrderService();
};

