#pragma once
#include "CoreMinimal.h"
#include "EALBinaryOperation.h"
#include "SCAnimNotifyState.h"
#include "AvailabilityLayerNotifyState.generated.h"

class UAvailabilityLayerData;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SIFU_API UAvailabilityLayerNotifyState : public USCAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvailabilityLayerData* m_availabilityLayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EALBinaryOperation m_eOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_alName;
    
    UAvailabilityLayerNotifyState();

};

