#pragma once
#include "CoreMinimal.h"
#include "OnScoreChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScoreChanged, int32, _newScore);

