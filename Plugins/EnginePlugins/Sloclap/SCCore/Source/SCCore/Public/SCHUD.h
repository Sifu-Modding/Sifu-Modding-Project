#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SCHUD.generated.h"

UCLASS(Blueprintable, NonTransient)
class SCCORE_API ASCHUD : public AHUD {
    GENERATED_BODY()
public:
    ASCHUD(const FObjectInitializer& ObjectInitializer);

};

