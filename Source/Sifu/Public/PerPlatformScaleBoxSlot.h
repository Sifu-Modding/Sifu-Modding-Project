#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "Components/ScaleBoxSlot.h"
#include "PerPlatformScaleBoxSlot.generated.h"

UCLASS(Blueprintable)
class UPerPlatformScaleBoxSlot : public UScaleBoxSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin NormalPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin SmallScreenPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> NormalHorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> SmallScreenHorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVerticalAlignment> NormalVerticalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVerticalAlignment> SmallScreenVerticalAlignment;
    
    UPerPlatformScaleBoxSlot();
};

