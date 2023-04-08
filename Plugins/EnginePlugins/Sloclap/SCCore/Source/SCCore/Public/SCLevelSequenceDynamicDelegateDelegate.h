#pragma once
#include "CoreMinimal.h"
#include "SCLevelSequenceDynamicDelegateDelegate.generated.h"

class USCLevelSequence;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FSCLevelSequenceDynamicDelegate, USCLevelSequence*, _levelSequence);

