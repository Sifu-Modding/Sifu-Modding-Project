#pragma once
#include "CoreMinimal.h"
#include "CardinalAnimContainer.h"
#include "CardinalChangementAnimContainer.generated.h"

USTRUCT(BlueprintType)
struct FCardinalChangementAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCardinalAnimContainer m_Cardinals[4];
    
    SIFU_API FCardinalChangementAnimContainer();
};

