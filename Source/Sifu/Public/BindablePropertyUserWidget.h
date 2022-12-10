#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SCUserWidget.h"
#include "OnInputUpdateSignatureDelegate.h"
#include "OnPropertyUpdatedSignatureDelegate.h"
#include "BindablePropertyUserWidget.generated.h"

class UBindablePropertyBase;

UCLASS(EditInlineNew)
class SIFU_API UBindablePropertyUserWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FOnInputUpdateSignature m_OnInputUpdate;
    
    UPROPERTY(BlueprintAssignable, EditAnywhere)
    FOnPropertyUpdatedSignature m_OnPropertyUpdated;
    
    UPROPERTY(EditAnywhere)
    bool m_bSelfBindingProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bConstructProperty;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UBindablePropertyBase> m_PropertyClass;
    
    UPROPERTY(EditAnywhere)
    FName m_PropertyName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UBindablePropertyBase* m_Property;
    
public:
    UBindablePropertyUserWidget();
protected:
    UFUNCTION()
    void OnPropertyUpdated(UBindablePropertyBase* _property);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RefreshDisplay();
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnInputUpdate();
    
    UFUNCTION(BlueprintCallable)
    void BPF_CreateProperty();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnSelfBinding();
    
};

