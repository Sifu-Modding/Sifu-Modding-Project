#include "SCActor.h"

ASCActor::ASCActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bIsStreamable = true;
    this->m_bIsPooled = false;
}


