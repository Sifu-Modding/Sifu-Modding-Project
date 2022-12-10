#include "SCSequenceAnchor.h"
#include "Components/SkeletalMeshComponent.h"

ASCSequenceAnchor::ASCSequenceAnchor() {
    this->m_ComponentSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
}

