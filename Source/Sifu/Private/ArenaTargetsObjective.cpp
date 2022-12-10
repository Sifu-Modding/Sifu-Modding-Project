#include "ArenaTargetsObjective.h"

class AAISpawner;

TArray<TSoftObjectPtr<AAISpawner>> UArenaTargetsObjective::BPF_GetTargets() const {
    return TArray<TSoftObjectPtr<AAISpawner>>();
}


UArenaTargetsObjective::UArenaTargetsObjective() {
}

