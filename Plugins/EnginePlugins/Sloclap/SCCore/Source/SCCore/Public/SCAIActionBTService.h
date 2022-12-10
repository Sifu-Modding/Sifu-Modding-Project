#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BehaviorTree/BTService.h"
#include "SCAIActionBTService.generated.h"

UCLASS()
class SCCORE_API USCAIActionBTService : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGameplayTag m_GameplayTag;
    
public:
    USCAIActionBTService();
};

