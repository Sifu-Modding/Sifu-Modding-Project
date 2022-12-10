#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "CardinalAnimContainer.generated.h"

USTRUCT(BlueprintType)
struct FCardinalAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimContainer m_Anims[4];
    
    SIFU_API FCardinalAnimContainer();
};

