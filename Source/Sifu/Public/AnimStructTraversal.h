#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "ETraversalPhase.h"
#include "AnimStructTraversal.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FAnimStructTraversal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bTraversalInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ETraversalPhase m_eTraversalPhase;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimContainer m_animationContainersPerPhase[5];
    
    FAnimStructTraversal();
};

