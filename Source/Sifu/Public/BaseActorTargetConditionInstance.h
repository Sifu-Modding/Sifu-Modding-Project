#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseActorTargetConditionInstance.generated.h"

class UBaseActorTargetCondition;

USTRUCT(BlueprintType)
struct SIFU_API FBaseActorTargetConditionInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBaseActorTargetCondition> m_DefaultClassObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBaseActorTargetCondition* m_Instance;
    
    FBaseActorTargetConditionInstance();
};

