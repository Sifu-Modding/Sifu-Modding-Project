#pragma once
#include "CoreMinimal.h"
#include "SCLevelSequenceDynamicDelegateDelegate.generated.h"

class USCLevelSequence;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FSCLevelSequenceDynamicDelegate, USCLevelSequence*, _levelSequence);

