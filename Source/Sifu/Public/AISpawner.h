#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AnimContainer.h"
#include "SCAiActionClassInstance.h"
#include "SCDelegate.h"
#include "SCDelegate.h"
#include "SCDelegate.h"
#include "AICharacterSpawnParams.h"
#include "CarriedProps.h"
#include "EFactionsEnums.h"
#include "EFirstSpawnMethod.h"
#include "EGlobalBehaviors.h"
#include "EPatrolLaunchMethod.h"
#include "IdleAnimAndTransition.h"
#include "Templates/SubclassOf.h"
#include "AISpawner.generated.h"

class AAISpawner;
class ABaseCharacter;
class ABaseWeapon;
class APathPatrol;
class UAIFightingComponent;
class UAIIdleDB;
class UAIPhaseScenario;
class USceneComponent;

UCLASS(Blueprintable)
class SIFU_API AAISpawner : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAISpawnedDynamic, ABaseCharacter*, SpawnedCharacter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIPatrolCompleted, UAIFightingComponent*, AI, APathPatrol*, Patrol);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAIDownDynamic, AAISpawner*, Spawner);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAICharacterGlobalBehaviorChanged, ABaseCharacter*, Character, EGlobalBehaviors, NewBehavior);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDownDynamic AIDownDelegateMulticast;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISpawnedDynamic AISpawnedDynamicDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIPatrolCompleted OnPatrolCompleted;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    //USCDelegate::FGenericDialogEventDelegate* OnGenericDialogEvent;
    //
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    //USCDelegate::FDynamicMulticast* OnDialogCompleted;
    //
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    //USCDelegate::FDynamicMulticast* OnDialogCut;
    //
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    //USCDelegate::FDialogLineEvent* OnLineEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAICharacterGlobalBehaviorChanged OnGlobalBehaviorChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAICharacterSpawnParams m_SpawnParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCAiActionClassInstance m_SpawnAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseCharacter> m_SpawningClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForcedPreFightLookAtTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_ForcedPreFightLookAtTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APathPatrol* m_pathPatrol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPatrolLaunchMethod m_ePatrolLaunchMethod;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIPhaseScenario* m_PhaseScenarios[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIPhaseScenario* m_PhaseScenario;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionsEnums m_eFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRespawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSpawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLowStructureOnSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsLoneWolf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iSoundTensionLevelOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_VoiceVariationSwitchOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iChargesToAddWhenKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iDeathCounterDecreaseWhenKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDeathCounterResetWhenKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFirstSpawnMethod m_eFirstSpawnMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAllowPerceptionInstantOnSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_RootComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCarriedProps> m_carriedProps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseWeapon> m_carriedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_CarriedWeaponPoolName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bKeepIdleAnimDuringAlertedDialogs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIdleAnimAndTransition> m_IdleAndExitAnimation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIIdleDB* m_AIIdleDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_AlertedAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseCharacter> m_EditorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAIPhaseScenario* m_PhaseScenarioOverride;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_rawCustomPrimitiveData;
    
    AAISpawner();
private:
    UFUNCTION(BlueprintCallable)
    void OnAiBehaviorChanged(EGlobalBehaviors _eNewBehavior, const bool _bFromDialog);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawnerBusy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ABaseWeapon> GetCarriedWeapon() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_WantsSpawn();
    
    UFUNCTION(BlueprintCallable)
    void BPF_UnSpawnAIDelayed();
    
    UFUNCTION(BlueprintCallable)
    void BPF_StartAssociatedPatrolOnSpawnedAI();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetSpawningClass(TSubclassOf<ABaseCharacter> _class);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetPhaseScenario(UAIPhaseScenario* _scenario);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetForceSpawnerBusy(bool _bSpawnerBusy);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetCanRespawn(bool _canRespawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasSpawnedAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ABaseCharacter> BPF_GetSpawningClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABaseCharacter* BPF_GetSpawnedAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName BPF_GetCarriedWeaponPoolName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCarriedProps> BPF_GetCarriedProps() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_AskForRespawn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnRespawnFinished(AActor* _ActorAIRespawned);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnIADown(AActor* _ActorAI);
    
};

