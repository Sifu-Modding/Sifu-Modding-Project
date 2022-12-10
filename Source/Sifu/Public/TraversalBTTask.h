#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TraversalBTTask.generated.h"

UCLASS(Abstract)
class SIFU_API UTraversalBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    InputAction m_CancelOnActionAvailable;
    
public:
    UTraversalBTTask();
};

