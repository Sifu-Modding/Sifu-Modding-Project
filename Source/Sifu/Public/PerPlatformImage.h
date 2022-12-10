#pragma once
#include "CoreMinimal.h"
#include "Components/Image.h"
#include "PerPlatformWidget.h"
#include "UObject/NoExportTypes.h"
#include "PerPlatformImage.generated.h"

UCLASS()
class UPerPlatformImage : public UImage, public IPerPlatformWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D NormalSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D SmallScreenSize;
    
    UPerPlatformImage();
    UFUNCTION(BlueprintCallable)
    void RefreshGUIs();
    
    
    // Fix for true pure virtual functions not being implemented
};

