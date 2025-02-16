#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "ButtonUserWidget.h"
#include "EControllerIconAxisTypes.h"
#include "EControllerIconStyles.h"
#include "InputAction.h"
#include "InputContext.h"
#include "InputMappingNode.h"
#include "MappingID.h"
#include "ControllerButtonWidget.generated.h"

class UGenericInputData;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UControllerButtonWidget : public UButtonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iInputSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_AxisScaleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    InputContext m_eInputContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControllerIconAxisTypes m_eAxisType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUpdateOnControllerTypeChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGenericInputData*> m_InputDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControllerIconStyles m_IconStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    InputAction m_eAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMappingID m_MappingID;
    
public:
    UControllerButtonWidget();

    UFUNCTION(BlueprintCallable)
    void BPF_SetMappingID(const FMappingID& _mappingID, bool _bRefresh);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetInputSlotIndex(int32 _iSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetInputDatas(TArray<UGenericInputData*> _InputDatas);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetInputData(UGenericInputData* _InputData);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetIconStyle(EControllerIconStyles _eIconStyle, bool _bRefresh);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetAxisType(EControllerIconAxisTypes _eAxisType, bool _bRefresh);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetAction(InputAction _eAction, bool _bRefresh);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsKeyboardInput();
    
    UFUNCTION(BlueprintCallable)
    void BPF_GetUIKeyInfos(bool& _bOutFoundIcon, FInputMappingNode& _outNode, TSoftObjectPtr<UTexture2D>& _icon, FKey& _key, FText& _replacementText, bool& _bShowText, FString& _outSeparator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText BPF_GetKeyDisplayName(const FKey& _key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetInputNode(FInputMappingNode& Node);
    
};

