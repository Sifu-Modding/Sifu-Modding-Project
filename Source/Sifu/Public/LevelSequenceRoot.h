#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LevelSequenceRoot.generated.h"

UCLASS(Blueprintable)
class SIFU_API ALevelSequenceRoot : public AActor {
    GENERATED_BODY()
public:
    ALevelSequenceRoot(const FObjectInitializer& ObjectInitializer);

};

