#pragma once
#include "CoreMinimal.h"
//#include "AkExternalSourceInfo.h"
#include "GameplayTagContainer.h"
#include "SCError.h"
#include "SCGameInstance.h"
#include "EFactionsEnums.h"
#include "Templates/SubclassOf.h"
#include "ThePlainesGameInstance.generated.h"

class ALevelSequenceActor;
class ASCPlayerStart;
//class UAkAudioEvent;
class UCinematicManager;
class UFactionsManager;
class UInputManager;
class UItemsDB;
class ULocalPlayer;
class UMessageManager;
class UPredictionManager;
class UReplaySystem;
class USCLocalPlayer;
class USCSessionManager;
class USessionTimeManager;
class UUserWidget;
class UWGGameFlow;

UCLASS(Blueprintable, NonTransient)
class SIFU_API UThePlainesGameInstance : public USCGameInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnErrorRaised);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFadeOverDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCinematicCompleted);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnErrorRaised BPE_OnErrorRaised;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeOverDelegate OnFadeOver;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCinematicCompleted OnCinematicCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> m_loadingScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* m_loadingScreen;
    
protected:
    // UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    // UAkAudioEvent* m_MuteEvent;
    
    // UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    // TArray<FAkExternalSourceInfo> m_MuteExternalSourceInfos;
    
    // UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    // UAkAudioEvent* m_UnmuteEvent;
    
    // UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    // TArray<FAkExternalSourceInfo> m_UnmuteExternalSourceInfos;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWGGameFlow* m_GameFlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName m_AntiCheatMapTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemsDB* m_ItemsDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputManager* m_InputManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFactionsManager* m_FactionsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPredictionManager> m_PredictionManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCinematicManager* m_CinematicManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCinematicManager> m_CinematicManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMessageManager* m_MessageManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USCSessionManager* m_sessionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USessionTimeManager* m_SessionTimeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplaySystem* m_ReplaySystem;
    
public:
    UThePlainesGameInstance();

    UFUNCTION(BlueprintCallable, Exec)
    void TriggerTakeKinectResources(bool _bTake);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerResetGameFlowTags();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerReloadConfig();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerRaiseGameFlowTag(FName _gameplayTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerCrashAfterDelay(int32 _iDelay);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerAchievementProgress(const FString& _achievementId, float _fCompletionPercent);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TravelToNextMap();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TravelToLoadedMap(const FString& _sMapToTravelTo);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void Replay_Stop();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Replay_Start();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Replay_Play();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Replay_PauseRecording();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void Logout(int32 _index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoadMapAsync(const FString& _sPackageName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GoToNextMap();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GoToMapInGameFlow(const FString& _sMapToTravelTo);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void GiveBestScoreToAllChallenges(const FString& _batchCategory);
    
public:
    UFUNCTION(BlueprintCallable)
    USCLocalPlayer* GetLocalPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpWorlds();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpLoadedLevels();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_WantToDisplayGamerTagOnLoadingScreen() const;
    
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsDebugFlow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsCultureHasBeenSet();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_HideLoadingScreen(bool _bFade, float _fFadeDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReplaySystem* BPF_GetReplaySystem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASCPlayerStart* BPF_GetPlayerStartUsedAtSpawn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_GetPlayerNameFromControllerID(int32 _iControllerID, FString& _outPlayerName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString BPF_GetPlayerId(ULocalPlayer* _player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetLoadingScreenTickTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWGGameFlow* BPF_GetGameFlow() const;
    
    UFUNCTION(BlueprintCallable)
    bool BPF_ConsumeNextError(FSCError& _error);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_CanTargetFaction(EFactionsEnums _eMyFaction, EFactionsEnums _eTargetFaction) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_BeginLoadingScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnGameActivityActivationRequestComplete(const FString& _activityID, bool _bStartedGameFromActivity);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnAchievementObjectUnlocked(FGameplayTag ObjectUnlockedTag);
    
};

