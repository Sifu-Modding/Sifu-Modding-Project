#pragma once
#include "CoreMinimal.h"
#include "Components/ScaleBox.h"
#include "PerPlatformWidget.h"
#include "Widgets/Layout/SScaleBox.h"
#include "Widgets/Layout/SScaleBox.h"
#include "PerPlatformScaleBox.generated.h"

UCLASS()
class UPerPlatformScaleBox : public UScaleBox, public IPerPlatformWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EStretch::Type> NormalStretch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EStretch::Type> SmallScreenStretch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EStretchDirection::Type> NormalStretchDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EStretchDirection::Type> SmallScreenStretchDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NormalUserSpecifiedScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SmallScreenUserSpecifiedScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool NormalIgnoreInheritedScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool SmallScreenIgnoreInheritedScale;
    
    UPerPlatformScaleBox();
    
    // Fix for true pure virtual functions not being implemented
};

