#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ReplayTimelineContainerBase.generated.h"

class IReplayWidgetHandler;
class UReplayWidgetHandler;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UReplayTimelineContainerBase : public UUserWidget {
    GENERATED_BODY()
public:
    UReplayTimelineContainerBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TScriptInterface<IReplayWidgetHandler> BPF_GetWidgetHandler() const;
    
};

