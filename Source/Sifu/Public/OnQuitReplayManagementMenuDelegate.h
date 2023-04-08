#pragma once
#include "CoreMinimal.h"
#include "OnQuitReplayManagementMenuDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuitReplayManagementMenu, bool, _bHasLaunchedReplay);

