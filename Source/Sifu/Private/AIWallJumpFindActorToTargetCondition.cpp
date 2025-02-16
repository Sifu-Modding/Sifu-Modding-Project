#include "AIWallJumpFindActorToTargetCondition.h"
#include "Templates/SubclassOf.h"

UAIWallJumpFindActorToTargetCondition::UAIWallJumpFindActorToTargetCondition() {
    this->m_AttackAction = NULL;
}

TSubclassOf<UAIActionWallJumpAttack> UAIWallJumpFindActorToTargetCondition::BPF_GetAttackActionClass() const {
    return NULL;
}

UAIActionWallJumpAttack* UAIWallJumpFindActorToTargetCondition::BPF_GetAttackAction() const {
    return NULL;
}


