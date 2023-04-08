#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "AIReactionAttackService.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAIReactionAttackService : public UBTService {
    GENERATED_BODY()
public:
    UAIReactionAttackService();
};

