#pragma once
#include "CoreMinimal.h"
#include "EALBinaryOperation.h"
#include "OrderService.h"
#include "AvailabilityLayerOrderService.generated.h"

class UAvailabilityLayerData;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UAvailabilityLayerOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvailabilityLayerData* m_availabilityLayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EALBinaryOperation m_eOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iPriority;
    
    UAvailabilityLayerOrderService();
};

