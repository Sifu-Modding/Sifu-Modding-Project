#pragma once
#include "CoreMinimal.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/CanvasPanelSlot.h"
#include "PerPlatformCanvaPanelSlot.generated.h"

UCLASS()
class UPerPlatformCanvaPanelSlot : public UCanvasPanelSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnchorData NormalLayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnchorData SmallScreenLayoutData;
    
    UPerPlatformCanvaPanelSlot();
};

