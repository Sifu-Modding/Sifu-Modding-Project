#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SCDelegate.h"
#include "ECaptureInputStep.h"
#include "InputMappingData.h"
#include "MappingID.h"
#include "CaptureInputAction.generated.h"

class UCaptureInputAction;
class UInputMappingWidgetData;

UCLASS(Blueprintable)
class SIFU_API UCaptureInputAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCaptureDelegate, const FInputMappingData&, _result, ECaptureInputStep, _NewStep);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCaptureDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCaptureDelegate OnUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCaptureDelegate OnStepStarted;
    
  /*  UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast* OnCancel;*/
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingWidgetData* m_Data;
    
public:
    UCaptureInputAction();
    UFUNCTION(BlueprintCallable)
    static UCaptureInputAction* BPF_CaptureInput(const UInputMappingWidgetData* _data, const FMappingID& _item, FInputMappingData _baseInputData, int32 _iSlodID, bool _bCaptureAxis, float _fMouseAxisThreshold, int32 _iControllerTypes, bool _bBreakDependency, bool _bInverseMouseVerticalAxis);
    
};

