#include "VitalPointActor.h"

class AActor;
class AAimingBillboardActor;

void AVitalPointActor::OnBillBoardSelectionChanged(bool _bSelected, AAimingBillboardActor* _billboard) {
}

FVitalPointDataDefinition AVitalPointActor::BPF_GetDefinition() const {
    return FVitalPointDataDefinition{};
}

AActor* AVitalPointActor::BPF_GetActorOwner() const {
    return NULL;
}

AVitalPointActor::AVitalPointActor() {
}

