#pragma once
#include "CoreMinimal.h"
#include "ECameraService.generated.h"

UENUM(BlueprintType)
enum class ECameraService : uint8 {
    Comfort,
    Collision,
    Following,
    CollisionCircle,
    FulcrumOffset,
    LookAtService,
    PitchRestingService,
    DeadZoneRepulsionService,
    MirrorCursorManagementService,
    CameraCollisionSideService,
    MirrorCursorMeleeService,
    SleepingService,
    Fade,
    LockOnTarget,
    LockFollowing,
    LockFraimingContainer,
    Count,
    Invalid,
};

