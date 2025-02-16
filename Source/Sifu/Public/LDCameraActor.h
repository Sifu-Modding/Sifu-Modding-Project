#pragma once
#include "CoreMinimal.h"
#include "SCActor.h"
#include "LDCameraActor.generated.h"

UCLASS(Blueprintable)
class SIFU_API ALDCameraActor : public ASCActor {
    GENERATED_BODY()
public:
    ALDCameraActor(const FObjectInitializer& ObjectInitializer);

};

