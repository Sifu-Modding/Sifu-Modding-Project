#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EOrderType.h"
#include "WaitOrderTask.generated.h"

UCLASS(Blueprintable)
class SIFU_API UWaitOrderTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EOrderType> m_Orders;
    
    UWaitOrderTask();
};

