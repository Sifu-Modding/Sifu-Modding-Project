#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EOrderType.h"
#include "IsOrderRunningService.generated.h"

UCLASS(Blueprintable)
class SIFU_API UIsOrderRunningService : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_BlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOrderType m_eOrder;
    
    UIsOrderRunningService();
};

