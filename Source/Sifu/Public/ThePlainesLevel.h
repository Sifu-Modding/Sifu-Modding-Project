#pragma once
#include "CoreMinimal.h"
#include "SoundStateInfo.h"
#include "SCLevelScriptActor.h"
#include "AIPhaseTransitionData.h"
#include "Engine/EngineTypes.h"
#include "ThePlainesLevel.generated.h"

class AFightingCharacter;
class ASCBlenderManager;
class ULevelSequence;
class UAkAudioBank;
class AActor;

UCLASS()
class SIFU_API AThePlainesLevel : public ASCLevelScriptActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ASCBlenderManager* m_BlenderManager;
    
    UPROPERTY(EditDefaultsOnly)
    ULevelSequence* m_StartupSequence;
    
private:
    UPROPERTY(EditAnywhere)
    bool m_bInChargeOfSoundSave;
    
   /* UPROPERTY(EditDefaultsOnly)
    TArray<UAkAudioBank*> m_AudioBanksToLoad;*/
    
    UPROPERTY(SaveGame)
    TMap<uint32, FSoundStateInfo> m_AKStateGroupValues;
    
   /* UPROPERTY(SaveGame)
    TArray<UAkAudioBank*> m_SavedSoundBanksToLoad;*/
    
public:
    AThePlainesLevel();
private:
    UFUNCTION()
    void UnregisterFromSignificanceOnActorEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason);
    
protected:
    UFUNCTION(BlueprintPure)
    bool BPF_IsSoundStateContainedInSaved(const FString& _SoundState) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_InitSoundState(const FString& _StateGroup, const FString& _state, bool _bReplicates, bool _bSaveGame);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnStartAIPhaseChanged(AFightingCharacter* _fightingChar, const FAIPhaseTransitionData& _phaseTransition);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnLevelTransition(int32 _iTransitionIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnEndAIPhaseChanged(AFightingCharacter* _fightingChar, int32 _iPreviousPhaseIndex, int32 _iCurrentPhaseIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnAppliedSoundStateFromSave();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_AllSoundBanksLoaded();
    
};

