#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HittedOrderServiceInfos.generated.h"

class UOrderService;

USTRUCT(BlueprintType)
struct SIFU_API FHittedOrderServiceInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStartDelayFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseCustomEnabledDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEnabledFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOrderService> m_OrderService;
    
    FHittedOrderServiceInfos();
};

