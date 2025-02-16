#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPhoneme.h"
#include "LipSync_TimedPhrase.h"
#include "LipsyncData.h"
#include "SpeakingEventBoolDelegate.h"
#include "SpeakingEventDelegate.h"
#include "SpeakingNotifyDelegate.h"
#include "TextLipSync.generated.h"

class ULipSyncDB;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEXT2LIPSYNC_API UTextLipSync : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULipSyncDB* m_LipSyncDB;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpeakingNotify OnNotifyExecuted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpeakingEvent OnPlayingFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpeakingEventBool OnSpeakingPause;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpeakingEvent OnTimelineChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ControlledMesh;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MorphTargets[17];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> MorphTargetRuntimeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> MorphTargetsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSpeaking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSpeakingPhonemeInAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubtitleWasChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PauseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnvelopeVolumeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhraseDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviousPhonemeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPhonemeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextNotifyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLipSync_TimedPhrase> PhraseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PauseIndexes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLipSync_TimedPhrase> PhraseNotifies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentIntervalDuration;
    
public:
    UTextLipSync(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool StopSpeaking(bool bStopPlayingSound);
    
    UFUNCTION(BlueprintCallable)
    bool Speak(const FLipsyncData& _lipsyncData, float _fDuration, bool _bUseImprovedTextToPhoneme);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetSingleAnimationValue(const FName& _targetName, float _fValue);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpeaking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializePhonemesArray();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeakingTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastPhraseDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurveValue(const FName& CurveName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentPhrase(TMap<float, EPhoneme>& ReturnValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentPhonemesLine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetActiveMorphTargets() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void BuildPhraseData(const FLipsyncData& _lipsyncData);
    
};

