#pragma once
#include "CoreMinimal.h"
#include "EInputMappingForceController.h"
#include "InputMappingProfileData.h"
#include "WidgetData.h"
#include "InputMappingWidgetData.generated.h"

UCLASS(Blueprintable)
class SIFU_API UInputMappingWidgetData : public UWidgetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputMappingProfileData m_InputContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputMappingForceController m_eControllerType;
    
    UInputMappingWidgetData();
};

