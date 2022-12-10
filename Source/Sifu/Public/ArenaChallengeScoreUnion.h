#pragma once
#include "CoreMinimal.h"
#include "ArenaChallengeScoreUnion.generated.h"

USTRUCT(BlueprintType)
struct FArenaChallengeScoreUnion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iPointScore;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fTimeScore;
    
    SIFU_API FArenaChallengeScoreUnion();
};

