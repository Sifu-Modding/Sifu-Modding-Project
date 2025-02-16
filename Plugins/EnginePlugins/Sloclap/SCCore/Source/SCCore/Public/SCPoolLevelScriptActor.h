#pragma once
#include "CoreMinimal.h"
#include "SCLevelScriptActor.h"
#include "SCPoolLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class SCCORE_API ASCPoolLevelScriptActor : public ASCLevelScriptActor {
    GENERATED_BODY()
public:
    ASCPoolLevelScriptActor(const FObjectInitializer& ObjectInitializer);

};

