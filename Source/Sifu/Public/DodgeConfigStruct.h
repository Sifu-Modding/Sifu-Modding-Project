#pragma once
#include "CoreMinimal.h"
#include "ESCCardinalPoints.h"
#include "DodgeConfigStruct.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FDodgeConfigStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinDuration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxDurationArray[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMovementLengthArray[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOverrideAnimDynamicByCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_OverrideDodgeDynamicCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iFrameBuildUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iNbFrameDodgeWindowMiddle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iFrameInterruptibleRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iFrameRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHasImpactOnGuardGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGuardGaugeCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForceDirOnNeutralDodge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCCardinalPoints m_eForcedCardinalDirOnNeutralDodge;
    
    SIFU_API FDodgeConfigStruct();
};

