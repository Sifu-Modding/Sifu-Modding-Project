#pragma once
#include "CoreMinimal.h"
#include "TraversalInputBehavior.generated.h"

USTRUCT(BlueprintType)
struct FTraversalInputBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseCharacterVelocityInsteadOfDirOnStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxAngleBetweenVelocityAndStickDir;
    
    SIFU_API FTraversalInputBehavior();
};

