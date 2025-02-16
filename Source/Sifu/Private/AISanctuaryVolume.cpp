#include "AISanctuaryVolume.h"
#include "AISanctuaryComponent.h"

AAISanctuaryVolume::AAISanctuaryVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_SanctuaryComponent = CreateDefaultSubobject<UAISanctuaryComponent>(TEXT("SanctuaryComponent"));
}

void AAISanctuaryVolume::OnSanctuaryAssignmentUpdated() {
}

void AAISanctuaryVolume::OnAlertLevelChanged(EAlertLevel _eNewLevel) {
}


