#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotify.h"
#include "Engine/EngineTypes.h"
#include "MovementModeNotify.generated.h"

UCLASS(CollapseCategories)
class SIFU_API UMovementModeNotify : public USCAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMovementMode> m_eDesiredMode;
    
    UMovementModeNotify();
};

