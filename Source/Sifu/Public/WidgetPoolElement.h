#pragma once
#include "CoreMinimal.h"
#include "WidgetPoolElement.generated.h"

class USCUserWidget;

USTRUCT(BlueprintType)
struct FWidgetPoolElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USCUserWidget* m_Widget;
    
    SIFU_API FWidgetPoolElement();
};

