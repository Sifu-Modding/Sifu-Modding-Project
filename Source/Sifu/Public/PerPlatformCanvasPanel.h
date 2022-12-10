#pragma once
#include "CoreMinimal.h"
#include "Components/CanvasPanel.h"
#include "PerPlatformWidget.h"
#include "PerPlatformCanvasPanel.generated.h"

UCLASS()
class UPerPlatformCanvasPanel : public UCanvasPanel, public IPerPlatformWidget {
    GENERATED_BODY()
public:
    UPerPlatformCanvasPanel();
    
    // Fix for true pure virtual functions not being implemented
};

