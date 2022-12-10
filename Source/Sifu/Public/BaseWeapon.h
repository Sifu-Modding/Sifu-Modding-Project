#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ThrowableActor.h"
#include "AIWeaponTicketable.h"
#include "EDropReason.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EOnDestructibleDamageType.h"
#include "BaseWeapon.generated.h"

class UWeaponGameplayData;
class UTargetSettingsDB;
class USkeletalMeshComponent;
class UBaseWeaponData;
class UAnimInstanceReplicationComponent;
class AFightingCharacter;
class UAvailabilityLayerData;

UCLASS()
class SIFU_API ABaseWeapon : public AThrowableActor, public IAIWeaponTicketable {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDrop, EDropReason, _eDropReason);
    
    UPROPERTY(BlueprintAssignable)
    FOnDrop m_OnDrop;
    
protected:
    UPROPERTY(VisibleAnywhere)
    TSubclassOf<UTargetSettingsDB> m_throwFromPickUpTargetSettingsDB;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UBaseWeaponData> m_weaponData;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UWeaponGameplayData> m_weaponGameplayData;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USkeletalMeshComponent* m_SkeletalMeshComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UAnimInstanceReplicationComponent* m_AnimInstanceReplicationComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName m_EquipmentSocketName;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AFightingCharacter> m_weaponBearer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAvailabilityLayerData* m_ThrowingFromPickupAvaibilityLayer;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool m_bAttachedFakie;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_ResourceCooldownRangeValue;
    
    UPROPERTY(EditAnywhere)
    float m_fWeaponTicketMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bAvailableForIA;
    
public:
    ABaseWeapon();
    UFUNCTION(BlueprintCallable)
    void BPF_ResetWeaponGameplayData();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetWeaponData();
    
    UFUNCTION(BlueprintCallable)
    void BPF_OverrideWeaponGameplayData(TSubclassOf<UWeaponGameplayData> _newWeaponGameplayData);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OverrideWeaponData(TSubclassOf<UBaseWeaponData> _newWeaponData);
    
    UFUNCTION(BlueprintPure)
    UWeaponGameplayData* BPF_GetWeaponGameplayData() const;
    
    UFUNCTION(BlueprintPure)
    UBaseWeaponData* BPF_GetWeaponData() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_DropWeapon(EDropReason _eDropReason);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AttachWeapon(USkeletalMeshComponent* _charMesh, FName _socketName, bool _bEquipOnOppositeHand, bool _bChangeFakie);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ApplyDamage(EOnDestructibleDamageType _eDamageType, const FVector& _vImpactLocation, float _fCustomDamage, bool _bPlayDropOrderOnDestroy);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_CanUseDamagedWeapon(int32 _iDamagedWeaponIndex);
    
    
    // Fix for true pure virtual functions not being implemented
};

