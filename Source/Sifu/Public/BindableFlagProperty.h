#pragma once
#include "CoreMinimal.h"
#include "BindableIntProperty.h"
#include "BindableFlagProperty.generated.h"

UCLASS(Blueprintable)
class SIFU_API UBindableFlagProperty : public UBindableIntProperty {
    GENERATED_BODY()
public:
    UBindableFlagProperty();
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveFlags(int32 _iFlags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasAnyFlags(int32 _iFlags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasAllFlags(int32 _iFlags) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddFlags(int32 _iFlags);
    
};

