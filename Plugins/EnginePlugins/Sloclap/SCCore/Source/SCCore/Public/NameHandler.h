#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NameHandler.generated.h"

UCLASS(Abstract, Blueprintable)
class SCCORE_API UNameHandler : public UObject {
    GENERATED_BODY()
public:
    UNameHandler();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString BPE_GetNameFromIndex(int32 _iIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 BPE_GetIndexFromName(const FString& _inName) const;
    
};

