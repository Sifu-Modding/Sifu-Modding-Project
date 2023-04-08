#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AIConditionClassInstance.generated.h"

class UComboTransitionCondition;

USTRUCT(BlueprintType)
struct SIFU_API FAIConditionClassInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UComboTransitionCondition> m_DefaultClassObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UComboTransitionCondition* m_Instance;
    
    FAIConditionClassInstance();
};

