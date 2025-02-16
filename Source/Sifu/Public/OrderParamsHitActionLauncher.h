#pragma once
#include "CoreMinimal.h"
#include "HitActionLauncher.h"
#include "UOrderParamsClassInstance.h"
#include "OrderParamsHitActionLauncher.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UOrderParamsHitActionLauncher : public UHitActionLauncher {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUOrderParamsClassInstance m_OrderParamsInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bApplyDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bNotifyHitted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bApplyFreezeFrame;
    
    UOrderParamsHitActionLauncher();

};

