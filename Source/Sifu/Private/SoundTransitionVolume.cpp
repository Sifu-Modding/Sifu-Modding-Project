#include "SoundTransitionVolume.h"
#include "Components/SplineComponent.h"

ASoundTransitionVolume::ASoundTransitionVolume() {
    this->m_SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
}

