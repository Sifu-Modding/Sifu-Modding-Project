#include "BoxWithNavComponent.h"
#include "Templates/SubclassOf.h"

UBoxWithNavComponent::UBoxWithNavComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UBoxWithNavComponent::BPF_SetAreaClass(TSubclassOf<UNavArea> _navArea) {
}


