#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "InputAction.h"
#include "TraversalBTTask.generated.h"

UCLASS(Abstract, Blueprintable)
class SIFU_API UTraversalBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    InputAction m_CancelOnActionAvailable;
    
public:
    UTraversalBTTask();

};

