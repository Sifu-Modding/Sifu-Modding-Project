#include "AttackOriginHelper.h"

UAttackOriginHelper::UAttackOriginHelper() {
}

EAttackOrigin UAttackOriginHelper::BPF_Mirror(EAttackOrigin _eAttackOrigin, bool _bMirror) {
    return EAttackOrigin::Left;
}


