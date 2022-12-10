#pragma once
#include "CoreMinimal.h"
#include "OnRecordingCompleteDelegate.h"
#include "UObject/Object.h"
#include "ReplaySizeManagement.h"
#include "ReplayTimeDilationChangeDelegateDelegate.h"
#include "SCDelegate.h"
#include "OnReplayRecordingChangedDelegate.h"
#include "ReplayFeedbackEventSignatureDelegate.h"
#include "ReplayInitialStateToggleEvent.h"
#include "EReplayStopRecordingReason.h"
#include "ReplayInitialStateToggleEventDelegateDelegate.h"
#include "ReplayInitialStateToggleGetValueEventDelegateDelegate.h"
#include "ReplayCurrentRecordingData.h"
#include "ReplaySystem.generated.h"

class UReplaySoundReplication;
class UThePlainesGameInstance;
class UReplayLevelStreamingReplication;
class UReplayManagement;
class AFightingCharacter;
class AActor;
class UReplaySystem;
class AReplayController;
class USCDemoNetDriver;

UCLASS(BlueprintType, Config=Replay)
class SIFU_API UReplaySystem : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FReplaySpaceStatusDelegate, const FReplaySizeManagement&, _sizeManagement, bool, _bHasSpaceForNewReplay);
    
    UPROPERTY(BlueprintAssignable)
    FReplayTimeDilationChangeDelegate OnTimeDilationChanged;
    
protected:
    UPROPERTY(BlueprintAssignable)
    FOnRecordingComplete m_OnRecordingStreamingCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FOnReplayRecordingChanged m_OnRecordingChanged;
    
    UPROPERTY(BlueprintAssignable)
    FReplayFeedbackEventSignature m_OnReplayFeedbackEvent;
    
   /* UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast m_OnDemoFinishPlayback;*/
    
    UPROPERTY(Config)
    bool m_bTimeDilationReplicated;
    
    UPROPERTY(Config)
    bool m_bPauserPlayerStateReplicated;
    
    UPROPERTY(Transient)
    UThePlainesGameInstance* m_GameInstance;
    
    UPROPERTY(Transient)
    UReplayLevelStreamingReplication* m_ReplayStreaming;
    
    UPROPERTY(Transient)
    UReplaySoundReplication* m_ReplaySound;
    
    UPROPERTY(Transient)
    UReplayManagement* m_ReplayManagement;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fReplayStartVislogTimeS;
    
private:
    UPROPERTY()
    TArray<FReplayInitialStateToggleEvent> m_InitialStateToggleEvents;
    
public:
    UReplaySystem();
    UFUNCTION(BlueprintCallable)
    void BPF_StopRecording(const EReplayStopRecordingReason _eReason);
    
    UFUNCTION(BlueprintCallable)
    void BPF_StartReplay(const FString& _replayID);
    
    UFUNCTION(BlueprintCallable)
    void BPF_StartRecording();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContextObject"))
    static void BPF_SetPlayingPlayerCharacter(AFightingCharacter* _character, const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContextObject"))
    static void BPF_SetDemoPlayTimeDilation(const UObject* _worldContextObject, float _fDilation);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContextObject"))
    static void BPF_ReplayStopRecording(const UObject* _worldContextObject, const EReplayStopRecordingReason _eReason);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContextObject"))
    static void BPF_ReplayStartRecording(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContextObject"))
    static void BPF_ReplayStartPlaying(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_RegisterInitialStateEvent(FReplayInitialStateToggleEventDelegate _event, AActor* _Instigator, FReplayInitialStateToggleGetValueEventDelegate _getValueEvent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContextObject"))
    static void BPF_QueryReplaySpaceStatus(const UObject* _worldContextObject, UReplaySystem::FReplaySpaceStatusDelegate _callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContextObject"))
    static void BPF_PushPopPauseRecording(UPARAM(Ref) int32& _iInOutTag, const FString& _context, const bool _bPush, const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContextObject"))
    static void BPF_PushPopDisableRecording(UPARAM(Ref) int32& _iInOutTag, const FString& _context, const bool _bPush, const UObject* _worldContextObject, const EReplayStopRecordingReason _eReason);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_MustUpdateMaxFPS();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static bool BPF_IsRecordingDisabled(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static bool BPF_IsRecording(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static bool BPF_IsReadyForPlaying(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static bool BPF_IsPlaying(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsKeepingReplay() const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static bool BPF_IsDemoPlayPaused(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static bool BPF_IsCurrentDemoTimeSnapped(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    float BPF_GetVislogGameplayTimeS() const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static EReplayStopRecordingReason BPF_GetStopRecordingReason(const UObject* _worldContextObject, bool& _bOutIsRecording);
    
    UFUNCTION(BlueprintPure)
    static float BPF_GetSnappedDemoTime(float _fDemoTimeS, bool _bCheckClosestFrame);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static UReplaySystem* BPF_GetReplaySystem(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static UReplayManagement* BPF_GetReplayManagement(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static AReplayController* BPF_GetReplayController(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static AFightingCharacter* BPF_GetPlayingPlayerCharacter(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static int32 BPF_GetKeyFrameIndexFromDemoTime(float _fDemoTimeS, bool _bCheckClosestFrame);
    
    UFUNCTION(BlueprintPure)
    static float BPF_GetDemoTimeFromKeyFrameIndex(int32 _iKeyFrameIndex);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static float BPF_GetDemoPlayTimeDilation(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static USCDemoNetDriver* BPF_GetDemoNetDriver(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    bool BPF_GetCurrentReplayRecordingData(UPARAM(Ref) FReplayCurrentRecordingData& _inoutData) const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static float BPF_GetCurrentReplayLengthS(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static float BPF_GetCurrentReplayLengthMS(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static float BPF_GetCurrentDemoTimeS(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static float BPF_GetActorLastReplicationTime(AActor* _actor);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static bool BPF_CanStartRecording(const UObject* _worldContextObject);
    
};

