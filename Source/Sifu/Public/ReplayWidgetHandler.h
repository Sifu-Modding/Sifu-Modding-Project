#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "ReplayWidgetHandler.generated.h"

class UReplayTimelineModel;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UReplayWidgetHandler : public UInterface {
    GENERATED_BODY()
};

class IReplayWidgetHandler : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual UReplayTimelineModel* BPF_GetTimelineModel() const PURE_VIRTUAL(BPF_GetTimelineModel, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual void BPF_GetTimelineDilatedTimeBounds(float& _fLowerBound, float& _fUpperBound) const PURE_VIRTUAL(BPF_GetTimelineDilatedTimeBounds,);
    
    UFUNCTION(BlueprintCallable)
    virtual float BPF_GetTimelineDilatedDemoTimeAlpha(float _fDilatedDemoTime) const PURE_VIRTUAL(BPF_GetTimelineDilatedDemoTimeAlpha, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual FVector2D BPF_GetContainerLocalSize() const PURE_VIRTUAL(BPF_GetContainerLocalSize, return FVector2D{};);
    
};

