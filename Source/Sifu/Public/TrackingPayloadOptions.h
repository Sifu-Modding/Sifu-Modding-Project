#pragma once
#include "CoreMinimal.h"
#include "TrackingPayloadOptions.generated.h"

USTRUCT()
struct FTrackingPayloadOptions {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Theme;
    
    UPROPERTY()
    int32 HighCont;
    
    UPROPERTY()
    FString HUDDisplay;
    
    UPROPERTY()
    int32 HUDSize;
    
    UPROPERTY()
    int32 sub;
    
    UPROPERTY()
    int32 subOpacity;
    
    UPROPERTY()
    FString GameInput;
    
    UPROPERTY()
    FString remapProfile;
    
    UPROPERTY()
    FString InputPress;
    
    UPROPERTY()
    int32 HideVFX;
    
    UPROPERTY()
    int32 CameraShake;
    
    UPROPERTY()
    int32 HudFraming;
    
    UPROPERTY()
    int32 BlinkingEffect;
    
    UPROPERTY()
    FString AudioOut;
    
    SIFU_API FTrackingPayloadOptions();
};

