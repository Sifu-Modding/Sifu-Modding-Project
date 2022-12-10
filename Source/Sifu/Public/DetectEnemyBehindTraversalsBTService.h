#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "DetectEnemyBehindTraversalsBTService.generated.h"

UCLASS()
class SIFU_API UDetectEnemyBehindTraversalsBTService : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_fDetectionDistance;
    
public:
    UDetectEnemyBehindTraversalsBTService();
};

