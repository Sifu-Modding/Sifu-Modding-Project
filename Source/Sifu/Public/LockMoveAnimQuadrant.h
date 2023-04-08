#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "BlendSpaceDirectionContainer.h"
#include "LockMoveAnimQuadrant.generated.h"

USTRUCT(BlueprintType)
struct FLockMoveAnimQuadrant {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_LockMoveAnimContainer[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlendSpaceDirectionContainer m_LockMoveBlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlendSpaceDirectionContainer m_LockMoveUpperBodyBlendSpace;
    
    SIFU_API FLockMoveAnimQuadrant();
};

