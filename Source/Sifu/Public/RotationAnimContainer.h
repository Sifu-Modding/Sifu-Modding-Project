#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "RotationAnimContainer.generated.h"

USTRUCT(BlueprintType)
struct FRotationAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_Anims[3];
    
    SIFU_API FRotationAnimContainer();
};

