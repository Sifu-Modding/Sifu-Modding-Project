#pragma once
#include "CoreMinimal.h"
#include "Components/MultiLineEditableText.h"
#include "PerPlatformWidget.h"
#include "PerPlatformMultiLineEditableTextBox.generated.h"

UCLASS()
class UPerPlatformMultiLineEditableTextBox : public UMultiLineEditableText, public IPerPlatformWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NormalSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SmallScreenSize;
    
    UPerPlatformMultiLineEditableTextBox();
    
    // Fix for true pure virtual functions not being implemented
};

