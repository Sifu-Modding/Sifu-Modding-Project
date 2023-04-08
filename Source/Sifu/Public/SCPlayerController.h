#pragma once
#include "CoreMinimal.h"
#include "SCBasePlayerController.h"
#include "EActivityWantedState.h"
#include "SCPlayerController.generated.h"

class AActor;
class UGenericErrorPopupWidget;
class UInputContextData;
class UUserWidget;

UCLASS(Blueprintable)
class SIFU_API ASCPlayerController : public ASCBasePlayerController {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnQueryAchievementsCompleted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAllActivitiesStarted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAchievementCompleted, const FString&, _achievementId);
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UUserWidget> m_HUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_ControllerMotionOutputList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_ControllerSecondaryOutputList;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAllActivitiesStarted m_OnAllActivitiesUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAchievementCompleted m_OnAchievementCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQueryAchievementsCompleted m_OnQueryAchievementsCompleted;
    
    ASCPlayerController();
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllAchievements();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAchievement(const FString& achievementId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetAllAchievements();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetAchievement(const FString& achievementId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void QueryAchievements();
    
    UFUNCTION(BlueprintCallable)
    void PushInputContext(UInputContextData* _inputContextData);
    
    UFUNCTION(BlueprintCallable)
    void PopInputContext(UInputContextData* _inputContextData);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugTriggerEventProgession(const FString& _eventName, const FString& _eventParamName, int32 _iEventParamValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_UpdateActivity(const FString& _activityID, EActivityWantedState _eActivityWantedState);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_UpdateAchievementCompletion(const FString& _achievementId, float _fCompletionPercent);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ToggleMouseCaptureMode();
    
    UFUNCTION(BlueprintCallable)
    void BPF_StartTimedAchievement(const FName& _achievementId, int32 _iNumOccurencess);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetInUIInputMode(bool _bActivate, bool _bUIOnly);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetHUD(UUserWidget* _inHUD);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_RestartAllActivities();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_ResetAllActivities();
    
    UFUNCTION(BlueprintCallable)
    void BPF_QueryAchievements();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsAchievementCompleted(const FString& _achievementId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasUnlockAllAchievements();
    
    UFUNCTION(BlueprintCallable)
    float BPF_GetTimedAchievementElapsed(const FName& _achievementId, int32& _iOutOnGoingOccurences);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* BPF_GetStartSpot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName BPF_GetLastGamepadControllerType() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_ChangeActivityAvailability(const FString& _activityID, bool _bSetAvailable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ShowSkipCutsceneWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_LeaveGame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_HideSkipCutsceneWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UGenericErrorPopupWidget* BPE_GetPopupWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float BPE_GetMaxAchievementProgress(const FString& _achievementId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_GetActivitiesState(TArray<FString>& _activitiesState, TArray<FString>& _tasksToStart, TArray<FString>& _tasksToEnd, TArray<FString>& _subTasks);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UGenericErrorPopupWidget* BPE_CreatePopupWidget();
    
};

