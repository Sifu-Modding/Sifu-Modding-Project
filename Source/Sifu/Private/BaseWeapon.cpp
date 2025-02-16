#include "BaseWeapon.h"
#include "Components/SkeletalMeshComponent.h"
#include "AnimInstanceReplicationComponent.h"
#include "Templates/SubclassOf.h"
#include "WeaponDestructionComponent.h"

ABaseWeapon::ABaseWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UWeaponDestructionComponent>(TEXT("DestructibleComponent"))) {
    this->m_throwFromPickUpTargetSettingsDB = NULL;
    this->m_weaponData = NULL;
    this->m_weaponGameplayData = NULL;
    this->m_SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BaseWeaponSkeletal"));
    this->m_AnimInstanceReplicationComponent = CreateDefaultSubobject<UAnimInstanceReplicationComponent>(TEXT("AnimInstanceReplicationComponent"));
    this->m_ThrowingFromPickupAvaibilityLayer = NULL;
    this->m_bAttachedFakie = false;
    this->m_fWeaponTicketMaxDistance = 500.00f;
    this->m_bAvailableForIA = true;
    this->m_SkeletalMeshComponent->SetupAttachment(RootComponent);
}

void ABaseWeapon::BPF_ResetWeaponGameplayData() {
}

void ABaseWeapon::BPF_ResetWeaponData() {
}

void ABaseWeapon::BPF_OverrideWeaponGameplayData(TSubclassOf<UWeaponGameplayData> _newWeaponGameplayData) {
}

void ABaseWeapon::BPF_OverrideWeaponData(TSubclassOf<UBaseWeaponData> _newWeaponData) {
}

UWeaponGameplayData* ABaseWeapon::BPF_GetWeaponGameplayData() const {
    return NULL;
}

UBaseWeaponData* ABaseWeapon::BPF_GetWeaponData() const {
    return NULL;
}

void ABaseWeapon::BPF_DropWeapon(EDropReason _eDropReason) {
}

void ABaseWeapon::BPF_AttachWeapon(USkeletalMeshComponent* _charMesh, FName _socketName, bool _bEquipOnOppositeHand, bool _bChangeFakie) {
}

void ABaseWeapon::BPF_ApplyDamage(EOnDestructibleDamageType _eDamageType, const FVector& _vImpactLocation, float _fCustomDamage, bool _bPlayDropOrderOnDestroy) {
}



