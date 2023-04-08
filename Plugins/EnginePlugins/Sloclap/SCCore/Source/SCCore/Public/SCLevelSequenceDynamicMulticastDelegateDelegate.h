#pragma once
#include "CoreMinimal.h"
#include "SCLevelSequenceDynamicMulticastDelegateDelegate.generated.h"

class USCLevelSequence;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSCLevelSequenceDynamicMulticastDelegate, USCLevelSequence*, _levelSequence);

