#pragma once
#include "CoreMinimal.h"
#include "ReplayInitialStateToggleEventDelegateDelegate.h"
#include "ReplayInitialStateToggleGetValueEventDelegateDelegate.h"
#include "ReplayInitialStateToggleEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FReplayInitialStateToggleEvent {
    GENERATED_BODY()
public:
    UPROPERTY()
    FReplayInitialStateToggleEventDelegate m_Event;
    
    UPROPERTY()
    FReplayInitialStateToggleGetValueEventDelegate m_GetValueDelegate;
    
    UPROPERTY()
    AActor* m_Actor;
    
    SIFU_API FReplayInitialStateToggleEvent();
};

