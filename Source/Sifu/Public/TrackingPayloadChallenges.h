#pragma once
#include "CoreMinimal.h"
#include "TrackingPayloadChallenges.generated.h"

USTRUCT(BlueprintType)
struct FTrackingPayloadChallenges {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_sChallengeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iHighScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiNumberStars;
    
    SIFU_API FTrackingPayloadChallenges();
};

