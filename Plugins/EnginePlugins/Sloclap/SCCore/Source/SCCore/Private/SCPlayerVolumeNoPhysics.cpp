#include "SCPlayerVolumeNoPhysics.h"

ASCPlayerVolumeNoPhysics::ASCPlayerVolumeNoPhysics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bTestOverlap = true;
    this->m_fFullyInsideTolerances = 0.00f;
}


