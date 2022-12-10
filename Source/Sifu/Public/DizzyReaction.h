#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "PropertyReaction.h"
#include "DizzyReaction.generated.h"

USTRUCT(BlueprintType)
struct FDizzyReaction : public FPropertyReaction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimContainer m_Loop;
    
    UPROPERTY(EditAnywhere)
    bool m_bMirrorableLoop;
    
    UPROPERTY(EditAnywhere)
    bool m_bAllowDizzyOnTopOfDizzy;
    
    SIFU_API FDizzyReaction();
};

