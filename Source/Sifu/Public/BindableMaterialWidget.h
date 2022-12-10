#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "Components/Widget.h"
#include "BindableMaterialWidget.generated.h"

class UMaterialInstanceDynamic;

UCLASS(EditInlineNew)
class UBindableMaterialWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* m_MaterialInstance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_FloatParameterName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FloatValue;
    
    UPROPERTY()
    UWidget::FGetFloat FloatValueDelegate;
    
public:
    UBindableMaterialWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_SetMaterialInstance(UMaterialInstanceDynamic* _materialInstance);
    
};

