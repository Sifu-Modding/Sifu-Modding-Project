#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SCBTDecorator.h"
#include "SCAIExecutePendingActionDecorator.generated.h"

UCLASS()
class SCCORE_API USCAIExecutePendingActionDecorator : public USCBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGameplayTag m_GameplayTag;
    
public:
    USCAIExecutePendingActionDecorator();
};

