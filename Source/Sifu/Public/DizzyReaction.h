#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "PropertyReaction.h"
#include "DizzyReaction.generated.h"

USTRUCT(BlueprintType)
struct FDizzyReaction : public FPropertyReaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMirrorableLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAllowDizzyOnTopOfDizzy;
    
    SIFU_API FDizzyReaction();
};

