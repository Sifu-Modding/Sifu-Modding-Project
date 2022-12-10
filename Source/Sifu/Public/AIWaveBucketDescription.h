#pragma once
#include "CoreMinimal.h"
#include "AIWaveBucketDescription.generated.h"

USTRUCT(BlueprintType)
struct FAIWaveBucketDescription {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_iNumberInBucket;
    
    UPROPERTY(EditAnywhere)
    int32 m_iMaxInCombat;
    
    SIFU_API FAIWaveBucketDescription();
};

