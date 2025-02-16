#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/Image.h"
#include "PerPlatformWidget.h"
#include "PerPlatformImage.generated.h"

UCLASS(Blueprintable)
class UPerPlatformImage : public UImage, public IPerPlatformWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D NormalSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SmallScreenSize;
    
    UPerPlatformImage();

    UFUNCTION(BlueprintCallable)
    void RefreshGUIs();
    

    // Fix for true pure virtual functions not being implemented
};

