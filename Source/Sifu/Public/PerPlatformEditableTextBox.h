#pragma once
#include "CoreMinimal.h"
#include "Components/EditableTextBox.h"
#include "PerPlatformWidget.h"
#include "PerPlatformEditableTextBox.generated.h"

UCLASS()
class UPerPlatformEditableTextBox : public UEditableTextBox, public IPerPlatformWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NormalSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SmallScreenSize;
    
    UPerPlatformEditableTextBox();
    
    // Fix for true pure virtual functions not being implemented
};

