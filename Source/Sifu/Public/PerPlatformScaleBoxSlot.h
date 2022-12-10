#pragma once
#include "CoreMinimal.h"
#include "Components/ScaleBoxSlot.h"
#include "Layout/Margin.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "PerPlatformScaleBoxSlot.generated.h"

UCLASS()
class UPerPlatformScaleBoxSlot : public UScaleBoxSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin NormalPadding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin SmallScreenPadding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> NormalHorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> SmallScreenHorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> NormalVerticalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> SmallScreenVerticalAlignment;
    
    UPerPlatformScaleBoxSlot();
};

