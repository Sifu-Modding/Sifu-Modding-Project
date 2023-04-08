#pragma once
#include "CoreMinimal.h"
#include "ESimpleAxis.h"
#include "ESimpleAxisSide.h"
#include "TraversalAxisConstraint.generated.h"

USTRUCT(BlueprintType)
struct FTraversalAxisConstraint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESimpleAxis m_eAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESimpleAxisSide m_eForbiddenAxisSide;
    
    SIFU_API FTraversalAxisConstraint();
};

