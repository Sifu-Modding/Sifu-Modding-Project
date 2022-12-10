#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "SpawnerGroupLayer.h"
#include "EJoinDialogActors.h"
#include "EEnemyPresenceKnownType.h"
#include "Engine/DataTable.h"
#include "EGlobalBehaviors.h"
#include "SpawnerGroup.generated.h"

class ASpawnerGroup;
class AAISpawner;
class UNavigationQueryFilter;
class UAIFightingComponent;

UCLASS()
class SIFU_API ASpawnerGroup : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnerGroupDelegateDynamic, ASpawnerGroup*, _spawnerGroup);
    
    UPROPERTY(BlueprintAssignable)
    FSpawnerGroupDelegateDynamic m_SituationChangeDelegateDyn;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TArray<AAISpawner*> m_Spawners;
    
private:
    UPROPERTY()
    TArray<FSpawnerGroupLayer> m_SpawningLayers;
    
    UPROPERTY(EditInstanceOnly)
    TArray<ASpawnerGroup*> m_groupsToAlert;
    
    UPROPERTY(Replicated, Transient)
    TArray<TWeakObjectPtr<AAISpawner>> m_SpawnersUsed;
    
    UPROPERTY(EditInstanceOnly)
    FDataTableRowHandle m_AlertedStateDialogSequenceRowHandle;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bAssignRolesDynamically;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bUseDefaultReal;
    
    UPROPERTY(EditInstanceOnly)
    EJoinDialogActors m_eJoinDialogActorsOnStart;
    
    UPROPERTY(EditInstanceOnly)
    TSubclassOf<UNavigationQueryFilter> m_dialogNavigationQueryFilter;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bLookAtEnabledDuringDialog;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bSkipSuspiciousOnDetection;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bOverrideThreateningActions;
    
    UPROPERTY(EditInstanceOnly)
    uint32 m_uiThreateningActionsMask;
    
    UPROPERTY(EditInstanceOnly)
    EEnemyPresenceKnownType m_eMCPresenceKnownType;
    
public:
    ASpawnerGroup();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BPF_TriggerBehaviorChange(AActor* _alertedBy, const EGlobalBehaviors _eNewBehavior, bool _bSkipBark) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_SpawnActors(int32 _iLevel, int32 _index, bool _bForce);
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetRemainingAICount(bool _bIncludeLinkedSpawner, bool _bIncludeAbandonningAIs) const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetRemainingAI(TArray<UAIFightingComponent*>& _outAiComponents, bool _bAppendToArray, bool _bIncludeLinkedSpawner, bool _bIncludeAbandonningAIs) const;
    
};

