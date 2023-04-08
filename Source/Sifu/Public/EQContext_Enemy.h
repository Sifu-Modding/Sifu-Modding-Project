#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EQContext_Enemy.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UEQContext_Enemy : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UEQContext_Enemy();
};

