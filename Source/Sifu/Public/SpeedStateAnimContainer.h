#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "SpeedStateAnimContainer.generated.h"

USTRUCT(BlueprintType)
struct FSpeedStateAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_Anims[4];
    
    SIFU_API FSpeedStateAnimContainer();
};

