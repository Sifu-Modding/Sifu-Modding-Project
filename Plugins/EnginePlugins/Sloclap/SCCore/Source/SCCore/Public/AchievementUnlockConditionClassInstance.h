#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AchievementUnlockConditionClassInstance.generated.h"

class UAchievementUnlockCondition;

USTRUCT(BlueprintType)
struct SCCORE_API FAchievementUnlockConditionClassInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAchievementUnlockCondition> m_DefaultClassObject;
    
    UPROPERTY(EditAnywhere, Instanced)
    UAchievementUnlockCondition* m_Instance;
    
    FAchievementUnlockConditionClassInstance();
};

