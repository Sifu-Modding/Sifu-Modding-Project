#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CameraSafePointPlacement.generated.h"

USTRUCT(BlueprintType)
struct FCameraSafePointPlacement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_fSafePointDistRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOrientateTowardsCamForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseDeadZoneBissector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSafeZoneAngleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBlendInTime;
    
    SIFU_API FCameraSafePointPlacement();
};

