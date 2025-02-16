#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_DynamicCameraNode.generated.h"

UCLASS(Blueprintable)
class SIFU_API UBTTask_DynamicCameraNode : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_CameraDataBlackboardKeySelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_ActorRefBlackboardKeySelector;
    
    UBTTask_DynamicCameraNode();

};

