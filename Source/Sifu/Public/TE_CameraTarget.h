#pragma once
#include "CoreMinimal.h"
#include "BaseTargetEvaluation.h"
#include "TE_CameraTarget.generated.h"

UCLASS(Blueprintable)
class SIFU_API UTE_CameraTarget : public UBaseTargetEvaluation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOnlyRelevantForOneTarget;
    
    UTE_CameraTarget();

};

