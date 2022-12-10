#pragma once
#include "CoreMinimal.h"
#include "HitBoxComponent.h"
#include "CharacterHitBoxComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UCharacterHitBoxComponent : public UHitBoxComponent {
    GENERATED_BODY()
public:
    UCharacterHitBoxComponent();
};

