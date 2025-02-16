#pragma once
#include "CoreMinimal.h"
#include "Components/SizeBox.h"
#include "PerPlatformWidget.h"
#include "PerPlatformSizeBox.generated.h"

UCLASS(Blueprintable)
class UPerPlatformSizeBox : public USizeBox, public IPerPlatformWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalWidthOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmallScreenWidthOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalHeightOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmallScreenHeightOverride;
    
    UPerPlatformSizeBox();


    // Fix for true pure virtual functions not being implemented
};

