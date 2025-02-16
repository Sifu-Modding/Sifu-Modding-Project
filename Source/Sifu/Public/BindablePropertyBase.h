#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BindablePropertyUpdateSignatureDelegate.h"
#include "BindablePropertyBase.generated.h"

UCLASS(Abstract, Blueprintable)
class SIFU_API UBindablePropertyBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBindablePropertyUpdateSignature m_OnUpdateFromModel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBindablePropertyUpdateSignature m_OnPropertyUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBindablePropertyUpdateSignature m_OnPropertyPreUpdate;
    
    UBindablePropertyBase();

    UFUNCTION(BlueprintCallable)
    void BPF_SetOwner(UObject* _owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsValid() const;
    
};

