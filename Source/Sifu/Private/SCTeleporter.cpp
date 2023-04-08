#include "SCTeleporter.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

class AActor;

void ASCTeleporter::BPF_RemoveActorToTeleport(AActor* _leavingActor) {
}

void ASCTeleporter::BPF_LaunchTeleport() {
}

void ASCTeleporter::BPF_AddActorToTeleport(AActor* _actorToTeleport) {
}

ASCTeleporter::ASCTeleporter() {
    this->m_RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->m_EntryBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("EntryBoxComponent"));
    this->m_ExitBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ExitBoxComponent"));
}

