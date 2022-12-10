#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "AIMoveToBTTask.generated.h"

UCLASS()
class SIFU_API UAIMoveToBTTask : public UBTTask_MoveTo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector AcceptableRadiusKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector FilterClassKey;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanPredictStopTransition;
    
    UPROPERTY(EditAnywhere)
    bool m_bOverridePacingGoalActor;
    
public:
    UAIMoveToBTTask();
};

