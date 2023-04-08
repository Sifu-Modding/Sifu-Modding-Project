#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IgnoreCollisionStatics.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class IGNORECOLLISIONMODULE_API UIgnoreCollisionStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIgnoreCollisionStatics();
    UFUNCTION(BlueprintCallable)
    static void BPF_SetCollisionIgnored(UPrimitiveComponent* _ComponentA, FName _boneNameA, UPrimitiveComponent* _ComponentB, FName _boneNameB, bool _bIgnoreCollision);
    
};

