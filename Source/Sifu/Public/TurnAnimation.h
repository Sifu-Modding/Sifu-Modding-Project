#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "ESCRotationWay.h"
#include "TurnAnimation.generated.h"

USTRUCT(BlueprintType)
struct FTurnAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_animContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCRotationWay m_eRotationWay;
    
    SIFU_API FTurnAnimation();
};

