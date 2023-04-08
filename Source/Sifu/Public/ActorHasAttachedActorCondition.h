#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "ActorHasAttachedActorCondition.generated.h"

class AActor;

UCLASS(Blueprintable)
class SIFU_API UActorHasAttachedActorCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> m_Class;
    
    UActorHasAttachedActorCondition();
};

