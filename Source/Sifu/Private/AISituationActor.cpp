#include "AISituationActor.h"
#include "SCSaveGameComponent.h"

AAISituationActor::AAISituationActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bHasActiveLDVisibilityOverride = false;
    this->m_SaveComponent = CreateDefaultSubobject<USCSaveGameComponent>(TEXT("SaveGameComponent"));
    this->m_bIsLastManAllowed = true;
    this->m_bForceLastMan = false;
    this->m_iMinKillBeforeLastMan = 0;
    this->m_iLastManGaugeIncrementValue = 1;
    this->m_iLastManMaxOccuranceCount = 1;
    this->m_bRepeatBarksWhenExhausted = true;
    this->m_bEnableMaxImpostorsLimit = false;
    this->m_bDespawnEnabled = false;
    this->m_bSpawnRequestedOnSaveLoaded = false;
    this->m_iCurrentLastManOccuranceCount = 0;
    this->m_bAutoSpawnedOnSaveLoaded = true;
    this->m_eBehaviorToSetOnSpawn = EGlobalBehaviors::Idle;
}

void AAISituationActor::OnUpdatedFromSaveCallback() {
}

FAISituationNamedActor AAISituationActor::Conv_NameToAISituationNamedActor(FName _name) {
    return FAISituationNamedActor{};
}

void AAISituationActor::BPF_UnSpawnSituation() {
}

void AAISituationActor::BPF_SwitchToSuperAbandonState() {
}

void AAISituationActor::BPF_SwitchToFriendly(bool _bFriendly) {
}

void AAISituationActor::BPF_SwitchToAbandoning() {
}

void AAISituationActor::BPF_SpawnSituation(EGlobalBehaviors _eBehaviorToSetOnSpawn, AActor* _targetForHostileBehaviors, bool _bForce, bool _bSkipBark) {
}

int32 AAISituationActor::BPF_GetSpawnersUsedCount(bool _bIncludeAlerted, bool _bOnlyCurrentlyUsed) const {
    return 0;
}

void AAISituationActor::BPF_GetSpawnersUsed(TArray<AAISpawner*>& _outSpawners, bool _bIncludeAlerted, bool _bOnlyCurrentlyUsed) const {
}

void AAISituationActor::BPF_GetSpawnerGroupsUsed(TArray<ASpawnerGroup*>& _outSpawnerGroups) const {
}

AActor* AAISituationActor::BPF_GetNamedActor(const FAISituationNamedActor& _namedActor) const {
    return NULL;
}

EGlobalBehaviors AAISituationActor::BPF_GetBehaviorOverride_Implementation() {
    return EGlobalBehaviors::Idle;
}

int32 AAISituationActor::BPF_GetAis(TArray<UAIFightingComponent*>& _outAiComponents, bool _bIncludeAlertedSpawners, bool _bAppendToArray, bool _bIncludeAbandonningAIs) const {
    return 0;
}

void AAISituationActor::BPF_EnableHitOnAI(bool _bEnable) {
}

void AAISituationActor::BPF_ChangeAiPerception(bool _bActivate) {
}

bool AAISituationActor::BPF_AreAllSpawnerGroupsCleared() const {
    return false;
}

void AAISituationActor::BPF_AddNamedActor(AActor* _actor, FName _name) {
}







void AAISituationActor::AlertLevelChangedCallback(EAlertLevel _eNewLevel) {
}


