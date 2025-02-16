#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "InvestigationPositionUpdaterService.generated.h"

UCLASS(Blueprintable)
class SIFU_API UInvestigationPositionUpdaterService : public UBTService {
    GENERATED_BODY()
public:
    UInvestigationPositionUpdaterService();

};

