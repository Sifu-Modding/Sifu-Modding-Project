#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "TraversalAnimContainer.h"
#include "PushTraversalAnimContainer.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FPushTraversalAnimContainer : public FTraversalAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_InstigatorAnim;
    
    FPushTraversalAnimContainer();
};

