#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AnimContainer.h"
#include "AnimStructTraversal.h"
#include "ETraversalPhase.h"
#include "TraversalAnimStructHelper.generated.h"

class UPlayerAnim;

UCLASS(Blueprintable)
class SIFU_API UTraversalAnimStructHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTraversalAnimStructHelper();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAnimContainer BPF_GetAnimContainerFromPhase(UPlayerAnim* _playerAnim, const FAnimStructTraversal& _animStructTraversal, ETraversalPhase _eTraversalPhase);
    
};

