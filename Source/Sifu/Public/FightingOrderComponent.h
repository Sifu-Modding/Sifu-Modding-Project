#pragma once
#include "CoreMinimal.h"
#include "OrderComponent.h"
#include "FightingOrderComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UFightingOrderComponent : public UOrderComponent {
    GENERATED_BODY()
public:
    UFightingOrderComponent();
};

