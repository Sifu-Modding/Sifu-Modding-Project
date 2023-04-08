#pragma once
#include "CoreMinimal.h"
#include "SCDialogComponent.h"
#include "FightingAIDialogComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UFightingAIDialogComponent : public USCDialogComponent {
    GENERATED_BODY()
public:
    UFightingAIDialogComponent();
};

