#pragma once
#include "CoreMinimal.h"
#include "BindablePropertyBase.h"
#include "BindableStringProperty.generated.h"

UCLASS(Blueprintable)
class SIFU_API UBindableStringProperty : public UBindablePropertyBase {
    GENERATED_BODY()
public:
    UBindableStringProperty();
    UFUNCTION(BlueprintCallable)
    void BPF_SetValue(const FString& _value);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetRef(UPARAM(Ref) FString& _value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString BPF_GetValue() const;
    
};

