#pragma once
#include "CoreMinimal.h"
#include "SCBTTaskNode.h"
#include "EGlobalBehaviors.h"
#include "ForceGlobalBehaviorBTTask.generated.h"

UCLASS()
class SIFU_API UForceGlobalBehaviorBTTask : public USCBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EGlobalBehaviors m_Behavior;
    
public:
    UForceGlobalBehaviorBTTask();
};

