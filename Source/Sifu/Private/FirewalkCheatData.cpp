#include "FirewalkCheatData.h"

UFirewalkCheatData::UFirewalkCheatData() {
    this->m_bActivateFeedbackEveryDamageTick = false;
    this->m_fVelocityTreshold = 10.00f;
}

void UFirewalkCheatData::OnMovementUpdated(float DeltaSeconds, FVector OldLocation, FVector OldVelocity) {
}

void UFirewalkCheatData::BPF_SwitchTimer(const bool _bActivate) {
}

void UFirewalkCheatData::BPF_ResetTimer() {
}

void UFirewalkCheatData::BPF_ForceStopTimer(const bool _bValue) {
}

void UFirewalkCheatData::BPF_DamageTick() {
}


