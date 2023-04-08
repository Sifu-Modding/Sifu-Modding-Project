#pragma once
#include "CoreMinimal.h"
#include "SCUserDefinedEnumHandler.h"
#include "Components/RichTextBlockDecorator.h"
#include "EControllerIconAxisTypes.h"
#include "EControllerIconStyles.h"
#include "Templates/SubclassOf.h"
#include "RichTextBlockControllerDecorator.generated.h"

class UUserWidget;

UCLASS(Abstract, Blueprintable)
class URichTextBlockControllerDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControllerIconStyles m_eDefaultIconStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControllerIconAxisTypes m_eDefaultAxisType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCUserDefinedEnumHandler m_DefaultDrawingStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> m_WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iBaselineOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_MetaData;
    
    URichTextBlockControllerDecorator();
};

