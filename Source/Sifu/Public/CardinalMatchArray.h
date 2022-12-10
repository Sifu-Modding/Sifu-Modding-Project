#pragma once
#include "CoreMinimal.h"
#include "ESCCardinalPoints.h"
#include "CardinalMatchArray.generated.h"

USTRUCT(BlueprintType)
struct FCardinalMatchArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<ESCCardinalPoints> m_Array;
    
    SIFU_API FCardinalMatchArray();
};

