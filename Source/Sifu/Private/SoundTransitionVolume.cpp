#include "SoundTransitionVolume.h"
#include "Components/SplineComponent.h"

ASoundTransitionVolume::ASoundTransitionVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->m_SplineComponent->SetupAttachment(RootComponent);
}


