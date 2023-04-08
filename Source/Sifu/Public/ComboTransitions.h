#pragma once
#include "CoreMinimal.h"
#include "ComboTransition.h"
#include "ComboTransitions.generated.h"

USTRUCT(BlueprintType)
struct FComboTransitions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComboTransition> m_Transitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ParentNodeName;
    
    SIFU_API FComboTransitions();
};

