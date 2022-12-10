#include "AISuperDizzyParams.h"

FAISuperDizzyParams::FAISuperDizzyParams() {
    this->m_bCanBeSuperDizzy = false;
    this->m_fSuperDizzyResistance = 0.00f;
    this->m_fSuperDizzyRecoveryCooldown = 0.00f;
    this->m_fSuperDizzyRecoveryCooldownWhenComplete = 0.00f;
    this->m_fSuperDizzyGaugeRatioAfterSuperDizzy = 0.00f;
    this->m_fSuperDizzyRecoveryPerSec = 0.00f;
}

