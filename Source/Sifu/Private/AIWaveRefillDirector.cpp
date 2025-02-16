#include "AIWaveRefillDirector.h"

AAIWaveRefillDirector::AAIWaveRefillDirector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AAIWaveRefillDirector::OnSituationAIDeathDetected(ABaseCharacter* _character) {
}

void AAIWaveRefillDirector::OnRelatedSituationActivated(AAISituationActor* _aiSituationActor) {
}

void AAIWaveRefillDirector::OnAIDownDetected(AAISpawner* _spawner) {
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

void AAIWaveRefillDirector::BPF_CancelCurrentWave() {
}








