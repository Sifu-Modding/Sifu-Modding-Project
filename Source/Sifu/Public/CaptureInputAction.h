#pragma once
#include "CoreMinimal.h"
#include "MappingID.h"
#include "ECaptureInputStep.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "InputMappingData.h"
#include "SCDelegate.h"
#include "CaptureInputAction.generated.h"

class UInputMappingWidgetData;
class UCaptureInputAction;

UCLASS()
class SIFU_API UCaptureInputAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCaptureDelegate, const FInputMappingData&, _result, ECaptureInputStep, _NewStep);
    
    UPROPERTY(BlueprintAssignable)
    FCaptureDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FCaptureDelegate OnUpdate;
    
    UPROPERTY(BlueprintAssignable)
    FCaptureDelegate OnStepStarted;
    
   /* UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnCancel;*/
    
private:
    UPROPERTY()
    UInputMappingWidgetData* m_Data;
    
public:
    UCaptureInputAction();
    UFUNCTION(BlueprintCallable)
    static UCaptureInputAction* BPF_CaptureInput(const UInputMappingWidgetData* _data, const FMappingID& _item, FInputMappingData _baseInputData, int32 _iSlodID, bool _bCaptureAxis, float _fMouseAxisThreshold, int32 _iControllerTypes, bool _bBreakDependency, bool _bInverseMouseVerticalAxis);
    
};

