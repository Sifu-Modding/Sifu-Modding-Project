#pragma once
#include "CoreMinimal.h"
#include "CardinalAnimContainer.h"
#include "CardinalChangementAnimContainer.h"
#include "OrientedRotationAnimContainer.h"
#include "SpeedTransitionsAnimContainer.generated.h"

USTRUCT(BlueprintType)
struct FSpeedTransitionsAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCardinalChangementAnimContainer m_Start_FL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCardinalAnimContainer m_Stop_FL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOrientedRotationAnimContainer m_UTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCardinalAnimContainer m_Strafe;
    
    SIFU_API FSpeedTransitionsAnimContainer();
};

