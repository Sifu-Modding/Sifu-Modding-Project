#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "ETraversalPhase.h"
#include "AnimStructTraversal.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FAnimStructTraversal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool m_bTraversalInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    ETraversalPhase m_eTraversalPhase;
    
    UPROPERTY(Transient)
    FAnimContainer m_animationContainersPerPhase[5];
    
    FAnimStructTraversal();
};

