#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AIActionAttackClassInstance.generated.h"

class UAIActionAttack;

USTRUCT(BlueprintType)
struct SIFU_API FAIActionAttackClassInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAIActionAttack> m_DefaultClassObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIActionAttack* m_Instance;
    
    FAIActionAttackClassInstance();
};

