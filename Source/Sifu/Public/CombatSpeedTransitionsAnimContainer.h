#pragma once
#include "CoreMinimal.h"
#include "CardinalChangementAnimContainer.h"
#include "SpeedTransitionsAnimContainer.h"
#include "CombatSpeedTransitionsAnimContainer.generated.h"

USTRUCT(BlueprintType)
struct FCombatSpeedTransitionsAnimContainer : public FSpeedTransitionsAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCardinalChangementAnimContainer m_Start_FR;
    
    SIFU_API FCombatSpeedTransitionsAnimContainer();
};

