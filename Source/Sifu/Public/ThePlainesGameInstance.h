#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SCGameInstance.h"
#include "GameplayTagContainer.h"
#include "SCError.h"
//#include "AkExternalSourceInfo.h"
#include "EFactionsEnums.h"
#include "ThePlainesGameInstance.generated.h"

class USCSessionManager;
class UUserWidget;
class UWGGameFlow;
class UAkAudioEvent;
class UReplaySystem;
class UItemsDB;
class UInputManager;
class USCLocalPlayer;
class UFactionsManager;
class UPredictionManager;
class UCinematicManager;
class ULocalPlayer;
class UMessageManager;
class USessionTimeManager;
class ALevelSequenceActor;
class ASCPlayerStart;

UCLASS(NonTransient)
class SIFU_API UThePlainesGameInstance : public USCGameInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnErrorRaised);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFadeOverDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCinematicCompleted);
    
    UPROPERTY(BlueprintAssignable)
    FOnErrorRaised BPE_OnErrorRaised;
    
    UPROPERTY(BlueprintAssignable)
    FFadeOverDelegate OnFadeOver;
    
    UPROPERTY(BlueprintAssignable)
    FCinematicCompleted OnCinematicCompleted;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUserWidget> m_loadingScreenClass;
    
    UPROPERTY(Instanced, Transient)
    UUserWidget* m_loadingScreen;
    
protected:
    //UPROPERTY(EditDefaultsOnly)
    //UAkAudioEvent* m_MuteEvent;
    //
    //UPROPERTY(EditDefaultsOnly)
    //TArray<FAkExternalSourceInfo> m_MuteExternalSourceInfos;
    //
    //UPROPERTY(EditDefaultsOnly)
    //UAkAudioEvent* m_UnmuteEvent;
    //
    //UPROPERTY(EditDefaultsOnly)
    //TArray<FAkExternalSourceInfo> m_UnmuteExternalSourceInfos;
    
private:
    UPROPERTY(Transient)
    UWGGameFlow* m_GameFlow;
    
    UPROPERTY(Transient)
    FName m_AntiCheatMapTagName;
    
    UPROPERTY(EditAnywhere)
    UItemsDB* m_ItemsDB;
    
    UPROPERTY()
    UInputManager* m_InputManager;
    
    UPROPERTY()
    UFactionsManager* m_FactionsManager;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPredictionManager> m_PredictionManagerClass;
    
    UPROPERTY()
    UCinematicManager* m_CinematicManager;
    
    UPROPERTY()
    TSubclassOf<UCinematicManager> m_CinematicManagerClass;
    
    UPROPERTY(Transient)
    UMessageManager* m_MessageManager;
    
    UPROPERTY(Transient)
    USCSessionManager* m_sessionManager;
    
    UPROPERTY(Transient)
    USessionTimeManager* m_SessionTimeManager;
    
    UPROPERTY()
    UReplaySystem* m_ReplaySystem;
    
public:
    UThePlainesGameInstance();
    UFUNCTION(Exec)
    void TriggerTakeKinectResources(bool _bTake);
    
    UFUNCTION(Exec)
    void TriggerResetGameFlowTags();
    
    UFUNCTION(Exec)
    void TriggerReloadConfig();
    
    UFUNCTION(Exec)
    void TriggerRaiseGameFlowTag(FName _gameplayTag);
    
    UFUNCTION(Exec)
    void TriggerCrashAfterDelay(int32 _iDelay);
    
    UFUNCTION(Exec)
    void TriggerAchievementProgress(const FString& _achievementId, float _fCompletionPercent);
    
    UFUNCTION(Exec)
    void TravelToNextMap();
    
    UFUNCTION(Exec)
    void TravelToLoadedMap(const FString& _sMapToTravelTo);
    
private:
    UFUNCTION(Exec)
    void Replay_Stop();
    
    UFUNCTION(Exec)
    void Replay_Start();
    
    UFUNCTION(Exec)
    void Replay_Play();
    
    UFUNCTION(Exec)
    void Replay_PauseRecording();
    
public:
    UFUNCTION(Exec)
    void Logout(int32 _index);
    
    UFUNCTION(Exec)
    void LoadMapAsync(const FString& _sPackageName);
    
    UFUNCTION(Exec)
    void GoToNextMap();
    
    UFUNCTION(Exec)
    void GoToMapInGameFlow(const FString& _sMapToTravelTo);
    
    UFUNCTION(BlueprintCallable)
    USCLocalPlayer* GetLocalPlayer();
    
    UFUNCTION(Exec)
    void DumpWorlds();
    
    UFUNCTION(Exec)
    void DumpLoadedLevels();
    
    UFUNCTION(BlueprintCallable)
    void BPF_StopSequence(ALevelSequenceActor* _levelSequenceActor);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetLoadingScreenTickTime(float _fNewTime);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetDebugFlow(bool _bDebugFlow);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetNextMapTags();
    
    UFUNCTION(BlueprintCallable)
    void BPF_RaiseNextMapTags(FGameplayTag _tagToRaise);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RaiseError(const FSCError& _error);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PlaySequence(ALevelSequenceActor* _levelSequenceActor, bool _bHideLoadingScreen);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsDebugFlow() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsCultureHasBeenSet();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_HideLoadingScreen(bool _bFade, float _fFadeDuration);
    
    UFUNCTION(BlueprintPure)
    UReplaySystem* BPF_GetReplaySystem() const;
    
    UFUNCTION(BlueprintPure)
    ASCPlayerStart* BPF_GetPlayerStartUsedAtSpawn();
    
    UFUNCTION(BlueprintPure)
    FString BPF_GetPlayerId(ULocalPlayer* _player);
    
    UFUNCTION(BlueprintPure)
    float BPF_GetLoadingScreenTickTime();
    
    UFUNCTION(BlueprintPure)
    UWGGameFlow* BPF_GetGameFlow() const;
    
    UFUNCTION(BlueprintCallable)
    bool BPF_ConsumeNextError(FSCError& _error);
    
    UFUNCTION(BlueprintPure)
    bool BPF_CanTargetFaction(EFactionsEnums _eMyFaction, EFactionsEnums _eTargetFaction) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_BeginLoadingScreen();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnGameActivityActivationRequestComplete(const FString& _activityID, bool _bStartedGameFromActivity);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnAchievementObjectUnlocked(FGameplayTag ObjectUnlockedTag);
    
};

