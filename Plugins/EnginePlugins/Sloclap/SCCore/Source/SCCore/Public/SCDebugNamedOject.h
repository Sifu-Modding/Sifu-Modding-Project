#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Interface.h"
#include "SCDebugNamedOject.generated.h"

UINTERFACE(Blueprintable)
class SCCORE_API USCDebugNamedOject : public UInterface {
    GENERATED_BODY()
};

class SCCORE_API ISCDebugNamedOject : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDebugName(FName _name);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDebugColor(const FColor& _color);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetDebugName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FColor GetDebugColor() const;
    
};

