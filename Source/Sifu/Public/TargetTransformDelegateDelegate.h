#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BPOrderServiceInstance.h"
#include "TargetTransformDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FTargetTransformDelegate, const FBPOrderServiceInstance&, _instance, bool&, _bOutSuccess, FTransform&, _result);

