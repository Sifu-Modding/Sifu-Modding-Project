#include "ReplayableDestructibleComponent.h"
#include "Net/UnrealNetwork.h"

void UReplayableDestructibleComponent::OnReplayTimeDilationChanged(float _fDilation) {
}

void UReplayableDestructibleComponent::OnReplaySystemRecordingChanged(bool _bIsRecording) {
}

void UReplayableDestructibleComponent::OnRep_ReplayUpdateChunksOnTick() {
}

void UReplayableDestructibleComponent::OnRep_ReplayableDestructibleState() {
}

void UReplayableDestructibleComponent::OnRep_DamageEvents() {
}

void UReplayableDestructibleComponent::OnRep_ChunksState() {
}

void UReplayableDestructibleComponent::OnRep_Bounds() {
}

void UReplayableDestructibleComponent::EnableNotifyHitEvent() {
}

void UReplayableDestructibleComponent::BPF_SetApexActorEnabled(bool _bValue) {
}

bool UReplayableDestructibleComponent::BPF_IsDamaged() const {
    return false;
}

void UReplayableDestructibleComponent::BPE_OnPreFirstDamageReceived_Implementation(float _fBaseDamage, bool _bFullDamage) {
}

void UReplayableDestructibleComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UReplayableDestructibleComponent, m_bOnFirstDestructionEnableChunksCollision);
    DOREPLIFETIME(UReplayableDestructibleComponent, m_bReplayUpdateChunksOnTick);
    DOREPLIFETIME(UReplayableDestructibleComponent, m_DamageEvents);
    DOREPLIFETIME(UReplayableDestructibleComponent, m_ChunksState);
    DOREPLIFETIME(UReplayableDestructibleComponent, m_ReplicatedBounds);
    DOREPLIFETIME(UReplayableDestructibleComponent, m_eReplayableDestructibleState);
}

UReplayableDestructibleComponent::UReplayableDestructibleComponent() {
    this->m_bCreatePhysicsStateAtStart = true;
    this->m_fDelayNotifyHitEvent = 0.00f;
    this->m_bOnFirstDestructionEnableChunksCollision = true;
    this->m_bReplayUpdateChunksOnTick = false;
    this->m_ReplayableStaticObjectComponent = NULL;
    this->m_bCreatePhysicsState = true;
    this->m_eReplayableDestructibleState = EReplayableDestructibleState::Unspawned;
}

