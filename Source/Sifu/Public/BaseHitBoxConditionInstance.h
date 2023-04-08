#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseHitBoxConditionInstance.generated.h"

class UHitBoxCondition;

USTRUCT(BlueprintType)
struct SIFU_API FBaseHitBoxConditionInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHitBoxCondition> m_DefaultClassObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitBoxCondition* m_Instance;
    
    FBaseHitBoxConditionInstance();
};

