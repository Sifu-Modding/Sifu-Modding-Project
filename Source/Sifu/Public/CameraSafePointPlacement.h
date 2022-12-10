#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CameraSafePointPlacement.generated.h"

USTRUCT(BlueprintType)
struct FCameraSafePointPlacement {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatRange m_fSafePointDistRange;
    
    UPROPERTY(EditAnywhere)
    bool m_bOrientateTowardsCamForward;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseDeadZoneBissector;
    
    UPROPERTY(EditAnywhere)
    float m_fSafeZoneAngleOffset;
    
    UPROPERTY(EditAnywhere)
    float m_fBlendInTime;
    
    SIFU_API FCameraSafePointPlacement();
};

