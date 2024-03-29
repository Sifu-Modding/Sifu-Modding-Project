#pragma once
#include "CoreMinimal.h"
#include "AnimByHeight.h"
#include "AnimByCardinalThenHeight.generated.h"

USTRUCT(BlueprintType)
struct FAnimByCardinalThenHeight {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimByHeight m_Array[4];
    
    SIFU_API FAnimByCardinalThenHeight();
};

