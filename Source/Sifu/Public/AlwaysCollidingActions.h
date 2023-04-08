#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
#include "AlwaysCollidingActions.generated.h"

USTRUCT(BlueprintType)
struct FAlwaysCollidingActions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<InputAction> m_Actions;
    
    SIFU_API FAlwaysCollidingActions();
};

