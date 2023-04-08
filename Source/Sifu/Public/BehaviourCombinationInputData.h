#pragma once
#include "CoreMinimal.h"
#include "CombinationInputData.h"
#include "InputBehaviourStruct.h"
#include "BehaviourCombinationInputData.generated.h"

UCLASS(Blueprintable)
class SIFU_API UBehaviourCombinationInputData : public UCombinationInputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputBehaviourStruct m_BehaviourStruct;
    
    UBehaviourCombinationInputData();
};

