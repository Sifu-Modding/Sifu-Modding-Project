#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_CameraNode.generated.h"

class UAbstractCameraData;

UCLASS()
class SIFU_API UBTTask_CameraNode : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAbstractCameraData* m_CameraData;
    
    UBTTask_CameraNode();
};

