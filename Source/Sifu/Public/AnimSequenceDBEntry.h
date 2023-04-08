#pragma once
#include "CoreMinimal.h"
#include "AnimSequenceDBEntry.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FAnimSequenceDBEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_AnimSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_Positions;
    
    SIFU_API FAnimSequenceDBEntry();
};

