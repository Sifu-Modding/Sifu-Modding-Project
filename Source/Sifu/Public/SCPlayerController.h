#pragma once
#include "CoreMinimal.h"
#include "SCBasePlayerController.h"
#include "EActivityWantedState.h"
#include "SCPlayerController.generated.h"

class AActor;
class UInputContextData;
class UUserWidget;
class UGenericErrorPopupWidget;

UCLASS()
class SIFU_API ASCPlayerController : public ASCBasePlayerController {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnQueryAchievementsCompleted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAllActivitiesStarted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAchievementCompleted, const FString&, _achievementId);
    
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<UUserWidget> m_HUD;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FString> m_ControllerMotionOutputList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FString> m_ControllerSecondaryOutputList;
    
    UPROPERTY(BlueprintAssignable)
    FAllActivitiesStarted m_OnAllActivitiesUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FAchievementCompleted m_OnAchievementCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FOnQueryAchievementsCompleted m_OnQueryAchievementsCompleted;
    
    ASCPlayerController();
    UFUNCTION(Exec)
    void UnlockAllAchievements();
    
    UFUNCTION(Exec)
    void UnlockAchievement(const FString& achievementId);
    
    UFUNCTION(Exec)
    void ResetAllAchievements();
    
    UFUNCTION(Exec)
    void ResetAchievement(const FString& achievementId);
    
    UFUNCTION(Exec)
    void QueryAchievements();
    
    UFUNCTION(BlueprintCallable)
    void PushInputContext(UInputContextData* _inputContextData);
    
    UFUNCTION(BlueprintCallable)
    void PopInputContext(UInputContextData* _inputContextData);
    
    UFUNCTION(Exec)
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
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsAchievementCompleted(const FString& _achievementId);
    
    UFUNCTION(BlueprintPure)
    bool BPF_HasUnlockAllAchievements();
    
    UFUNCTION(BlueprintCallable)
    float BPF_GetTimedAchievementElapsed(const FName& _achievementId, int32& _iOutOnGoingOccurences);
    
    UFUNCTION(BlueprintPure)
    AActor* BPF_GetStartSpot() const;
    
    UFUNCTION(BlueprintPure)
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
    
    UFUNCTION(BlueprintImplementableEvent)
    float BPE_GetMaxAchievementProgress(const FString& _achievementId) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetActivitiesState(TArray<FString>& _activitiesState, TArray<FString>& _tasksToStart, TArray<FString>& _tasksToEnd, TArray<FString>& _subTasks);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UGenericErrorPopupWidget* BPE_CreatePopupWidget();
    
};

