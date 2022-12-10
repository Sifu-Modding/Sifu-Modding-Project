#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BindablePropertyUpdateSignatureDelegate.h"
#include "BindablePropertyBase.generated.h"

UCLASS(Abstract, BlueprintType)
class SIFU_API UBindablePropertyBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, Transient)
    FBindablePropertyUpdateSignature m_OnUpdateFromModel;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FBindablePropertyUpdateSignature m_OnPropertyUpdate;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FBindablePropertyUpdateSignature m_OnPropertyPreUpdate;
    
    UBindablePropertyBase();
    UFUNCTION(BlueprintCallable)
    void BPF_SetOwner(UObject* _owner);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsValid() const;
    
};

