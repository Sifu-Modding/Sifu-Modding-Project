#include "RailForMovable.h"
#include "Components/BoxComponent.h"
#include "Components/SplineComponent.h"

ARailForMovable::ARailForMovable() {
    this->m_Rail = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComp"));
    this->m_EntryBox = CreateDefaultSubobject<UBoxComponent>(TEXT("EntryBoxComp"));
    this->m_fSpeedThreshold = 0.00f;
}

