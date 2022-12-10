#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "SCLocalPlayer.generated.h"

UCLASS(NonTransient)
class SIFU_API USCLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    USCLocalPlayer();
};

