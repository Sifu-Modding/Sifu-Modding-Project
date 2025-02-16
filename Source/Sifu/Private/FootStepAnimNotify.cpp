#include "FootStepAnimNotify.h"

UFootStepAnimNotify::UFootStepAnimNotify() {
    this->m_eChannel = ECC_Pawn;
    this->m_bTraceComplex = false;
    this->m_fRaycastOffsetUp = 50.00f;
    this->m_fRaycastOffsetDown = 100.00f;
    this->m_eMinSignifiance = ESCSignificanceBuckets::Medium;
}

void UFootStepAnimNotify::BPF_SetFoot(FName _Foot) const {
}



