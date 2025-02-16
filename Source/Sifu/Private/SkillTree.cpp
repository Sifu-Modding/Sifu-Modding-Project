#include "SkillTree.h"
#include "Templates/SubclassOf.h"

ASkillTree::ASkillTree(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_SkillsDB = NULL;
}

void ASkillTree::BPF_UpdateTreeOverTime(const TArray<TSubclassOf<USkillGameplayEffect>>& _prevUnlockedSkills, const TArray<TSubclassOf<USkillGameplayEffect>>& _newUnlockedSkills, float _fDuration, UCurveFloat* _floatCurve, FSCDynamicDelegate _onFinished) {
}

void ASkillTree::BPF_SetTreeState(const TArray<TSubclassOf<USkillGameplayEffect>>& _unlockedSkills) {
}

void ASkillTree::BPF_BlendTreeState(const TArray<TSubclassOf<USkillGameplayEffect>>& _prevSkills, const TArray<TSubclassOf<USkillGameplayEffect>>& _newSkills, float _fAlpha) {
}



