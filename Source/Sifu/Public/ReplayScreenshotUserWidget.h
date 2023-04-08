#pragma once
#include "CoreMinimal.h"
#include "AvailabilityLayerCaches.h"
#include "SCUserWidget.h"
#include "ReplayScreenshotUserWidget.generated.h"

class ABaseReplayController;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UReplayScreenshotUserWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bTakeScreenshotOnCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvailabilityLayerCaches m_AvailabilityLayers;
    
public:
    UReplayScreenshotUserWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_RequestScreenshot(int32 _iResolutionX, int32 _iResolutionY);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABaseReplayController* BPF_GetReplayController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_OnScreenshotRequestProcessed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnScreenshotRequested();
    
};

