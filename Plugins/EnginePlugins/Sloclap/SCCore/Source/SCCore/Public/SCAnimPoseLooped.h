#pragma once
#include "CoreMinimal.h"
#include "SCPoseAssetSelection.h"
#include "UObject/NoExportTypes.h"
#include "SCAnimPoseLooped.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FSCAnimPoseLooped {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSCPoseAssetSelection m_Pose;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_WeightCurve;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_RandomDelay;
    
    SCCORE_API FSCAnimPoseLooped();
};

