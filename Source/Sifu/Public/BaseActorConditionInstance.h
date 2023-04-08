#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseActorConditionInstance.generated.h"

class UBaseActorCondition;

USTRUCT(BlueprintType)
struct SIFU_API FBaseActorConditionInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBaseActorCondition> m_DefaultClassObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBaseActorCondition* m_Instance;
    
    FBaseActorConditionInstance();
};

