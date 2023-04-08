#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "MovementFocusUpdateBTService.generated.h"

UCLASS(Blueprintable)
class SIFU_API UMovementFocusUpdateBTService : public UBTService {
    GENERATED_BODY()
public:
    UMovementFocusUpdateBTService();
};

