#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESCType.h"
#include "SCUserWidget.h"
#include "BlendableWidget.generated.h"

class UMaterialParameterCollection;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UBlendableWidget : public USCUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBlendDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCType m_eBlendValueType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_ColorStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_ColorEnd;
    
public:
    UBlendableWidget();
    UFUNCTION(BlueprintCallable)
    void BPF_StartTimerBlend(bool _bReverse);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetBlendedFloat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor BPF_GetBlendedColor() const;
    
public:
    UFUNCTION(BlueprintCallable)
    int32 BPF_BindMaterialParameterToBlendAlpha(UMaterialParameterCollection* _collection, FName _parameterName);
    
};

