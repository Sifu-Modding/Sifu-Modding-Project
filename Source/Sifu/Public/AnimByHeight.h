#pragma once
#include "CoreMinimal.h"
#include "AnimByHeight.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FAnimByHeight {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_Array[3];
    
    SIFU_API FAnimByHeight();
};

