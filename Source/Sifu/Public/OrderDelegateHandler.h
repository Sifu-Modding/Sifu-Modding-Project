#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OrderStartingDynamicDelegateDelegate.h"
#include "OrderDelegateHandler.generated.h"

UCLASS()
class SIFU_API UOrderDelegateHandler : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOrderStartingDynamicDelegate m_OnStarting;
    
    UPROPERTY(BlueprintAssignable)
    FOrderStartingDynamicDelegate m_OnStarted;
    
    UPROPERTY(BlueprintAssignable)
    FOrderStartingDynamicDelegate m_OnEnding;
    
    UPROPERTY(BlueprintAssignable)
    FOrderStartingDynamicDelegate m_OnEnded;
    
    UPROPERTY(BlueprintAssignable)
    FOrderStartingDynamicDelegate m_OnCanceled;
    
    UOrderDelegateHandler();
};

