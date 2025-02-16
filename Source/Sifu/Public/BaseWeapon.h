#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AIWeaponTicketable.h"
#include "EDropReason.h"
#include "EOnDestructibleDamageType.h"
#include "Templates/SubclassOf.h"
#include "ThrowableActor.h"
#include "BaseWeapon.generated.h"

class AFightingCharacter;
class UAnimInstanceReplicationComponent;
class UAvailabilityLayerData;
class UBaseWeaponData;
class USkeletalMeshComponent;
class UTargetSettingsDB;
class UWeaponGameplayData;

UCLASS(Blueprintable)
class SIFU_API ABaseWeapon : public AThrowableActor, public IAIWeaponTicketable {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDrop, EDropReason, _eDropReason);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDrop m_OnDrop;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTargetSettingsDB> m_throwFromPickUpTargetSettingsDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBaseWeaponData> m_weaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWeaponGameplayData> m_weaponGameplayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnimInstanceReplicationComponent* m_AnimInstanceReplicationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_EquipmentSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFightingCharacter> m_weaponBearer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvailabilityLayerData* m_ThrowingFromPickupAvaibilityLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAttachedFakie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_ResourceCooldownRangeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWeaponTicketMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAvailableForIA;
    
public:
    ABaseWeapon(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BPF_ResetWeaponGameplayData();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetWeaponData();
    
    UFUNCTION(BlueprintCallable)
    void BPF_OverrideWeaponGameplayData(TSubclassOf<UWeaponGameplayData> _newWeaponGameplayData);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OverrideWeaponData(TSubclassOf<UBaseWeaponData> _newWeaponData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWeaponGameplayData* BPF_GetWeaponGameplayData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBaseWeaponData* BPF_GetWeaponData() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_DropWeapon(EDropReason _eDropReason);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AttachWeapon(USkeletalMeshComponent* _charMesh, FName _socketName, bool _bEquipOnOppositeHand, bool _bChangeFakie);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ApplyDamage(EOnDestructibleDamageType _eDamageType, const FVector& _vImpactLocation, float _fCustomDamage, bool _bPlayDropOrderOnDestroy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_CanUseDamagedWeapon(int32 _iDamagedWeaponIndex);
    

    // Fix for true pure virtual functions not being implemented
};

