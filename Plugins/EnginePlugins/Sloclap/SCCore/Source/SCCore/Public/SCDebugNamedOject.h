#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "SCDebugNamedOject.generated.h"

UINTERFACE(Blueprintable)
class SCCORE_API USCDebugNamedOject : public UInterface {
    GENERATED_BODY()
};

class SCCORE_API ISCDebugNamedOject : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void SetDebugName(FName _name);
    
    UFUNCTION(BlueprintNativeEvent)
    void SetDebugColor(const FColor& _color);
    
    UFUNCTION(BlueprintNativeEvent)
    FName GetDebugName() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FColor GetDebugColor() const;
    
};

