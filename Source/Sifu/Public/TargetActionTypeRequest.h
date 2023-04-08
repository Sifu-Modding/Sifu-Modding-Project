#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EActionType.h"
#include "TargetActionTypeRequest.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UTargetActionTypeRequest : public UObject {
    GENERATED_BODY()
public:
    UTargetActionTypeRequest();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EActionType BPE_GetTargetActionType(const AActor* _owner) const;
    
};

