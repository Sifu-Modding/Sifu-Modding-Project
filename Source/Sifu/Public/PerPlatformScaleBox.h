#pragma once
#include "CoreMinimal.h"
#include "Widgets/Layout/SScaleBox.h"
#include "Widgets/Layout/SScaleBox.h"
#include "Components/ScaleBox.h"
#include "PerPlatformWidget.h"
#include "PerPlatformScaleBox.generated.h"

UCLASS(Blueprintable)
class UPerPlatformScaleBox : public UScaleBox, public IPerPlatformWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EStretch::Type> NormalStretch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EStretch::Type> SmallScreenStretch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EStretchDirection::Type> NormalStretchDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EStretchDirection::Type> SmallScreenStretchDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalUserSpecifiedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmallScreenUserSpecifiedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NormalIgnoreInheritedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SmallScreenIgnoreInheritedScale;
    
    UPerPlatformScaleBox();
    
    // Fix for true pure virtual functions not being implemented
};

