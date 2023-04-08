#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AchievementUnlockConditionClassInstance.generated.h"

class UAchievementUnlockCondition;

USTRUCT(BlueprintType)
struct SCCORE_API FAchievementUnlockConditionClassInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAchievementUnlockCondition> m_DefaultClassObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAchievementUnlockCondition* m_Instance;
    
    FAchievementUnlockConditionClassInstance();
};

