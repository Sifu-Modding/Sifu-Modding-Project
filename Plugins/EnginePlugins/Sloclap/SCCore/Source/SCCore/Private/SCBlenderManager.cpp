#include "SCBlenderManager.h"

ASCBlenderManager::ASCBlenderManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetStartup = true;
    this->bReplayRewindable = true;
}


