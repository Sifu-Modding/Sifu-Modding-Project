#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InputContext.h"
#include "SCPlayerController.h"
#include "InputAvailability.h"
#include "AvailabilityLayerCache.h"
#include "AvailabilityLayerCaches.h"
#include "ESaveResult.h"
#include "EMessageReason.h"
#include "InputAction.h"
#include "BaseReplayController.generated.h"

class AReplayHUD;
class ASpectatorPawn;
class UReplayMenuWidget;
class UAvailabilityLayerData;
class UAngleFeedbackUserWidget;
class URangeFeedbackUserWidget;
class UHUDUserWidget;
class UMessageFeedbackUserWidget;
class UHandleInput;
class IHandleInput;
class UReplayCineCameraComponent;

UCLASS()
class SIFU_API ABaseReplayController : public ASCPlayerController, public IInputAvailability {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool m_bFixedSpectatorMode;
    
    UPROPERTY(EditDefaultsOnly)
    InputContext m_eMainInputContext;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ASpectatorPawn> m_SpectatorClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AReplayHUD> m_HUDClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UReplayMenuWidget> m_MenuClass;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UReplayMenuWidget* m_Menu;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FString, FString> m_OverrideSoundStates;
    
    UPROPERTY(EditDefaultsOnly)
    UAvailabilityLayerData* m_AvailabilityDefaultLayerDB;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UAvailabilityLayerData*> m_DefaultAvailabilityLayerContextOverrides;
    
    UPROPERTY(EditDefaultsOnly)
    FAvailabilityLayerCache m_SpectatorAvailabilityLayer;
    
    UPROPERTY(EditDefaultsOnly)
    FAvailabilityLayerCache m_FixedSpectatorAvailabilityLayer;
    
    UPROPERTY(EditDefaultsOnly)
    FAvailabilityLayerCaches m_ConsoleAvailabilityLayers;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UAngleFeedbackUserWidget> m_RollFeedbackClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<URangeFeedbackUserWidget> m_ZoomFeedbackClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UHUDUserWidget> m_SaveGameWidgetClass;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UMessageFeedbackUserWidget>> m_MessageFeedbackClasses;
    
    UPROPERTY(Instanced, Transient)
    UAngleFeedbackUserWidget* m_RollFeedbackInstance;
    
    UPROPERTY(Instanced, Transient)
    URangeFeedbackUserWidget* m_ZoomFeedbackInstance;
    
    UPROPERTY(Instanced, Transient)
    UHUDUserWidget* m_SaveGameWidgetInstance;
    
    UPROPERTY(Instanced, Transient)
    TArray<UMessageFeedbackUserWidget*> m_MessageFeedbackInstances;
    
public:
    ABaseReplayController();
protected:
    UFUNCTION()
    void OnSaveGameStatusChanged(bool _bSaveInProgress, ESaveResult _eSaveResult);
    
public:
    UFUNCTION(BlueprintPure)
    AReplayHUD* GetReplayHUD() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_ShowMessageFeedback(EMessageReason _eReason);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_SetSingleActiveMenu(TScriptInterface<IHandleInput> _menu);
    
public:
    UFUNCTION(BlueprintCallable)
    bool BPF_PushSpectatorAvailabilityLayer(bool _bUpdateUIMode, bool _bCheckAlreadyPushed);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PushAvailabilityLayers(UPARAM(Ref) FAvailabilityLayerCaches& _inOutCacheALs, bool _bCheckIfAlreadyPushed);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PushAvailabilityLayer(UPARAM(Ref) FAvailabilityLayerCache& _inOutCacheAL, bool _bCheckIfAlreadyPushed, int32 _iPriority);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_PopSpectatorAvailabilityLayer(bool _bUpdateUIMode, bool _bCheckAlreadyPopped);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PopAvailabilityLayers(UPARAM(Ref) FAvailabilityLayerCaches& _inOutCacheALs, bool _bCheckIfAlreadyPopped);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PopAvailabilityLayer(UPARAM(Ref) FAvailabilityLayerCache& _inOutCacheAL, bool _bCheckIfAlreadyPopped);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsInputActionAvailable(InputAction _eInputAction) const;
    
    UFUNCTION(BlueprintPure)
    UReplayCineCameraComponent* BPF_GetCineCameraComponent() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

