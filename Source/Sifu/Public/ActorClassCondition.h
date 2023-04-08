#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "ActorClassCondition.generated.h"

class AActor;

UCLASS(Blueprintable)
class SIFU_API UActorClassCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> m_Class;
    
    UActorClassCondition();
};

