#pragma once
#include "CoreMinimal.h"
#include "SCButton.h"
#include "EquipmentSelectionButton.generated.h"

UCLASS()
class SIFU_API UEquipmentSelectionButton : public USCButton {
    GENERATED_BODY()
public:
    UEquipmentSelectionButton();
    UFUNCTION()
    void OnButtonClicked();
    
};

