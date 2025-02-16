#include "SCPoolableActorsContainer.h"
#include "Templates/SubclassOf.h"

ASCPoolableActorsContainer::ASCPoolableActorsContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_iGenerationVersion = 0;
}

int32 ASCPoolableActorsContainer::BPF_GetActorsCount(TSubclassOf<AActor> _class) {
    return 0;
}

ASCCharacterImpostor* ASCPoolableActorsContainer::BPF_AddCharacterImpostor(FName _poolName, bool _bRenameWithPoolName) {
    return NULL;
}

void ASCPoolableActorsContainer::BPF_AddActors(TSubclassOf<AActor> _class, int32 _iCount, TArray<AActor*>& _outCreatedActors, FName _poolName) {
}

AActor* ASCPoolableActorsContainer::BPF_AddActor(TSubclassOf<AActor> _class, FName _poolName, bool _bRenameWithPoolName) {
    return NULL;
}


