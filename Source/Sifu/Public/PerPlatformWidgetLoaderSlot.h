#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetSwitcherSlot.h"
#include "EWidgetPlatform.h"
#include "PerPlatformWidgetLoaderSlot.generated.h"

UCLASS(Blueprintable)
class UPerPlatformWidgetLoaderSlot : public UWidgetSwitcherSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetPlatform Platform;
    
    UPerPlatformWidgetLoaderSlot();
};

