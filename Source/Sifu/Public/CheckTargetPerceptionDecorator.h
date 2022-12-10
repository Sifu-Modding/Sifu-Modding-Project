#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SCBTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "CheckTargetPerceptionDecorator.generated.h"

class UAISense;

UCLASS()
class UCheckTargetPerceptionDecorator : public USCBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_TargetKey;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UAISense>> m_Senses;
    
    UCheckTargetPerceptionDecorator();
};

