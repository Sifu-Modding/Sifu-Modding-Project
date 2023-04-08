#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StarUnlockConditionClassInstance.generated.h"

class UStarUnlockCondition;

USTRUCT(BlueprintType)
struct SIFU_API FStarUnlockConditionClassInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStarUnlockCondition> m_DefaultClassObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStarUnlockCondition* m_Instance;
    
    FStarUnlockConditionClassInstance();
};

