#pragma once
#include "CoreMinimal.h"
#include "AbilityDynamicDelegateDelegate.h"
#include "AbilityDelegateHandler.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FAbilityDelegateHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAbilityDynamicDelegate> m_OnActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAbilityDynamicDelegate> m_OnDeactivated;
    
    FAbilityDelegateHandler();
};

