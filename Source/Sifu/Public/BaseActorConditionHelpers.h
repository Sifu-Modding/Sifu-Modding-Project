#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BaseActorConditionInstance.h"
#include "BaseActorConditionHelpers.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class SIFU_API UBaseActorConditionHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBaseActorConditionHelpers();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* BPF_GetInstance(const FBaseActorConditionInstance& _instance);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_Evaluate(const FBaseActorConditionInstance& _instance, AActor* _actor, bool _bDefaultResult);
    
};

