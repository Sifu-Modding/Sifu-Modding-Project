#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SCDelegate.h"
#include "EReplayStopRecordingReason.h"
#include "OnRecordingCompleteDelegate.h"
#include "OnReplayRecordingChangedDelegate.h"
#include "ReplayCurrentRecordingData.h"
#include "ReplayFeedbackEventSignatureDelegate.h"
#include "ReplayInitialStateToggleEvent.h"
#include "ReplayInitialStateToggleEventDelegateDelegate.h"
#include "ReplayInitialStateToggleGetValueEventDelegateDelegate.h"
#include "ReplaySizeManagement.h"
#include "ReplayTimeDilationChangeDelegateDelegate.h"
#include "StopRecordingContinueDelegate.h"
#include "ReplaySystem.generated.h"

class AActor;
class AFightingCharacter;
class APlayerController;
class AReplayController;
class UReplayLevelStreamingReplication;
class UReplayManagement;
class UReplaySoundReplication;
class UReplaySystem;
class USCDemoNetDriver;
class UThePlainesGameInstance;

UCLASS(Blueprintable, Config=Replay)
class SIFU_API UReplaySystem : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FReplaySpaceStatusDelegate, const FReplaySizeManagement&, _sizeManagement, bool, _bHasSpaceForNewReplay);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayTimeDilationChangeDelegate OnTimeDilationChanged;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRecordingComplete m_OnRecordingStreamingCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReplayRecordingChanged m_OnRecordingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayFeedbackEventSignature m_OnReplayFeedbackEvent;
    
   /* UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast* m_OnDemoFinishPlayback;*/
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bTimeDilationReplicated;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPauserPlayerStateReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UThePlainesGameInstance* m_GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UReplayLevelStreamingReplication* m_ReplayStreaming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UReplaySoundReplication* m_ReplaySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UReplayManagement* m_ReplayManagement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fReplayStartVislogTimeS;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplayInitialStateToggleEvent> m_InitialStateToggleEvents;
    
public:
    UReplaySystem();
    UFUNCTION(BlueprintCallable)
    static void BPF_StopRecordingAndContinueWith(APlayerController* _controller, FStopRecordingContinue _onContinue, const EReplayStopRecordingReason _eReason);
    
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static bool BPF_IsRecordingDisabled(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static bool BPF_IsRecording(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static bool BPF_IsReadyForPlaying(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static bool BPF_IsPlaying(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsKeepingReplay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static bool BPF_IsDemoPlayPaused(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static bool BPF_IsCurrentDemoTimeSnapped(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetVislogGameplayTimeS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static EReplayStopRecordingReason BPF_GetStopRecordingReason(const UObject* _worldContextObject, bool& _bOutIsRecording);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BPF_GetSnappedDemoTime(float _fDemoTimeS, bool _bCheckClosestFrame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static UReplaySystem* BPF_GetReplaySystem(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static UReplayManagement* BPF_GetReplayManagement(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static AReplayController* BPF_GetReplayController(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static AFightingCharacter* BPF_GetPlayingPlayerCharacter(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_GetKeyFrameIndexFromDemoTime(float _fDemoTimeS, bool _bCheckClosestFrame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BPF_GetDemoTimeFromKeyFrameIndex(int32 _iKeyFrameIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static float BPF_GetDemoPlayTimeDilation(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static USCDemoNetDriver* BPF_GetDemoNetDriver(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_GetCurrentReplayRecordingData(UPARAM(Ref) FReplayCurrentRecordingData& _inoutData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static float BPF_GetCurrentReplayLengthS(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static float BPF_GetCurrentReplayLengthMS(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static float BPF_GetCurrentDemoTimeS(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BPF_GetActorLastReplicationTime(AActor* _actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static bool BPF_CanStartRecording(const UObject* _worldContextObject);
    
};

