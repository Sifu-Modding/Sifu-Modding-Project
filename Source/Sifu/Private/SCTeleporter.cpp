#include "SCTeleporter.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

ASCTeleporter::ASCTeleporter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->m_EntryBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("EntryBoxComponent"));
    this->m_ExitBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ExitBoxComponent"));
}

void ASCTeleporter::BPF_RemoveActorToTeleport(AActor* _leavingActor) {
}

void ASCTeleporter::BPF_LaunchTeleport() {
}

void ASCTeleporter::BPF_AddActorToTeleport(AActor* _actorToTeleport) {
}


