#include "SkillGameplayEffect.h"
#include "GameplayEffect.h"

USkillGameplayEffect::USkillGameplayEffect() {
    this->DurationPolicy = EGameplayEffectDurationType::Infinite;
    this->m_iSkillPointCost = 0;
    this->m_eStatUsedToUnlockSkill = ECharacterStat::SpareStatPoints;
}


