#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SCBTDecorator.h"
#include "SCAIExecutePendingActionDecorator.generated.h"

UCLASS(Blueprintable)
class SCCORE_API USCAIExecutePendingActionDecorator : public USCBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_GameplayTag;
    
public:
    USCAIExecutePendingActionDecorator();

};

