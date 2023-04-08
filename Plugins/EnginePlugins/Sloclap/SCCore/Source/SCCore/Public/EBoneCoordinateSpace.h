#pragma once
#include "CoreMinimal.h"
#include "EBoneCoordinateSpace.generated.h"

UENUM(BlueprintType)
enum class EBoneCoordinateSpace : uint8 {
    Component,
    Actor,
    World,
    BoneSpace,
    WorldForceUpdate,
};

