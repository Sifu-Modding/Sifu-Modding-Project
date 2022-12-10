#include "AIWaveRefillDirector.h"

class AFightingCharacter;
class ABaseCharacter;
class AActor;

void AAIWaveRefillDirector::OnSituationAIDeathDetected(ABaseCharacter* _character) {
}

void AAIWaveRefillDirector::OnAIDeathDetected(const AFightingCharacter* _character, const FDamageInfos& _damageInfos) {
}

void AAIWaveRefillDirector::OnAIAbandonDetected(AActor* _actor) {
}

void AAIWaveRefillDirector::BPF_StartWaveByName(FName _WaveName) {
}

void AAIWaveRefillDirector::BPF_StartWave(int32 _iWaveIndex) {
}

void AAIWaveRefillDirector::BPF_StartNextWave() {
}

void AAIWaveRefillDirector::BPF_SetRefillEnabled(bool _bRequestImmediateRefill) {
}

void AAIWaveRefillDirector::BPF_SetRefillDisabled() {
}

bool AAIWaveRefillDirector::BPF_IsWaveInProgress() const {
    return false;
}

int32 AAIWaveRefillDirector::BPF_GetAIRemainingInCurrentWave() const {
    return 0;
}







AAIWaveRefillDirector::AAIWaveRefillDirector() {
}

