#pragma once
#include "CoreMinimal.h"
#include "Components/PanelWidget.h"
#include "PerPlatformWidget.h"
#include "PerPlatformWidgetLoader.generated.h"

UCLASS(Blueprintable)
class UPerPlatformWidgetLoader : public UPanelWidget, public IPerPlatformWidget {
    GENERATED_BODY()
public:
    UPerPlatformWidgetLoader();


    // Fix for true pure virtual functions not being implemented
};

