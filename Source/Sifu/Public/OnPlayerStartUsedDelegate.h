#pragma once
#include "CoreMinimal.h"
#include "OnPlayerStartUsedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerStartUsed, AActor*, _player);

