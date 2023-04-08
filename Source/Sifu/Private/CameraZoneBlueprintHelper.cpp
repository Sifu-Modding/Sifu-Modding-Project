#include "CameraZoneBlueprintHelper.h"

void UCameraZoneBlueprintHelper::BPF_GetSafeZoneListFromDeadZones(TArray<FDeadZone>& _outListOfSafeZones, const TArray<FDeadZone>& _inDeadZones) {
}

float UCameraZoneBlueprintHelper::BPF_GetMidAngle(const FDeadZone& _inDeadZone) {
    return 0.0f;
}

bool UCameraZoneBlueprintHelper::BPF_GetDeadZoneContainingAngle(FDeadZone& _outDeadZone, const TArray<FDeadZone>& _inDeadZones, float _fAngleInDeg) {
    return false;
}

bool UCameraZoneBlueprintHelper::BPF_GetClosestDeadZoneToAngle(FDeadZone& _outDeadZone, const TArray<FDeadZone>& _inDeadZones, float _fAngleInDeg, float _fAngleDiffMaxInDeg) {
    return false;
}

UCameraZoneBlueprintHelper::UCameraZoneBlueprintHelper() {
}

