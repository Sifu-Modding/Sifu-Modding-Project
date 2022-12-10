#pragma once
#include "CoreMinimal.h"
#include "Binding/PropertyBinding.h"
#include "AsyncTextureStruct.h"
#include "AsyncTextureBinding.generated.h"

UCLASS()
class SIFU_API UAsyncTextureBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UAsyncTextureBinding();
    UFUNCTION()
    FAsyncTextureStruct GetValue() const;
    
};

