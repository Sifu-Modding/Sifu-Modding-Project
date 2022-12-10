#pragma once
#include "CoreMinimal.h"
#include "TrackingPayloadStartPlaying.generated.h"

USTRUCT()
struct FTrackingPayloadStartPlaying {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString m_AudioLanguage;
    
    UPROPERTY()
    FString m_TextLanguage;
    
    UPROPERTY()
    FString m_Platform;
    
    UPROPERTY()
    FString ver;
    
    UPROPERTY()
    FString difficulty;
    
    SIFU_API FTrackingPayloadStartPlaying();
};

