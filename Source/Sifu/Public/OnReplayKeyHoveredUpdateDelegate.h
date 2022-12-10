#pragma once
#include "CoreMinimal.h"
#include "OnReplayKeyHoveredUpdateDelegate.generated.h"

class UReplayKey;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnReplayKeyHoveredUpdate, UReplayKey*, _key, bool, _bIsHovered);

