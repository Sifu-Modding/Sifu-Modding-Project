#pragma once
#include "CoreMinimal.h"
#include "BlendSpaceContainer.h"
#include "BlendSpaceDirectionContainer.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FBlendSpaceDirectionContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlendSpaceContainer m_BlendSpaceFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlendSpaceContainer m_BlendSpaceBack;
    
    FBlendSpaceDirectionContainer();
};

