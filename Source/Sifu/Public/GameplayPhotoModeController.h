#pragma once
#include "CoreMinimal.h"
#include "BaseReplayController.h"
#include "GameplayPhotoModeController.generated.h"

class ASCPlayerController;
class UObject;

UCLASS(Blueprintable)
class SIFU_API AGameplayPhotoModeController : public ABaseReplayController {
    GENERATED_BODY()
public:
    AGameplayPhotoModeController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_LeavePhotoMode();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASCPlayerController* BPF_GetOriginalPlayerController() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContextObject"))
    static void BPF_EnterPhotoMode(const UObject* _worldContextObject);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnPhotoModeDeactivationRequested();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnPhotoModeActivated();
    
};

