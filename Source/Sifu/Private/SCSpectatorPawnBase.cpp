#include "SCSpectatorPawnBase.h"

ASCSpectatorPawnBase::ASCSpectatorPawnBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAddDefaultMovementBindings = false;
    this->m_VerticalStrifeSpeedCurve = NULL;
    this->m_fVerticalStrifeSpeed = 1.00f;
    this->m_fLookSpeed = 1.00f;
}



