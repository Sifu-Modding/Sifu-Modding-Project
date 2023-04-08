#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CancelAnimContainerQuadrantArray.h"
#include "CancelDB.generated.h"

class UAvailabilityLayerData;
class UCurveFloat;

UCLASS(Blueprintable)
class SIFU_API UCancelDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCancelReorientationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_CancelReorientationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_CancelDisplacementCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCancelAnimContainerQuadrantArray m_AnimContainerArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCancelDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCancelGuardGaugeCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCancelHasImpactOnGuardGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCancelWindowDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvailabilityLayerData* m_CancelInterruptibleReleaseLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iFrameInterruptibleRelease;
    
    UCancelDB();
};

