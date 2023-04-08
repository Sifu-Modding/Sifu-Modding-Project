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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayInitialStateToggleEventDelegate m_Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayInitialStateToggleGetValueEventDelegate m_GetValueDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_Actor;
    
    SIFU_API FReplayInitialStateToggleEvent();
};

