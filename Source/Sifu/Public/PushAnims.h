#pragma once
#include "CoreMinimal.h"
#include "ESCCardinalPoints.h"
#include "AnimContainer.h"
#include "PushAnims.generated.h"

USTRUCT(BlueprintType)
struct FPushAnims {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ESCCardinalPoints, FAnimContainer> m_GrabberAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ESCCardinalPoints, FAnimContainer> m_GrabbedAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bSouthMirrorPositiveAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bNorthMirrorPositiveAngle;
    
    SIFU_API FPushAnims();
};

