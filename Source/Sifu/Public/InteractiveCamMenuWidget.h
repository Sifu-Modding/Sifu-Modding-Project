#pragma once
#include "CoreMinimal.h"
#include "MenuWidget.h"
#include "InteractiveCamMenuWidget.generated.h"

class AInteractiveMenu;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UInteractiveCamMenuWidget : public UMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInteractiveMenu* m_menuHandler;
    
public:
    UInteractiveCamMenuWidget();

};

