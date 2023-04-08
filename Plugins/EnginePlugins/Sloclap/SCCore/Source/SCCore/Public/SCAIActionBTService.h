#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "GameplayTagContainer.h"
#include "SCAIActionBTService.generated.h"

UCLASS(Blueprintable)
class SCCORE_API USCAIActionBTService : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_GameplayTag;
    
public:
    USCAIActionBTService();
};

