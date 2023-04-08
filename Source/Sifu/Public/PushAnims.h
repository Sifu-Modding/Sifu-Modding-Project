#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "ESCCardinalPoints.h"
#include "PushAnims.generated.h"

USTRUCT(BlueprintType)
struct FPushAnims {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESCCardinalPoints, FAnimContainer> m_GrabberAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESCCardinalPoints, FAnimContainer> m_GrabbedAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSouthMirrorPositiveAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bNorthMirrorPositiveAngle;
    
    SIFU_API FPushAnims();
};

