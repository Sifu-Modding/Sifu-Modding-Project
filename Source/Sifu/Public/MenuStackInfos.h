#pragma once
#include "CoreMinimal.h"
#include "EMenuEnum.h"
#include "MenuStackInfos.generated.h"

class UPanelWidget;
class UWidget;

USTRUCT(BlueprintType)
struct FMenuStackInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuEnum m_eMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPanelWidget> m_Container;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWidget> m_FocusedButton;
    
    SIFU_API FMenuStackInfos();
};

