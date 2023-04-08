#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "BaseActorConditionInstance.h"
#include "SCConditionnalAnimContainer.generated.h"

USTRUCT(BlueprintType)
struct FSCConditionnalAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_animContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBaseActorConditionInstance> m_Conditions;
    
    SIFU_API FSCConditionnalAnimContainer();
};

