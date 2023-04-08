#pragma once
#include "CoreMinimal.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/CanvasPanelSlot.h"
#include "PerPlatformCanvaPanelSlot.generated.h"

UCLASS(Blueprintable)
class UPerPlatformCanvaPanelSlot : public UCanvasPanelSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnchorData NormalLayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnchorData SmallScreenLayoutData;
    
    UPerPlatformCanvaPanelSlot();
};

