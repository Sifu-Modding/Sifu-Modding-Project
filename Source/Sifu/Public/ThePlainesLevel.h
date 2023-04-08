#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SCLevelScriptActor.h"
#include "AIPhaseTransitionData.h"
#include "SoundStateInfo.h"
#include "ThePlainesLevel.generated.h"

class AActor;
class AFightingCharacter;
class ASCBlenderManager;
class UAkAudioBank;
class ULevelSequence;

UCLASS(Blueprintable)
class SIFU_API AThePlainesLevel : public ASCLevelScriptActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASCBlenderManager* m_BlenderManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* m_StartupSequence;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInChargeOfSoundSave;
    
   /* UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioBank*> m_AudioBanksToLoad;*/
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<uint32, FSoundStateInfo> m_AKStateGroupValues;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    //TArray<UAkAudioBank*> m_SavedSoundBanksToLoad;
    
public:
    AThePlainesLevel();
private:
    UFUNCTION(BlueprintCallable)
    void UnregisterFromSignificanceOnActorEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsSoundStateContainedInSaved(const FString& _SoundState) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_InitSoundState(const FString& _StateGroup, const FString& _state, bool _bReplicates, bool _bSaveGame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnStartAIPhaseChanged(AFightingCharacter* _fightingChar, const FAIPhaseTransitionData& _phaseTransition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnLevelTransition(int32 _iTransitionIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnEndAIPhaseChanged(AFightingCharacter* _fightingChar, int32 _iPreviousPhaseIndex, int32 _iCurrentPhaseIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnAppliedSoundStateFromSave();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_AllSoundBanksLoaded();
    
};

