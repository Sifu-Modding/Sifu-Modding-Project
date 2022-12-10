#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "Engine/EngineTypes.h"
#include "MovementModeCondition.generated.h"

UCLASS()
class SIFU_API UMovementModeCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMovementMode> m_eMovementMode;
    
    UMovementModeCondition();
};

