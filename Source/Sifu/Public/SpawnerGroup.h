#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "EEnemyPresenceKnownType.h"
#include "EGlobalBehaviors.h"
#include "EJoinDialogActors.h"
#include "SpawnerGroupLayer.h"
#include "Templates/SubclassOf.h"
#include "SpawnerGroup.generated.h"

class AAISpawner;
class ASpawnerGroup;
class UAIFightingComponent;
class UNavigationQueryFilter;

UCLASS(Blueprintable)
class SIFU_API ASpawnerGroup : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnerGroupDelegateDynamic, ASpawnerGroup*, _spawnerGroup);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnerGroupDelegateDynamic m_SituationChangeDelegateDyn;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAISpawner*> m_Spawners;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnerGroupLayer> m_SpawningLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASpawnerGroup*> m_groupsToAlert;
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AAISpawner>> m_SpawnersUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_AlertedStateDialogSequenceRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAssignRolesDynamically;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseDefaultReal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJoinDialogActors m_eJoinDialogActorsOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> m_dialogNavigationQueryFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLookAtEnabledDuringDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSkipSuspiciousOnDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOverrideThreateningActions;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_uiThreateningActionsMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyPresenceKnownType m_eMCPresenceKnownType;
    
public:
    ASpawnerGroup(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BPF_TriggerBehaviorChange(AActor* _alertedBy, const EGlobalBehaviors _eNewBehavior, bool _bSkipBark) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_SpawnActors(int32 _iLevel, int32 _index, bool _bForce);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetRemainingAICount(bool _bIncludeLinkedSpawner, bool _bIncludeAbandonningAIs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetRemainingAI(TArray<UAIFightingComponent*>& _outAiComponents, bool _bAppendToArray, bool _bIncludeLinkedSpawner, bool _bIncludeAbandonningAIs) const;
    
};

