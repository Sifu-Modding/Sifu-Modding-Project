#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "SCLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class SIFU_API USCLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    USCLocalPlayer();

};

