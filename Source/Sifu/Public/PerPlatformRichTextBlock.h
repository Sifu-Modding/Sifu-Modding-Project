#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlock.h"
#include "PerPlatformWidget.h"
#include "PerPlatformRichTextBlock.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UPerPlatformRichTextBlock : public URichTextBlock, public IPerPlatformWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* NormalTextStyleSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SmallScreenTextStyleSet;
    
    UPerPlatformRichTextBlock();
    
    // Fix for true pure virtual functions not being implemented
};

