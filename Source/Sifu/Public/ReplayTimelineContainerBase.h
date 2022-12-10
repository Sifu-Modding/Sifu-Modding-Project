#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ReplayTimelineContainerBase.generated.h"

class UReplayWidgetHandler;
class IReplayWidgetHandler;

UCLASS(EditInlineNew)
class SIFU_API UReplayTimelineContainerBase : public UUserWidget {
    GENERATED_BODY()
public:
    UReplayTimelineContainerBase();
protected:
    UFUNCTION(BlueprintPure)
    TScriptInterface<IReplayWidgetHandler> BPF_GetWidgetHandler() const;
    
};

