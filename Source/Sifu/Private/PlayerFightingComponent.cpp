#include "PlayerFightingComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;
class UMaterialInterface;

void UPlayerFightingComponent::SetPropHidden(bool _bHidden) {
}

void UPlayerFightingComponent::OnTargetChangedCallback(AActor* _oldTarget, AActor* _newTarget) {
}

void UPlayerFightingComponent::OnStatsUpdated() {
}

void UPlayerFightingComponent::OnRep_OutfitIndex() {
}

void UPlayerFightingComponent::OnRep_Dialog() {
}

void UPlayerFightingComponent::OnLanded() {
}

void UPlayerFightingComponent::BPF_SwapOutfit(int32 _iNewOutfitIndex, UMaterialInterface* _forcedMaterial, bool _bSpawnProps) {
}

void UPlayerFightingComponent::BPF_SwapMesh(const FOutfitData& _outfitData, UMaterialInterface* _forcedMaterial) {
}

void UPlayerFightingComponent::BPF_SpawnPropFromCurrentOutfit() {
}

void UPlayerFightingComponent::BPF_SetIsInEndOfMovesetTutorial(bool _bActivate) {
}

void UPlayerFightingComponent::BPF_ServerSetIsInDialog_Implementation(bool _bInDialog) {
}
bool UPlayerFightingComponent::BPF_ServerSetIsInDialog_Validate(bool _bInDialog) {
    return true;
}

void UPlayerFightingComponent::BPF_RemoveProp() {
}

FPlayerGenderSpecificData UPlayerFightingComponent::BPF_GetCurrentGenderData() const {
    return FPlayerGenderSpecificData{};
}

void UPlayerFightingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlayerFightingComponent, m_bIsInDialog);
    DOREPLIFETIME(UPlayerFightingComponent, m_iOutfitIndex);
}

UPlayerFightingComponent::UPlayerFightingComponent() {
    this->m_bIsInDialog = false;
    this->m_DefaultEquipmentSelection = NULL;
    this->m_fLockMoveFadeDuration = 1.00f;
    this->m_fEnemyBehindDist = 600.00f;
    this->m_fEnemyBehindCosAngle = 0.60f;
    this->m_eForcedGender = ECharacterGender::None;
    this->m_bFakePlayer = false;
    this->m_AttachedProp = NULL;
    this->m_iOutfitIndex = 0;
}

