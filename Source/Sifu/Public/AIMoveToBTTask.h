#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "AIMoveToBTTask.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAIMoveToBTTask : public UBTTask_MoveTo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector AcceptableRadiusKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector FilterClassKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanPredictStopTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOverridePacingGoalActor;
    
public:
    UAIMoveToBTTask();
};

