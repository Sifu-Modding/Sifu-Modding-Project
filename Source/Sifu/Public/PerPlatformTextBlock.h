#pragma once
#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "PerPlatformWidget.h"
#include "PerPlatformTextBlock.generated.h"

UCLASS()
class UPerPlatformTextBlock : public UTextBlock, public IPerPlatformWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NormalSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SmallScreenSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NormalWrapTextAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SmallScreenWrapTextAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NormalLetterSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SmallScreenLetterSpacing;
    
    UPerPlatformTextBlock();
    
    // Fix for true pure virtual functions not being implemented
};

