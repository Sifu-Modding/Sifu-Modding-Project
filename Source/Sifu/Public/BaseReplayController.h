#pragma once
#include "CoreMinimal.h"
#include "ESaveResult.h"
#include "AvailabilityLayerCache.h"
#include "AvailabilityLayerCaches.h"
#include "EMessageReason.h"
#include "InputAction.h"
#include "InputAvailability.h"
#include "InputContext.h"
#include "SCPlayerController.h"
#include "Templates/SubclassOf.h"
#include "BaseReplayController.generated.h"

class AReplayHUD;
class ASpectatorPawn;
class IHandleInput;
class UHandleInput;
class UAngleFeedbackUserWidget;
class UAvailabilityLayerData;
class UHUDUserWidget;
class UMessageFeedbackUserWidget;
class URangeFeedbackUserWidget;
class UReplayCineCameraComponent;
class UReplayMenuWidget;

UCLASS(Blueprintable)
class SIFU_API ABaseReplayController : public ASCPlayerController, public IInputAvailability {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFixedSpectatorMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    InputContext m_eMainInputContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASpectatorPawn> m_SpectatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AReplayHUD> m_HUDClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UReplayMenuWidget> m_MenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UReplayMenuWidget* m_Menu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> m_OverrideSoundStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvailabilityLayerData* m_AvailabilityDefaultLayerDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAvailabilityLayerData*> m_DefaultAvailabilityLayerContextOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvailabilityLayerCache m_SpectatorAvailabilityLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvailabilityLayerCache m_FixedSpectatorAvailabilityLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvailabilityLayerCaches m_ConsoleAvailabilityLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAngleFeedbackUserWidget> m_RollFeedbackClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URangeFeedbackUserWidget> m_ZoomFeedbackClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHUDUserWidget> m_SaveGameWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UMessageFeedbackUserWidget>> m_MessageFeedbackClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAngleFeedbackUserWidget* m_RollFeedbackInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URangeFeedbackUserWidget* m_ZoomFeedbackInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHUDUserWidget* m_SaveGameWidgetInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMessageFeedbackUserWidget*> m_MessageFeedbackInstances;
    
public:
    ABaseReplayController();
protected:
    UFUNCTION(BlueprintCallable)
    void OnSaveGameStatusChanged(bool _bSaveInProgress, ESaveResult _eSaveResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsInputActionAvailable(InputAction _eInputAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReplayCineCameraComponent* BPF_GetCineCameraComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_ForceInputAvailabilityUpdate();
    
    
    // Fix for true pure virtual functions not being implemented
};

