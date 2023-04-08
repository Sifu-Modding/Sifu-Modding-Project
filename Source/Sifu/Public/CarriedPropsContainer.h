#pragma once
#include "CoreMinimal.h"
#include "CarriedProps.h"
#include "CarriedPropsContainer.generated.h"

USTRUCT(BlueprintType)
struct FCarriedPropsContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCarriedProps m_CarriedProp;
    
    SIFU_API FCarriedPropsContainer();
};

