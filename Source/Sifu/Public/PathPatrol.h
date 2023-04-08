#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPatrolType.h"
#include "PatrolControlPoint.h"
#include "PathPatrol.generated.h"

UCLASS(Blueprintable)
class SIFU_API APathPatrol : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPatrolControlPoint> m_patrolControlPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPatrolType m_ePatrolType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_lookAtTarget;
    
    APathPatrol();
};

