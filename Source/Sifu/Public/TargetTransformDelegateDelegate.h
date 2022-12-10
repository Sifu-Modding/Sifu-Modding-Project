#pragma once
#include "CoreMinimal.h"
#include "BPOrderServiceInstance.h"
#include "UObject/NoExportTypes.h"
#include "TargetTransformDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FTargetTransformDelegate, const FBPOrderServiceInstance&, _instance, bool&, _bOutSuccess, FTransform&, _result);

