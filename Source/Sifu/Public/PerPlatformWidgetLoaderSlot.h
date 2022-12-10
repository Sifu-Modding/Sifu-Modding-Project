#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetSwitcherSlot.h"
#include "EWidgetPlatform.h"
#include "PerPlatformWidgetLoaderSlot.generated.h"

UCLASS()
class UPerPlatformWidgetLoaderSlot : public UWidgetSwitcherSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EWidgetPlatform Platform;
    
    UPerPlatformWidgetLoaderSlot();
};

