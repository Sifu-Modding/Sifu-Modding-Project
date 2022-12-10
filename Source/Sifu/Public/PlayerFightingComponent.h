#pragma once
#include "CoreMinimal.h"
#include "ECharacterGender.h"
#include "Components/ActorComponent.h"
#include "Navigation/CrowdAgentInterface.h"
#include "PlayerGenderSpecificData.h"
#include "OutfitData.h"
#include "PlayerFightingComponent.generated.h"

class UEquipmentSelectionData;
class AActor;
class USkeletalMesh;
class UBaseMovementDB;
class UMaterialInterface;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UPlayerFightingComponent : public UActorComponent, public ICrowdAgentInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPropAttached, AActor*, _spawnedProp);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMeshChanged, ECharacterGender, _eNewGender, bool, _bMustHandlePropSpawn);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDialogStatusChanged);
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_Dialog)
    bool m_bIsInDialog;
    
    UPROPERTY(BlueprintAssignable)
    FDialogStatusChanged OnDialogStatusChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnPropAttached OnPropAttached;
    
    UPROPERTY(BlueprintAssignable)
    FOnMeshChanged OnMeshChanged;
    
private:
    UPROPERTY(EditAnywhere)
    UEquipmentSelectionData* m_DefaultEquipmentSelection;
    
    UPROPERTY(EditAnywhere)
    float m_fLockMoveFadeDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fEnemyBehindDist;
    
    UPROPERTY(EditAnywhere)
    float m_fEnemyBehindCosAngle;
    
    UPROPERTY(EditAnywhere)
    FPlayerGenderSpecificData m_ByGenderData[2];
    
    UPROPERTY()
    TSoftObjectPtr<USkeletalMesh> m_ManSkeletalMeshPath;
    
    UPROPERTY()
    TSoftObjectPtr<USkeletalMesh> m_WomanSkeletalMeshPath;
    
    UPROPERTY()
    TSoftObjectPtr<UBaseMovementDB> m_ManBaseMovementDBPath;
    
    UPROPERTY()
    TSoftObjectPtr<UBaseMovementDB> m_WomanBaseMovementDBPath;
    
    UPROPERTY(EditDefaultsOnly)
    ECharacterGender m_eForcedGender;
    
    UPROPERTY(EditAnywhere)
    bool m_bFakePlayer;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_PlayerPositionMPCParameterName;
    
    UPROPERTY(Transient)
    AActor* m_AttachedProp;
    
protected:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_OutfitIndex)
    int32 m_iOutfitIndex;
    
public:
    UPlayerFightingComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void SetPropHidden(bool _bHidden);
    
public:
    UFUNCTION()
    void OnTargetChangedCallback(AActor* _oldTarget, AActor* _newTarget);
    
private:
    UFUNCTION()
    void OnStatsUpdated();
    
protected:
    UFUNCTION()
    void OnRep_OutfitIndex();
    
private:
    UFUNCTION()
    void OnRep_Dialog();
    
    UFUNCTION()
    void OnLanded();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SwapOutfit(int32 _iNewOutfitIndex, UMaterialInterface* _forcedMaterial, bool _bSpawnProps);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SwapMesh(const FOutfitData& _outfitData, UMaterialInterface* _forcedMaterial);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SpawnPropFromCurrentOutfit();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetIsInEndOfMovesetTutorial(bool _bActivate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void BPF_ServerSetIsInDialog(bool _bInDialog);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveProp();
    
    UFUNCTION(BlueprintPure)
    FPlayerGenderSpecificData BPF_GetCurrentGenderData() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

