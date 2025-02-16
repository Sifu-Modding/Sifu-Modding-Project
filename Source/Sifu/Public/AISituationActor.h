#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AIPhaseTransitionData.h"
#include "AISituationNamedActor.h"
#include "EAlertLevel.h"
#include "EFightingState.h"
#include "EGlobalBehaviors.h"
#include "SCImpostorForSave.h"
#include "SpawnerGroupSoundData.h"
#include "AISituationActor.generated.h"

class AAISituationActor;
class AAISpawner;
class ABaseCharacter;
class AFightingCharacter;
class ALockableDoor;
class ASpawnerGroup;
class UAIFightingComponent;
class USCSaveGameComponent;

UCLASS(Blueprintable)
class SIFU_API AAISituationActor : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEventWithCharacterDynamic, ABaseCharacter*, _character);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAISituationGlobalBehaviorChangedDynamic, AAISituationActor*, SituationChanged, const UAIFightingComponent*, AI, EGlobalBehaviors, NewBehavior);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAISituationDynamicMulticastDelegate, AAISituationActor*, SituationChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISituationDynamicMulticastDelegate OnSituationActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISituationDynamicMulticastDelegate OnSituationResolved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISituationGlobalBehaviorChangedDynamic OnAnyAiBehaviorChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISituationDynamicMulticastDelegate OnSituationSpawnedDynamic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventWithCharacterDynamic OnAISpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventWithCharacterDynamic OnAIDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHasActiveLDVisibilityOverride;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USCSaveGameComponent* m_SaveComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASpawnerGroup*> m_AssociatedSpawnerGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALockableDoor*> m_AssociatedLockableDoors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_PositioningPOIs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsLastManAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForceLastMan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMinKillBeforeLastMan;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iLastManGaugeIncrementValue;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iLastManMaxOccuranceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnerGroupSoundData m_SoundData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRepeatBarksWhenExhausted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableMaxImpostorsLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDespawnEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> m_SpawnerGroupClearedPathName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FSCImpostorForSave> m_ImpostorToSpawnOnSaveLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_bSpawnRequestedOnSaveLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 m_iCurrentLastManOccuranceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAutoSpawnedOnSaveLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EGlobalBehaviors m_eBehaviorToSetOnSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> m_targetForHostileBehaviorsOnSpawn;
    
public:
    AAISituationActor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdatedFromSaveCallback();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAISituationNamedActor Conv_NameToAISituationNamedActor(FName _name);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UnSpawnSituation();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SwitchToSuperAbandonState();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SwitchToFriendly(bool _bFriendly);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SwitchToAbandoning();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SpawnSituation(EGlobalBehaviors _eBehaviorToSetOnSpawn, AActor* _targetForHostileBehaviors, bool _bForce, bool _bSkipBark);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetSpawnersUsedCount(bool _bIncludeAlerted, bool _bOnlyCurrentlyUsed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetSpawnersUsed(TArray<AAISpawner*>& _outSpawners, bool _bIncludeAlerted, bool _bOnlyCurrentlyUsed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetSpawnerGroupsUsed(TArray<ASpawnerGroup*>& _outSpawnerGroups) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* BPF_GetNamedActor(const FAISituationNamedActor& _namedActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EGlobalBehaviors BPF_GetBehaviorOverride();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetAis(TArray<UAIFightingComponent*>& _outAiComponents, bool _bIncludeAlertedSpawners, bool _bAppendToArray, bool _bIncludeAbandonningAIs) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_EnableHitOnAI(bool _bEnable);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ChangeAiPerception(bool _bActivate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_AreAllSpawnerGroupsCleared() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddNamedActor(AActor* _actor, FName _name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_UpdateLDVisibilityOverride(bool _bVisibility);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnStartAIPhaseChanged(AFightingCharacter* _fightingChar, const FAIPhaseTransitionData& _phaseTransition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnInteractiveDialogInterrupted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnEndAIPhaseChanged(AFightingCharacter* _fightingChar, int32 _iPreviousPhaseIndex, int32 _iCurrentPhaseIndex, FName _currentPhaseName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnAIPhaseChangeSequenceFinished(AFightingCharacter* _fightingChar, const FAIPhaseTransitionData& _phaseTransition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnAIFightingStateChanged(AFightingCharacter* _fightingChar, EFightingState _ePreviousFightingState, EFightingState _eNewFightingState);
    
private:
    UFUNCTION(BlueprintCallable)
    void AlertLevelChangedCallback(EAlertLevel _eNewLevel);
    
};

