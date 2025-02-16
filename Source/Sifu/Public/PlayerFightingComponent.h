#pragma once
#include "CoreMinimal.h"
#include "Navigation/CrowdAgentInterface.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "ECharacterGender.h"
#include "OutfitData.h"
#include "PlayerGenderSpecificData.h"
#include "Templates/SubclassOf.h"
#include "PlayerFightingComponent.generated.h"

class AActor;
class UBaseMovementDB;
class UEquipmentSelectionData;
class UMaterialInterface;
class USkeletalMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UPlayerFightingComponent : public UActorComponent, public ICrowdAgentInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPropAttached, AActor*, _spawnedProp);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMeshChanged, ECharacterGender, _eNewGender, bool, _bMustHandlePropSpawn);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDialogStatusChanged);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Dialog, meta=(AllowPrivateAccess=true))
    bool m_bIsInDialog;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogStatusChanged OnDialogStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPropAttached OnPropAttached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMeshChanged OnMeshChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_AttachedProps;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEquipmentSelectionData* m_DefaultEquipmentSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLockMoveFadeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEnemyBehindDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEnemyBehindCosAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerGenderSpecificData m_ByGenderData[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> m_ManSkeletalMeshPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> m_WomanSkeletalMeshPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBaseMovementDB> m_ManBaseMovementDBPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBaseMovementDB> m_WomanBaseMovementDBPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterGender m_eForcedGender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFakePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_PlayerPositionMPCParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AttachedProp, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> m_AttachedPropsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AttachedProp, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> m_AttachedPropClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OutfitIndex, meta=(AllowPrivateAccess=true))
    int32 m_iOutfitIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ForcedOutfitChange, meta=(AllowPrivateAccess=true))
    FOutfitData m_RepForcedOutfitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_CarriedProp;
    
public:
    UPlayerFightingComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void SetPropHidden(bool _bHidden);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnTargetChangedCallback(AActor* _oldTarget, AActor* _newTarget);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStatsUpdated();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_OutfitIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ForcedOutfitChange();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Dialog();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_AttachedProp();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLanded();
    
    UFUNCTION(BlueprintCallable)
    void OnFalling();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SwapOutfit(int32 _iNewOutfitIndex, UMaterialInterface* _forcedMaterial, bool _bSpawnProps);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SwapMesh(const FOutfitData& _outfitData, UMaterialInterface* _forcedMaterial);
    
private:
    UFUNCTION(BlueprintCallable)
    void BPF_SpawnProps(FDataTableRowHandle _propsDataTableRow, bool _bIsCarriedProp);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SpawnPropFromCurrentOutfit();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetIsInEndOfMovesetTutorial(bool _bActivate);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetIsGameover(bool _bIsGameOver);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void BPF_ServerSetIsInDialog(bool _bInDialog);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveProp(AActor* _propToRemove, bool _bDestroyProp, bool _bIsCarriedProp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsGameOver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOutfitData BPF_GetOutfitDataByGender(const ECharacterGender& _eGender) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlayerGenderSpecificData BPF_GetCurrentGenderData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle BPF_GetCarriedPropName() const;
    

    // Fix for true pure virtual functions not being implemented
};

