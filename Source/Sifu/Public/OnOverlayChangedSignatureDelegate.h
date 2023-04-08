#pragma once
#include "CoreMinimal.h"
#include "OnOverlayChangedSignatureDelegate.generated.h"

class UReplayUIModeUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnOverlayChangedSignature, const UReplayUIModeUserWidget*, _currentOverlay, const UReplayUIModeUserWidget*, _nextOverlay);

