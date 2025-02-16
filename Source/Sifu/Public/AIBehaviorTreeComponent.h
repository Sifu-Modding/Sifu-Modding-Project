#pragma once
#include "CoreMinimal.h"
#include "SCBehaviorTreeComponent.h"
#include "AIBehaviorTreeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UAIBehaviorTreeComponent : public USCBehaviorTreeComponent {
    GENERATED_BODY()
public:
    UAIBehaviorTreeComponent(const FObjectInitializer& ObjectInitializer);

};

