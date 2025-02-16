#pragma once
#include "CoreMinimal.h"
#include "BaseTargetEvaluation.h"
#include "TE_Preview.generated.h"

UCLASS(Abstract, Blueprintable)
class SIFU_API UTE_Preview : public UBaseTargetEvaluation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCameraTargetDirectionCoeff;
    
    UTE_Preview();

};

