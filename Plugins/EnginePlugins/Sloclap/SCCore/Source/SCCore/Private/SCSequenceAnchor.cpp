#include "SCSequenceAnchor.h"
#include "Components/SkeletalMeshComponent.h"

ASCSequenceAnchor::ASCSequenceAnchor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->m_ComponentSkeletalMesh = (USkeletalMeshComponent*)RootComponent;
}


