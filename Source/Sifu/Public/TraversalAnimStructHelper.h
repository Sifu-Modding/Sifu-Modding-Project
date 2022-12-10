#pragma once
#include "CoreMinimal.h"
#include "ETraversalPhase.h"
#include "AnimContainer.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AnimStructTraversal.h"
#include "TraversalAnimStructHelper.generated.h"

class UPlayerAnim;

UCLASS(BlueprintType)
class SIFU_API UTraversalAnimStructHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTraversalAnimStructHelper();
    UFUNCTION(BlueprintPure)
    static FAnimContainer BPF_GetAnimContainerFromPhase(UPlayerAnim* _playerAnim, const FAnimStructTraversal& _animStructTraversal, ETraversalPhase _eTraversalPhase);
    
};

