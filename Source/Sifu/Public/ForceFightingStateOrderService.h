#pragma once
#include "CoreMinimal.h"
#include "EFightingState.h"
#include "OrderService.h"
#include "ForceFightingStateOrderService.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UForceFightingStateOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFightingState m_eFightingState;
    
    UForceFightingStateOrderService();

};

