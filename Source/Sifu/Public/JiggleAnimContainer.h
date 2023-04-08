#pragma once
#include "CoreMinimal.h"
#include "CardinalAnimContainer.h"
#include "JiggleAnimContainer.generated.h"

USTRUCT(BlueprintType)
struct FJiggleAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCardinalAnimContainer m_JiggleAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAllowWeapons;
    
    SIFU_API FJiggleAnimContainer();
};

