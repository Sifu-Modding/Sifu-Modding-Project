#pragma once
#include "CoreMinimal.h"
#include "DeltaTransformAudioStep.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FDeltaTransformAudioStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinDeltaAngle;
    
   /* UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* m_akEvent;*/
    
    SIFU_API FDeltaTransformAudioStep();
};

