#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "QuadrantAnimContainer.generated.h"

USTRUCT(BlueprintType)
struct FQuadrantAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_Anims[4];
    
    SIFU_API FQuadrantAnimContainer();
};

