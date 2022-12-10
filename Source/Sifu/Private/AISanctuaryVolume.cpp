#include "AISanctuaryVolume.h"
#include "AISanctuaryComponent.h"

void AAISanctuaryVolume::OnSanctuaryAssignmentUpdated() {
}

void AAISanctuaryVolume::OnAlertLevelChanged(EAlertLevel _eNewLevel) {
}

AAISanctuaryVolume::AAISanctuaryVolume() {
    this->m_SanctuaryComponent = CreateDefaultSubobject<UAISanctuaryComponent>(TEXT("SanctuaryComponent"));
}

