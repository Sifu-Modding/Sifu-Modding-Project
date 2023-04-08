#pragma once
#include "CoreMinimal.h"
#include "CombatSpeedTransitionsAnimContainer.h"
#include "OrientedRotationAnimContainer.h"
#include "SpeedTransitionsAnimContainer.h"
#include "LocomotionTransitionsAnimContainer.generated.h"

USTRUCT(BlueprintType)
struct FLocomotionTransitionsAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatSpeedTransitionsAnimContainer m_V1[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpeedTransitionsAnimContainer m_V2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpeedTransitionsAnimContainer m_V3;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FOrientedRotationAnimContainer m_TurnInPlace[2];
    
    SIFU_API FLocomotionTransitionsAnimContainer();
};

