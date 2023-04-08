#pragma once
#include "CoreMinimal.h"
#include "SCUserDefinedEnumHandler.h"
#include "Templates/SubclassOf.h"
#include "WidgetPoolEntryTemplate.generated.h"

class USCUserWidget;

USTRUCT(BlueprintType)
struct SIFU_API FWidgetPoolEntryTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCUserDefinedEnumHandler m_LayerEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USCUserWidget> m_WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iNumberOfInstances;
    
    FWidgetPoolEntryTemplate();
};

