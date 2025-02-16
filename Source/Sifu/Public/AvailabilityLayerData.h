#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AvailabilityLayerCombinations.h"
#include "InputAction.h"
#include "InputContext.h"
#include "AvailabilityLayerData.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAvailabilityLayerData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    InputContext m_eContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAvailabilityLayerCombinations> m_Combinations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInvertSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<InputAction> m_inputActionArray;
    
    UAvailabilityLayerData();

};

