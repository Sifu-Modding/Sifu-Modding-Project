#pragma once
#include "CoreMinimal.h"
#include "EOrderServiceFreezeFrameHandling.h"
#include "OrderServiceClassInstance.h"
#include "OrderServiceFrameRange.h"
#include "Templates/SubclassOf.h"
#include "OrderServiceInfos.generated.h"

class UOrderServiceActivationConditions;

USTRUCT(BlueprintType)
struct SIFU_API FOrderServiceInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOrderServiceFreezeFrameHandling m_eFreezeFrameHandling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bActivateFromFrameRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bActivateWhenMissingFromAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOrderServiceActivationConditions> m_activationCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInvertCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOrderServiceFrameRange m_FrameRangeInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOrderServiceClassInstance m_OrderServiceInstance;
    
    FOrderServiceInfos();
};

