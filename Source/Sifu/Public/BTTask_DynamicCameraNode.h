#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_DynamicCameraNode.generated.h"

UCLASS()
class SIFU_API UBTTask_DynamicCameraNode : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_CameraDataBlackboardKeySelector;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_ActorRefBlackboardKeySelector;
    
    UBTTask_DynamicCameraNode();
};

