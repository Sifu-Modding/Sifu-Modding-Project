#pragma once
#include "CoreMinimal.h"
#include "DisabledTargetInfos.h"
#include "OrderService.h"
#include "UntargettableOrderService.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UUntargettableOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDisabledTargetInfos> m_DisabledTargets;
    
    UUntargettableOrderService();
};

