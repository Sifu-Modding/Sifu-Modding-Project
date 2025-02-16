#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "DetectEnemyBehindTraversalsBTService.generated.h"

UCLASS(Blueprintable)
class SIFU_API UDetectEnemyBehindTraversalsBTService : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDetectionDistance;
    
public:
    UDetectEnemyBehindTraversalsBTService();

};

