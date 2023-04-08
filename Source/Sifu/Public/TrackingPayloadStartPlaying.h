#pragma once
#include "CoreMinimal.h"
#include "TrackingPayloadStartPlaying.generated.h"

USTRUCT(BlueprintType)
struct FTrackingPayloadStartPlaying {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_AudioLanguage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_TextLanguage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString difficulty;
    
    SIFU_API FTrackingPayloadStartPlaying();
};

