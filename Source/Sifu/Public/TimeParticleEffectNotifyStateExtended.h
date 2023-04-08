#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState_TimedParticleEffect.h"
#include "TimeParticleEffectNotifyStateExtended.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SIFU_API UTimeParticleEffectNotifyStateExtended : public UAnimNotifyState_TimedParticleEffect {
    GENERATED_BODY()
public:
    UTimeParticleEffectNotifyStateExtended();
};

