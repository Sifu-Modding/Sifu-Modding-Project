#pragma once
#include "CoreMinimal.h"
#include "RotationAnimContainer.h"
#include "OrientedRotationAnimContainer.generated.h"

USTRUCT(BlueprintType)
struct FOrientedRotationAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotationAnimContainer m_leftAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotationAnimContainer m_rightAnims;
    
    SIFU_API FOrientedRotationAnimContainer();
};

