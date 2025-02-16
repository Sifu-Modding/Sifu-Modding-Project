#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "DisableCollisionOrderService.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UDisableCollisionOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWithTargetOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCollisionWithStaticMeshOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bBlockTargettedAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableCollisionsOnLastThreat;
    
    UDisableCollisionOrderService();

};

