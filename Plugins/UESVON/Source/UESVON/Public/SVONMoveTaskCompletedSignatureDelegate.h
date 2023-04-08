#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "SVONMoveTaskCompletedSignatureDelegate.generated.h"

class AAIController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSVONMoveTaskCompletedSignature, TEnumAsByte<EPathFollowingResult::Type>, Result, AAIController*, AIController);

