#pragma once
#include "CoreMinimal.h"
#include "ECameraService.generated.h"

UENUM()
enum class ECameraService {
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

